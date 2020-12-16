#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],b[100006],last,pre,cnt,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i]>>b[i];

    pre=a[1];
    cnt=2;
    if(n<3)
    {
        cout<<n<<endl;
        return 0;
    }

    for(i=2;i<=n-1;i++)
    {
           last=a[i+1];
        if(a[i]-b[i]>pre)
        {

            cnt++;
            pre=a[i];
        }
       else if(a[i]+b[i]<last)
            {
                cnt++;
                pre=a[i]+b[i];
            }
            else pre=a[i];



    }
    cout<<cnt<<endl;
    return 0;
}
