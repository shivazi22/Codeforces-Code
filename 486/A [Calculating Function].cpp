#include<bits/stdc++.h>
using namespace std;

long long int n;
int main()
{
    cin>>n;
    if(n%2==0) cout<<n/2<<endl;
    else
        cout<<-1*(n/2+1)<<endl;
    return 0;
}
