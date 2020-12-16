#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
int  arry[100100];
int main()
{
    long n,m,i=1,t,a,b,sum=0;
    cin>>n>>m;
    while(n--)
    cin>>arry[i++];
    while(m--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>a>>b;
            arry[a]=(b-sum);
        }
        else if(t==2)

            {cin>>a;
            sum+=a;
            }

        else
        {
            cin>>a;
            cout<<arry[a]+sum<<endl;
        }
    }


    return 0;
}
