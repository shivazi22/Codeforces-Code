#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,a[100050];
	long long k;
 cin>>n>>k;
  for(int i=1;i<=n;i++)
	cin>>a[i];
	if(n==1) {cout<<a[1]<<endl;return 0;}
 long long val=sqrt(1.+4.*(double)k*2.)-1.;
 //cout<<val<<endl;
 long long val2=val/2;
 val=val2*(val2+1)/2;
 n=k-val;
 if(n==0) cout<<a[val2];
 else
 cout<<a[n]<<endl;


}
