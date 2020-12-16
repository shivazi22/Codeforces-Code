#include<bits/stdc++.h>
using namespace std;
long a[200005],n;
double w;
int main()
{
    cin>>n>>w;
    for(long i=1;i<=n*2;i++)
    cin>>a[i];
    sort(a+1,a+(n*2)+1);
    double x=(double)a[n+1]/(double)a[1];
    if(x>=2) x=(double)a[1];
    else  x=(double)a[n+1]/2.0;
    x=3.0*x*(double)n;
    if(x<w)
    printf("%f\n",x);
    else printf("%f\n",w);


return 0;
}
