#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int main()
{
    cin>>n;
    if(n*n%2)
        cout<<n*n/2+1<<endl;
    else
    cout<<n*n/2<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%2==0)
                cout<<"C";
               else cout<<".";
        }
        cout<<endl;
    }
}
