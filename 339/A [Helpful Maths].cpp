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
    char str[200],str1[200];
    cin>>str;
    int j=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='+')
        str1[j++]=str[i];
    }
    sort(str1,str1+j);
    for(int i=0;i<j;i++)
    {
        cout<<str1[i];
        if(i!=j-1)
            cout<<"+";
    }
    cout<<endl;


return 0;
}
