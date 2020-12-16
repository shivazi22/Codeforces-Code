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
    long long n,i,c,d,ans,a,b,result,mina=31401,minb=31401,maxc=-1,maxd=-1;
    cin>>n;
    result=0;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
       ans= fabs((a-c)*(b-d));
       result=result+ans;
      mina= min(mina,a);
      maxc=max(maxc,c);
      minb=min(minb,b);
      maxd=max(maxd,d);


    }


    if((maxc-mina)==(maxd-minb)&&((maxc-mina)*(maxd-minb)==result))
    cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;
}

