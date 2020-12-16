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


int main()
{
    char str[200050];
    vector<char>v;
    cin>>str;
    v.push_back(str[0]);
    for(long i=1;str[i];i++)
    {
        if(str[i]==v.back())
            v.pop_back();
        else
            v.push_back(str[i]);
    }
    for(long i=0;i<v.size();i++)
    cout<<v[i];
    cout<<endl;


}
