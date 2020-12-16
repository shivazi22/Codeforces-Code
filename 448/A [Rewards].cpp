#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,b1,b2,b3,sum1,sum2,ans,ans1,n;
int main()
{
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    sum1=a1+a2+a3;
    sum2=b1+b2+b3;

    ans=sum1/5;
    if(sum1%5)
    ans++;
    ans1=sum2/10;
    if(sum2%10) ans1++;
    if((ans+ans1)<=n)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;


}
