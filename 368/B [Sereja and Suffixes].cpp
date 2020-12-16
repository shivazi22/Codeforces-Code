#include<bits/stdc++.h>
using namespace std;
long n,m,coun,a[105000],A[105000],B[105000],i,k,j,l1;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=n;i>=1;i--)
    {
        A[a[i]]++;
        if(A[a[i]]==1)
     {
        B[i]++;
        B[i]+=B[i+1];
    }
    else B[i]=B[i+1];

    }
    for(i=1;i<=m;i++)
    {
        cin>>l1;
        cout<<B[l1]<<endl;
    }

return 0;
}
