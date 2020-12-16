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
    char str[23],ch;
    cin>>str;
    int c[130];
    for(int i=97;i<=122;i++)
    c[i]=0;

    for(int i=0;i<strlen(str);i++)
    c[str[i]]++;
    for(int i=122;i>=97;i--)
    {
        if(c[i]!=0)
        {
            ch=i;
            break;
        }}
        for(int i=0;i< c[ch];i++)
        cout<<ch;
        return 0;
}
