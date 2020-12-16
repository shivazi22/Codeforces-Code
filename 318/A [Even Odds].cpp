#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    long long n,k,b,b1;
cin>>n>>k;
if(n%2==0)
{
    b=n/2;
    if(k<=b)
    cout<<k*2-1<<endl;
    else
       {b1=k-b;
       cout<<b1*2<<endl;
       }

}
else
{
    b=n/2;
    if(k<=b+1)
    cout<<k*2-1<<endl;
    else
       {b1=k-b-1;
       cout<<b1*2<<endl;
       }

}

    return 0;
}
