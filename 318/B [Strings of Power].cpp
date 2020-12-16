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
char str[1000005];
int main()
{
    long long i,j,count=0;

    cin>>str;
   long long l=strlen(str);

   for(i=0;i<l;i++)
   {
       if(str[i]=='h'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='v'&&str[i+4]=='y')
       {
           long long h=1;
           for(j=i+5;j<l;j++)
           {
               if(str[j]=='h'&&str[j+1]=='e'&&str[j+2]=='a'&&str[j+3]=='v'&&str[j+4]=='y')
                h++;
               if(str[j]=='m'&&str[j+1]=='e'&&str[j+2]=='t'&&str[j+3]=='a'&&str[j+4]=='l')
               {
                   j=j+4;
                 count=count+h;

               }
           }
           break;
       }
   }
   cout<<count<<endl;
   return 0;
}
