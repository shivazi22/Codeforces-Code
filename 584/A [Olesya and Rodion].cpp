#include<bits/stdc++.h>
using namespace std;
int main()
{

int mn,t;
    cin>>mn>>t;
    if(mn==1&&t==10) {cout<<-1<<endl;return 0;}
    else
    {
        if(t==10)
        {
            cout<<1;
            for(int i=1;i<mn;i++)
                cout<<0;
        }
        else  for(int i=1;i<=mn;i++) cout<<t;

    }
    return 0;
}
