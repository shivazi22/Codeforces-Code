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
typedef pair<int,int>pI;
int main()
{
    vector<pI>v;
    int s,t,m,n;

    cin>>s>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>m>>n;
        v.push_back(make_pair(m,n));

    }
    sort(v.begin(),v.end());
    int count=0;

        for(int i=0;i<t;i++)
    {
        if(s>v[i].first)
        {
            s=s+v[i].second;
            count++;
        }
        else
        break;

    }
    if(count==t)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
