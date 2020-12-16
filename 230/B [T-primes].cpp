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
bool isPrime( long long i )
{
 long  long sqrtI =  long( sqrt( (double) i) );
for( long long j = 2; j <= sqrtI; j++ )
{
if( i % j == 0 )
return false;
}
return true;
}

int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long t,t1;
        cin>>t;
        if(t==0||t==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        t1=sqrt(t);
        if(t1*t1!=t)
            cout<<"NO"<<endl;
        else
        {
            if( isPrime(t1) == true )
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;


        }
    }
    return 0;

}
