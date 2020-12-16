/*#include<cstdio>
#define MOD 1000000007

int main()
{
long long n,a,b;
scanf("%I64d",&n);
a=1,b=0;
while(n--)
    {
int temp=a;
a=b*3;
a%=MOD;
b=b*2+temp;
b%=MOD;
}
printf("%I64d\n",a);
return 0;
}*/

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long n,a,b,temp;

int main()
{
    cin>>n;
      a=1,b=0;

    while(n--)
    temp=a, a=(3*b)%mod,b=(b*2+temp)%mod;
    cout<<a<<endl;

 return 0;
}

