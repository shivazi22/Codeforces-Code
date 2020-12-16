#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b,p,q,ans,temp;
	cin>>n>>a>>b>>p>>q;
	ans=(n/a)*p+(n/b)*q;
	long long lcm=(a*b)/__gcd(a,b);
	temp=n/lcm;
	if(p<q)
	{
		ans=ans-temp*p;
	}
	else ans=ans-temp*q;
	cout<<ans<<endl;
}
