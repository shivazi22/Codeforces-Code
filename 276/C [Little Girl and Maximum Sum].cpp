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
long arry[200005],add[200005];
int main()
{
    long n,m,nn,l,r;
  cin>>n>>m;
  nn=n;
  long int i=0;
  while(n--)
  {
      cin>>arry[i++];
  }
  sort(arry,arry+i);
  memset(add,0,sizeof(add));
  while(m--)
  {
      cin>>l>>r;
      add[l-1]++;add[r]--;
  }
  vector<long>v;
long  sum=0;
  for(i=0;i<nn;i++)
  {
      sum+=add[i];
      v.push_back(sum);

  }
  sort(v.begin(),v.end());
long long  result=0;

  for(i=0;i<nn;i++)
    result+=(long long)v[i]*arry[i];
  cout<<result<<endl;
  return 0;

}
