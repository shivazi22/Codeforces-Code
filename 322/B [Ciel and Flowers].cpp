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
    long r,g,b,mina,ans,r1,g1,b1;
    cin>>r>>g>>b;
        mina=r;
        if(b<mina) mina=b;
       if(g<mina) mina=g;
        ans=mina;
        r1=r-mina; g1=g-mina; b1=b-mina;
        ans=ans+r1/3+g1/3+b1/3;
        if(r!=0&&g!=0&&b!=0)
        if((r1%3==2&&g1%3==2)||(r1%3==2&&b1%3==2)||(g1%3==2&&b1%3==2))
        ans++;
        cout<<ans<<endl;
return 0;
}
