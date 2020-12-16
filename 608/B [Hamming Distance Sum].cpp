#include<bits/stdc++.h>
using namespace std;
long long sum1[200005],sum2[200005],l1,l2,i,t;
string str1,str2;
int main()
{

    cin>>str1>>str2;
    l1=str1.size();
    l2=str2.size();

    for(i=1; i<=l2; i++)
    {
        if(str2[i-1]=='0')
        {
            sum1[i]=sum1[i-1]+1;
            sum2[i]=sum2[i-1];
        }
        else
        {
            sum1[i]=sum1[i-1];
            sum2[i]=sum2[i-1]+1;
        }
    }

    long long sum=0;
    t=l2-l1+1;

    for(i=1; i<=l1; i++)
    {
        if(str1[i-1]=='1')
            sum+=(sum1[t]-sum1[i-1]);
        else
            sum+=(sum2[t]-sum2[i-1]);
        t++;
    }
    cout<<sum<<endl;

    return 0;
}
