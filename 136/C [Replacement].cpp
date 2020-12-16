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
long n,arry[100001];
int main()
{
    cin>>n;
    long i=0;
    while(n--)
    {
        cin>>arry[i++];
    }
    sort(arry,arry+i);
    if(arry[i-1]!=1)
        arry[i-1]=1;
    else
        arry[i-1]=2;
         sort(arry,arry+i);
         for(i=0;arry[i];i++)
            cout<<" "<<arry[i];
         cout<<"\n";

}
