#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,i;
    cin>>n>>k;
    for(i=1;i<=2*k;i++)
        cout<<i<<" ";
    for(i=2*n;i>2*k;i--)
        cout<<i<<" ";
        cout<<endl;
        return 0;
}
