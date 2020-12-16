#include<bits/stdc++.h>
using namespace std;
long int cnt,cnt2,i,a[304],n;
int main()
{
    cin>>n;
    int p,p1;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2)
        {
            cnt++;
             p=i;
        }
        else
        {
            cnt2++;
            p1=i;
        }
    }
   if(cnt==1)
    cout<<p<<endl;
   else cout<<p1<<endl;
    return 0;
}
