
#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
#define sp(a) sprintf(str,"%I64d",a)
using namespace std;
int main()
{
    long long count=0,st;
    char str[100];
    cin>>str;
    st=(long long)atol(str);
    while(st)
    {
      sp(st);
       long l=strlen(str);
      sort(str,str+l);
      st=st-str[l-1]+48;
      count++;

    }
    cout<<count<<endl;
    return 0;




}
