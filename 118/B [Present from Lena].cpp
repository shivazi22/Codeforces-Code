#include<bits/stdc++.h>
using namespace std;
int i,n,j,k;
int main()
{
    cin>>n;
    k=n*2;

    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<=k;j++)
            cout<<" ";

            k-=2;

    for(j=0;j<i;j++)
    {
        if(j==0)
        printf("%d",j);
        else printf(" %d",j);
    }
    for(j=i-2;j>=0;j--)
        printf(" %d",j);

    cout<<endl;
    }
      k=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
            printf(" ");
            k+=2;

            for(j=0;j<=n-i;j++)
                if(j==0)
                cout<<j;
            else printf(" %d",j);

            for(j=n-(i+1);j>=0;j--)
                printf(" %d",j);
        cout<<endl;
    }
    return 0;
}
