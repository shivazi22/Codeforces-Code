#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    if(n&1) cout<<0<<endl;
    else {
        if(n/2&1) cout<<n/4<<endl;
        else cout<<n/4-1<<endl;
    }
    return 0;
}
