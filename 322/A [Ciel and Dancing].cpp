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
    int a,b,i,j;
    cin>>a>>b;
    cout<<b+a-1<<endl;
    i=1;
    for(j=1;j<=b;j++)
    cout<<i<<" "<<j<<endl;
    for(j=2;j<=a;j++)
    {
        cout<<j<<" "<<b<<endl;
    }
    return 0;



}
