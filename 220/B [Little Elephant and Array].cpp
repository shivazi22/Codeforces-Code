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
long n,m,x,y,arry[100001],h[100001],l[450],d[450][100001],i,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    cin>>arry[i];

    for(i=1;i<=n;i++)
    if(arry[i]<=n)
        h[arry[i]]++;

        long c=0;
        for(i=1;i<=n;i++)
        {
            if(h[i]>=i)
            l[c++]=i;
        }

        for(i=0;i<c;i++)
        {
            long k=l[i];
            for(j=1;j<=n;j++)
            {
                d[i][j]=d[i][j-1];
                if(k==arry[j])
                    d[i][j]++;
            }
        }

        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            long k=0;
            for(j=0;j<c;j++)
            {
                if((d[j][y]-d[j][x-1])==l[j])
                    k++;
            }
            cout<<k<<endl;

        }


}
