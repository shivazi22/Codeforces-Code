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
    long n,m,i,st,count1=0,count2=0,coco,li,ri;
cin>>n>>m;
for(i=0;i<n;i++)
{
    cin>>st;
    if(st==1)
        count1++;
    else
        count2++;
}
if(count2<count1)
coco=count2*2;
else
    coco=count1*2;

for(i=0;i<m;i++)
{
    cin>>li>>ri;
    if(count1==0||count2==0)
    {
        cout<<0<<endl;
        continue;
    }
    if(ri-li+1==1)
        cout<<0<<endl;
    else
    {
    if((ri-li+1)<=coco && (ri-li+1) %2==0)
    cout<<1<<endl;
    else
        cout<<0<<endl;
    }
}
return 0;
}
