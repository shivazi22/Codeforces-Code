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

int main()
{
    long n,k,i,t;
    cin>>n>>k;
    t=n-k-1;
    for(i=1;i<=t;i++)
        cout<<i<<" ";
    for(i=n;i>=t+1;i--)
        cout<<i<<" ";
    return 0;



}
