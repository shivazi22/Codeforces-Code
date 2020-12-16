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
    int n,a[105],b[105];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
        int count=0;

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(i!=j&&a[i]==b[j])
        {
            count++;
            break;
        }
    }
    cout<<n-count<<endl;



}
