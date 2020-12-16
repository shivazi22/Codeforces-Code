/*#include<bits/stdc++.h>
using namespace std;
long long x,x2,b,i,j,a[100005],sum,p,k;
int main()
{
int p=1;
for( i=0;i<=4;i++)
{
    for(j=0;j<=4;j++)
    {
        for(k=0;k<=4;k++)
        {
           a[p]= pow(2,k)*pow(3,j)*pow(5,i);
           cout<<a[p]<<endl;
           p++;
        }
    }
}
//cout<<p<<endl;
//sort(a+1,a+p);
//for( i=1;i<p;i++)
   // cout<<a[i]<<" ";
    return 0;
    }*/
#include<bits/stdc++.h>
using namespace std;
long n,x,i,a,b,t,cnt;

int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        t=a-b-1;
        cnt+=(t/x);
        cin>>b;
    }
    cout<<b-cnt*x<<endl;

    return 0;
    }
