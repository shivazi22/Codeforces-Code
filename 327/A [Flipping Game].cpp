#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n,count=0,i,j,k,arr[200],count1,max=-1000;
    cin>>n;
    for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)
        count++;
   }
   //cout<<count<<endl;


    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
         count1=count;

     for(k=i;k<=j;k++)
     {
         if(arr[k]==1)
            count1--;
         else count1++;

      if(max<count1)
        max=count1;
        }
    }


     //cout<<max<<endl;

    }
    cout<<max<<endl;

    return 0;
}
