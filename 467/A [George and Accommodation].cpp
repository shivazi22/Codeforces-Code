#include<bits/stdc++.h>
using namespace std;
int a,b,n,cnt;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b-a>=2)
            cnt++;
    }
    cout<<cnt<<endl;
}
