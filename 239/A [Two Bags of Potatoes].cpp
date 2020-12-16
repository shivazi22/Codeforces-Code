#include<bits/stdc++.h>
using namespace std;
long y,x,n,k;
int main()
{
    cin>>y>>k>>n;
    //if(y%k==0) {cout<<-1<<endl;return 0;}
     x=k-(y%k);
    int c=0;
    while(1)
    {
        if(x+y<=n&&(x+y)%k==0)
        {
            cout<<x<<" ";
            x=x+k;
            c=1;
        }
        else
        break;
    }
    if(c==0) {cout<<-1<<endl;return 0;}
}
