#include<bits/stdc++.h>
using namespace std;
int n,m,i,j;

char a[200][200],ch;
int main()
{
    cin>>n>>m;
    scanf("%c",&ch);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {

            scanf("%c",&a[i][j]);

        if(a[i][j]=='-')
        printf("%c",a[i][j]);
        else
        {
          if((i+j)%2)
            printf("W");
          else printf("B");
    }
}

printf("\n");
scanf("%c",&ch);
    }
    return 0;
}
