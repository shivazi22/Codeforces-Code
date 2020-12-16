#include<bits/stdc++.h>
using namespace std;

long long t,tt,i,j,cc=0;
int main()
{
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>tt;
           if(360%(180-tt)==0)
            cout<<"YES"<<endl;
           else cout<<"NO"<<endl;


    }
    return 0;
}
