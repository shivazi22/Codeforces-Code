#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,a[2000],maxi,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(;;)
    {
         maxi=0;
        for(int i=1;i<=n;i++)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
                p=i;
            }
        }
        if(p==1)
        {
             maxi=0;
        for(int i=2;i<=n;i++)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
                p=i;
            }
        }
        if(maxi==a[1])
            cnt++;
             break;
        }

        else{
            cnt++;
            a[p]--;
            a[1]++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
