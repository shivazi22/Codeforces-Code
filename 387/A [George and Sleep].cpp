#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ans;

    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);

    int s=a*60+b;
    int t=c*60+d;

    ans=s-t;

    if(ans<0)
    ans+=1440;
    printf("%02d:%02d",ans/60,ans%60);
    return 0;
}
