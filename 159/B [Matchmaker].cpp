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
long n,m,st2[1005],st4[1005],st1[1005][1005],st3[1004][1005],i,j,a,b,x;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        st1[a][b]++;
        st2[b]++;
    }
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        st3[a][b]++;
        st4[b]++;
    }
    long result=0;
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=1000;j++)
        {
           long x=(st1[i][j]<st3[i][j])?st1[i][j]:st3[i][j];
           result+=x;
        }
    }
    long result1=0;
    for(i=1;i<=1000;i++)
    {
         x=(st2[i]<st4[i])?st2[i]:st4[i];
           result1+=x;

    }
    cout<<result1<<" "<<result<<endl;
}
