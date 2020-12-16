#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
using namespace std;
int a[140][140];

int main()
{
    int count=0,n,i,j;
    cin>>n;
  // int nn=n;
  int nn=1;
    long  m=n*n;
     i=1,j=1;
    while(1)
    {
         if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;


        //printf("%d %d\n",i,j);
        if(a[i][j]==0)
        {
            //printf("%d %d %d \n",i,j ,nn);
           a[i][j]=nn++;
           i--;j++;

        if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        }
        else
        {
            j--;
            i++;

        if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        j--;
         if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        //printf("%d %d %d \n",i,j ,nn);
        a[i][j]=nn++;
         i--;j++;

        if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        }
        count++;
        if(count==m)
            break;


    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

