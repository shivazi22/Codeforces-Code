#include<bits/stdc++.h>
using namespace std;
char str[200];
set<char>myset;
int main()
{
    cin>>str;
    for(int i=0;i<strlen(str);i++)
    myset.insert(str[i]);
    if(myset.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
