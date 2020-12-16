#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,d,cnt=0,sum;
int main()
{
 cin>>n>>a>>b>>c>>d;
 for(int i=1;i<=n;i++)
 {
     sum=a+b+i;
     int x=sum-(a+c);
     int y=sum-(c+d);
     int z=sum-(b+d);
     if((x>=1&&x<=n)&&(y>=1&&y<=n)&&(z>=1&&z<=n))
     {
        cnt++;
     }
 }
 cout<<cnt*n<<endl;

    return 0;
}
