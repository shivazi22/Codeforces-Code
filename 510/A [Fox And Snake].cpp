#include<bits/stdc++.h>
using namespace std;
long n,i,j,m;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2)
        {
            for(j=1;j<=m;j++)
                cout<<"#";
        }
        else
        {
            if((i/2)%2)
            {
                for(j=1;j<=m-1;j++)
                    cout<<".";
                cout<<"#";
            }
            else
            {
                cout<<"#";
                for(j=1;j<=m-1;j++)
                    cout<<".";


            }
        }
        cout<<endl;
    }
}
