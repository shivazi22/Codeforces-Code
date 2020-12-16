#include<bits/stdc++.h>
using namespace std;
const int NX = 1e5 + 10 ;
int A[NX] ;
int N;
map<int,int>cnt;
int main()
{

    cin>>N;
    for(int i=1;i<=N;i++)
    cin>>A[i-1];

    long long res=0;
    for(int i=0;i<N;i++)
    {
        long long ans=1;
        for(int j=2;j<=31;j++)
        {
            ans=2*ans;
            long long temp=ans-A[i];
            res+=cnt[temp];
        }
        cnt[A[i]]++;
    }
    cout<<res<<endl;
    return 0;
}
