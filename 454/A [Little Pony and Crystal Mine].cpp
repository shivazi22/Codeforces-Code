#include<bits/stdc++.h>
using namespace std;

char a[200][200];
int n,i,j;
int main()
{
    cin>>n;
    int l=n/2;
    for(i=1;i<=l;i++)
    for(j=1;j<=l+1-i;j++)
            a[i][j]='*';

        for(i=1;i<=n/2;i++)
        for(j=(n/2)+i+1;j<=n;j++)
            a[i][j]='*';

    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=n;j++)
        {
        if(a[i][j]=='*')
        printf("%c",a[i][j]);
        else
        printf("D");
    }
    //cout<<endl;
    printf("\n");
    }

    for(i=1;i<=n;i++)
        cout<<"D";
    cout<<endl;
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=n;j++)
            if(a[i][j]!='*')
            cout<<"D";
        else cout<<"*";
        cout<<endl;
    }

return 0;
}
