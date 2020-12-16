#include<bits/stdc++.h>
using namespace std;
char str[10000];
int coun=0,t,i;
int main()
{
    cin>>t;
    cin>>str;

    for(i=t;i<strlen(str);i+=t)
    {
       if((str[i-1]==str[i-2])&&(str[i-2]==str[i-3]))
        coun++;
       }
       cout<<coun<<endl;
}
