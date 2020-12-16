#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long st=9,k=1,ans=0;

    while(n!=0)
    {
        if(n<=st)
        {
            ans+=n*k;
            n=0;
        }
        else {ans+=(st*k);
        n=n-st;
        st=st*10;
        k++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
