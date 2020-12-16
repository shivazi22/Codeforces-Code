#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,i,test,ans,eng;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        test=a[i]-a[i+1];
        if(test+eng<0)
        {
            ans+=(test+eng)*-1;
            eng=0;
        }
        else eng=eng+test;

    }

        cout<<ans+a[1]<<endl;

}
