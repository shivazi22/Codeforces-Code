#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
    int i,j,k,l,sum,sum1,sum2,cc=0;
    cin>>str;
    l=str.size();
    for(i=0;i<l;i++)
    {
        sum=str[i]-48;

        //cout<<sum<<endl;
        if(sum%8==0)
        {
            cout<<"YES"<<endl;
            cout<<sum<<endl;
            cc=1;
            return 0;
        }
        for(j=i+1;j<l;j++)
        {
            sum1=sum*10+str[j]-48;
            //cout<<sum1<<endl;
             if(sum1%8==0)
        {
            cout<<"YES"<<endl;
            cout<<sum1<<endl;
            cc=1;
          return 0;
        }
        for(k=j+1;k<l;k++)
        {
            sum2=sum1*10+str[k]-48;
            //cout<<sum2<<endl;
             if(sum2%8==0)
        {
            cout<<"YES"<<endl;
            cout<<sum2<<endl;
            cc=1;
          return 0;
        }
        }

        }
    }
    if(cc==0)
        cout<<"NO"<<endl;

    return 0;
}
