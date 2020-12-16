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

   long  i,t,c=0,st[100005],min,j,count=0;
   scanf("%ld",&t);
    for(i=0;i<t;i++)
    scanf("%ld",&st[i]);
    min=1000000008;
    for(i=0;i<t;i++)
    {
        if(min>st[i])
        min=st[i];
    }
    for(i=0;i<t;i++)
    {
        if(st[i]==min)
        {
         j=i;
        count++;
        }
    }
    if(count==1)
    printf("%ld\n",j+1);
    else
    printf("Still Rozdil\n");

    return 0;
}
