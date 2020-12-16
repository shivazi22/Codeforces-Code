#include <bits/stdc++.h>
using namespace std;
map<long long,int>d;
int main()
{
    int n;
    cin>>n;
    int mina=n-1;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        int st;
        cin>>st;
        sum+=st;
        d[sum]++;
        mina=min(mina,n-d[sum]);
    }
    cout<<mina<<endl;
    return 0;
}
