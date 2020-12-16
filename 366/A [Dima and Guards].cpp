#include<bits/stdc++.h>
using namespace std;
long A[10][10],n,i,j;

int main()
{

    cin>>n;
    for(i=1;i<=4;i++)
    {

        for(j=1;j<=4;j++)
        {
            cin>>A[i][j];
        }
    }
   // int cc=0;
    for(i=1;i<=4;i++)
    {
        if((A[i][1]+A[i][3])<=n)
        {
            cout<<i<<" "<<A[i][1]<<" "<<n-A[i][1]<<endl;
            return 0;
        }
        else if((A[i][2]+A[i][4])<=n)
        {

         cout<<i<<" "<<A[i][2]<<" "<<n-A[i][2]<<endl;
            return 0;
        }
        else if((A[i][2]+A[i][3])<=n)
        {

         cout<<i<<" "<<A[i][2]<<" "<<n-A[i][2]<<endl;
            return 0;
        }
        else if((A[i][1]+A[i][4])<=n)
        {

         cout<<i<<" "<<A[i][1]<<" "<<n-A[i][1]<<endl;
            return 0;
        }



    }
    cout<<-1<<endl;
    return 0;
}
