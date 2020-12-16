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
long a[100001],n;

int main()
{
    long result=0,i=1;
    cin>>n;
    while(n--)
    {
        cin>>a[i];
        result+=a[i];
        a[i]=result;
        i++;
    }
    long k=a[i-1],count=0;
    for(long j=1;j<i-1;j++)
    {
        if(k==2*a[j])
            count++;

    }
    cout<<count<<endl;
}
