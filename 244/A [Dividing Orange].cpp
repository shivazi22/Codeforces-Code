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
    int n,k,t,t1[40],st[1000];
    cin>>n>>k;
    int r=k;
    t=n*k;
    for(int i=1;i<=1000;i++)
        st[i]=1;

    for(int i=1;i<=r;i++)
    {
        cin>>t1[i];

        st[  t1[i]]=0;
    }

    for( int i=1;i<=r;i++)

    {
        cout<<t1[i];
          int count=0;
        for(int j=1;j<=t;j++)
        {

            if(st[j]==1)
            {
                if(count==(n-1))
                break;
                count++;

                cout<<" "<<j;
                st[j]=0;


            }

        }
        cout<<endl;
        }

return 0;

}
