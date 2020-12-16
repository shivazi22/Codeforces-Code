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

int main ()
{
    long sum=0,j=0,i,st,arr[100099],count1=0,n,m,a,b;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        st=a*b;
        sum=sum+st;
        arr[j++]=sum;

    }
       j=0;
    for(i=0;i<m;i++)
    {
        cin>>st;

        while(arr[j]<st)
        {
            count1++;
            j++;
        }
        cout<<count1+1<<endl;
        }
    return 0;
}
