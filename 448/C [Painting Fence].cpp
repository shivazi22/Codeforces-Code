#include<bits/stdc++.h>
using namespace std;
long n,a[5050];
void get_value()
{

    scanf("%ld",&n);
    for(long i=1;i<=n;i++)
        scanf("%ld",&a[i]);
}
long segment(long l,long int r,long int sev)
{
    if(l>r) return 0;
    int low = *min_element(a+l,a+r+1);
    long s2=low-sev;
    long s1=r-l+1;
    long last=l;
    for(long i=l;i<=r;i++)
        if(a[i]==low)
        {
            s2+=segment(last,i-1,low);
            last=i+1;
        }
        s2+=segment(last,r,low);
        return min(s2,s1);
}

int main()
{
    get_value();
    cout<<segment(1,n,0)<<endl;
    return 0;
}











