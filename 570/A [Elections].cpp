#include<bits/stdc++.h>
using namespace std;
int n,m,vot;
long a[200],res[200];
int main()
{

 cin>>n>>m;
 for(int i=1;i<=m;i++)
 {
     long maxi=-1;
     for(int j=1;j<=n;j++)
     {
         cin>>a[j];
         if(a[j]>maxi)
         {vot=j;maxi=a[j];
         }
     }
     res[vot]++;
 }
long maxi=*max_element(res,res+110);
 for(int i=1;i<=100;i++)
 {
     if(maxi==res[i])
     {
         cout<<i<<endl;
         break;
     }
 }
    return 0;
}
