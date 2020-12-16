#include<bits/stdc++.h>
using namespace std;
long n,i,cnt,a[1005],sum,sum2,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    i=1;j=n;
    while(i!=j)
    {
        cnt++;
        if(cnt%2)
        {
            if(a[i]>a[j])
            {
                sum+=a[i];
                i++;
            }
            else {sum+=a[j];
            j--;
            }
        }
                if(cnt%2==0)
        {
            if(a[i]>a[j])
            {
                sum2+=a[i];
                i++;
            }
            else {sum2+=a[j];
            j--;
            }
        }
    }
    if(n%2)
        sum+=a[j];
        else sum2+=a[j];
    cout<<sum<<" "<<sum2<<endl;
    return 0;
}
