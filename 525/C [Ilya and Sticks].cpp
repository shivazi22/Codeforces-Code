//cool,easy,work
#include<bits/stdc++.h>
using namespace std;
long long veg[100005];
queue <int>mq;
priority_queue<int>pq;
priority_queue<int,vector<int>,greater<int> >pq2;
long long n,sum,a[100005],l;

int main()
{
    cin>>n;
    for(long int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);

    int k=1;
    for(long int i=n;i>=2;i--)
    {
        if(abs(a[i]-a[i-1])==0||abs(a[i]-a[i-1])==1)
        {
            veg[k++]=(min(a[i],a[i-1]));
            i--;
        }
    }

    for(long int i=1;i<=k-2;i+=2)
    {
        sum+=(veg[i]*veg[i+1]);
    }
    cout<<sum<<endl;
    return 0;
}
