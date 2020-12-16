#include<bits/stdc++.h>
using namespace std;
char str1[200],str2[200];
long a[200],b[200],i,cc,k,cn;
int main()
{
    scanf("%s%s",str1,str2);
    for(i=0;i<strlen(str1);i++)
    {
        a[str1[i]]++;
    }
    for(i=0;i<strlen(str2);i++)
        b[str2[i]]++;
        int cc=0;
    for(i=97;i<=97+25;i++)
    {
        if(a[i]!=b[i])
            cc=1;
    }
    if(cc==0)
    {
        cout<<"array"<<endl;
        return 0;
    }

    for(i=97;i<=97+25;i++)
    {
        if(a[i]<b[i])
        {
            cout<<"need tree"<<endl;
            return 0;
        }
    }
    k=0;
    for(i=0;i<strlen(str2);i++)
    {
      while(str2[i]!=str1[k])
      {
          k++;
          if(k==strlen(str1))
            break;

      }
      if(str2[i]==str1[k])
        {cn++;k++;}
      if(k==strlen(str1))
        break;

    }
    //cout<<cn<<"         "<<strlen(str2)<<endl;
    if(cn==strlen(str2))
        cout<<"automaton"<<endl;
    else
    cout<<"both"<<endl;
    return 0;
}


