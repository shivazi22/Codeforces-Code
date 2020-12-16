#include<bits/stdc++.h>
using namespace std;
char a[105][105],ch;
int n,i,j;

int main()
{
    cin>>n;
      scanf("%c",&ch);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        cin>>a[i][j];
        scanf("%c",&ch);

    }
      if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }


      for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)

        {
        int cnt=0;


            if(a[i-1][j]=='o')
                cnt++;
            if(a[i+1][j]=='o')
            cnt++;
             if(a[i][j-1]=='o')
             cnt++;
             if(a[i][j+1]=='o')
             cnt++;
             if(cnt%2)
             {
                cout<<"NO"<<endl;
                return 0;
             }

        }
    }
    cout<<"YES"<<endl;

}
