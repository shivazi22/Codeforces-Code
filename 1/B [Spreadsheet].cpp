#include<bits/stdc++.h>
using namespace std;

long bb[]={1,26,676,17576,456976};
int aa[200],alpha[50],t[50],test;

int main()
{
    int p=1,B=65;


    for(int i=65;i<=97;i++)
    aa[i]=p++;
    for(int i=1;i<=26;i++)
    alpha[i]=B++;

    cin>>test;

    while(test--)
    {
         string str,a,b,c;
         memset(t,0,sizeof(t));

     long cc=0,papo=1,kit=0;
     long sum=0,inta,ka,xx;
      int i=0;

    cin>>str;
    int l=str.size();


    for(i=0;i<l;i++)
    {
        if( str[i]>='A' && str[i] <='Z' )
        a+=str[i];

        else
        {
          for(int j=i;j<l;j++)
            b+=str[j];
            break;
        }
    }

  int k= b.find('C');
  if(k==-1)
  {
      cout<<"R"<<b;

       int kk=0;
       int pp=a.size()-1;
      for(i=pp;i>=0;i--)
      {sum+=aa[a[pp--]]*bb[kk];
      kk++;
      }

      cout<<"C"<<sum<<endl;
      }
  else
  {

      for(i=k+2;i<l;i++)
        c+=str[i];
      //stringstream(c) >> inta;
      inta = atol(c.c_str());

      while(inta!=0)
      {
          if(inta%26==0)
          {
              t[kit++]=26;
              inta=inta-26;
              inta=inta/26;
          }
          else
          {
              t[kit++]=inta%26;
              inta=inta-(inta%26);
              inta=inta/26;
          }
      }



          for(i=kit-1;i>=0;i--)
          printf("%c",alpha[t[i]]);




                                for(i=1;i<=k;i++)
                                cout<<str[i];
                                 cout<<endl;


                          }


            }

    return 0;
}
