#
#include<bits/stdc++.h>
using namespace std;
string str;
int cnt,i,cnt1;
int main()
{
    cin>>str;
    for(i=0;i<str.size();i++)
        if(str[i]>='a'&&str[i]<='z')
        cnt++;
        else cnt1++;
        if(cnt1>cnt)
         transform(str.begin(),str.end(),str.begin(),::toupper);
         else transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
}
