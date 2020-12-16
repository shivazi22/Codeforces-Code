#include<bits/stdc++.h>
using namespace std;
long cnt,a[200000],b[200000];
const int str3[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    long na,nb,m,k;
    cin>>na>>nb>>m>>k;
    for(long i=1;i<=na;i++)
        cin>>a[i];
    for(long i=1;i<=nb;i++)
        cin>>b[i];
    for(long i=nb;i>=1;i--)
        if(a[m]<b[i]) cnt++;
    if(cnt>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        return 0;
}
