#include<bits/stdc++.h>
using namespace std;
char str[200];int cnt;
int main()
{
    cin>>str;
    for(int i=0;i<strlen(str);i++)
        if(str[i]=='4'||str[i]=='7') cnt++;
    if(cnt==4||cnt==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
