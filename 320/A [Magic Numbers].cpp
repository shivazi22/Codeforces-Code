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
    char str[20];
    int i;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {


         if((str[i]=='1'&&str[i+1]=='4')&&(str[i+1]=='4'&&str[i+2]=='4'))
          {
               i=i+2;
               continue;
          }
            if(str[i]=='1'&&str[i+1]=='4')
        { i++;continue;};
        if(str[i]=='1')
            ;


            else
           {
        cout<<"NO"<<endl;
        break;}


    }
    if(i==strlen(str))
        cout<<"YES"<<endl;

    return 0;
}
