#include<bits/stdc++.h>
using namespace std;
int st[100][100],n;
int main()
{

   int n;
   cin>>n;
   for(int i=1;i<=n*n;i++)
   {
       int a,b;
     cin>>a>>b;
     if(st[a][b]==0)
     {
         for(int k=1;k<=n;k++)
         st[a][k]=1;
         for(int k=1;k<=n;k++)
            st[k][b]=1;
         cout<<i<<" ";

     }
   }
    return 0;
}
