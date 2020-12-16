#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;

   cin>>n;
   string str[200];
   for(i=0;i<n;i++)
   {
       cin>>str[i];
   }
   int sum=0;
   for(i=0;i<n;i++)
   {
       int cnt=0;
       for(j=0;j<n;j++)
       {
           if(str[i][j]=='C')
            cnt++;
       }
       sum+=cnt*(cnt-1)/2;

   }
    for(j=0;j<n;j++)
   {
       int cnt=0;
       for(i=0;i<n;i++)
       {
           if(str[i][j]=='C')
            cnt++;
       }
       sum+=cnt*(cnt-1)/2;

   }
   cout<<sum<<endl;
    return 0;
}
