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
    long long cc=1,a,b,count=0,st;
    cin>>a>>b;
    for(long long i=1;i<=b;i++)
    {
        cin>>st;
        if(st>cc)
           {count+=st-cc;
             cc=st;}
            else  if(st<cc)
            {
                count+=a-cc+st;
                cc=st;
            }

    }
    cout<<count<<endl;




return 0;
}
