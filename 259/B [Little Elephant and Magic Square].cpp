#include<bits/stdc++.h>
using namespace std;
int a[20][20],i,j,n,x,y,z,p;
char ch;
int main()
{

    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
        cin>>a[i][j];

        x=(a[3][2]+a[3][1]);
        y=a[1][2]+a[3][2];
        z=a[1][3]+a[1][2];
        p=(x-(y-z))/2;
        a[3][3]=p+y-x;
        a[1][1]=p+y-z;
        a[2][2]=p;
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            cout<<a[i][j]<<" ";

            cout<<endl;
        }
        return 0;

}
