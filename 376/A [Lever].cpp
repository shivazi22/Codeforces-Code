#include<bits/stdc++.h>
using namespace std;
long long sum=0,sum1=0,i,k,pp;
string str;
int main()
{
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='^')
        {
            pp=i;
            for(k=pp+1;k<str.size();k++)
            {
                if(str[k]>='1'&&str[k]<='9')
                sum+=(str[k]-48)*(k-pp);
            }
            for(k=pp-1;k>=0;k--)
            {
                if(str[k]>='1'&&str[k]<='9')
                sum1+=(str[k]-48)*(pp-k);

            }

        }
    }
    if(sum==sum1)
        cout<<"balance"<<endl;
    else if(sum>sum1)
        cout<<"right"<<endl;
    else
        cout<<"left"<<endl;
}
