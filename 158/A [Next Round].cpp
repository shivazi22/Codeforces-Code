#include <iostream>
using namespace std;
int a[200];
int main()
{
    int i=1,n,m,nn,mm;
    cin>>n>>m;
    nn=n;mm=m;

    while(nn--)
     cin>>a[i++];

        int count=0;
        if(a[m])
        {
            for(i=m+1;i<=n;i++)
            if(a[m]==a[i])
            count++;
            cout<<count+m<<endl;
        }
        else
        {
            for(i=1;i<=m;i++)
                if(a[i]==0)
                mm--;
            cout<<mm<<endl;

        }


    return 0;
}

