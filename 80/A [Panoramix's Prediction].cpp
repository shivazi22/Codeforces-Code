#include<bits/stdc++.h>
using namespace std;
int n,m,i;
int st[]={0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int main()
{
    cin>>n>>m;
    for(i=1;i<=20;i++)
    if(st[i]==n&&st[i+1]==m)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    cout<<"NO"<<endl;
    return 0;

}
