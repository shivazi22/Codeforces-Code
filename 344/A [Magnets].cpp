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
using namespace std;

int main()
{
    char ch='9',cc;
    long st;
    cin>>st;
    long count=1;
    scanf("%c",&cc);

    while(st--)
    {
        char str[10]={};
         scanf("%s",str);
         scanf("%c",&cc);
         if(ch==str[0])
         {
             count++;
         }
         ch=str[1];
    }
    cout<<count<<endl;
    return 0;
}
