#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
#define MAX 3500
using namespace std;
int main()
{
    int t,t1,i,max,a[1000],b[1000],c[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d %d",&a[i],&b[i]);
    c[0]=b[0];
    max=c[0];
    if(t==2)
    printf("%d\n",b[0]);
    else

    {
        for(i=0;i<t-2;i++)
     {
       t1=c[i]-a[i+1];
       c[i+1]=t1+b[i+1];
       if(max<c[i+1])
       max=c[i+1];
    }
    printf("%d\n",max);
    }


  return 0;
}
