#include<bits/stdc++.h>
using namespace std;
string str1,str2,str;
map<string,string>mp;
int n,m,i,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>str1>>str2;
        if(str1.size()<=str2.size())
        {
            mp[str1]=str1;
        }else{mp[str1]=str2;}
    }
    for(i=1;i<=n;i++)
    {
        cin>>str;
        cout<<mp[str]<<" ";
    }
    return 0;
}
