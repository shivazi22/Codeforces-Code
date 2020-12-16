#include<bits/stdc++.h>
using namespace std;
int a,n,i,j;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i) cout<<"R";
        cin>>a;
        for(j=0;j<a;j++)
        {
            cout<<"P";
            if(i) cout<<"LR";
            else cout<<"RL";
        }
    }
    return 0;

}

