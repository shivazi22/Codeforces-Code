#include<bits/stdc++.h>
using namespace std;
string str,str2,str3;
int t,i;
int main()
{
    cin>>str>>t;
    if(str.size()%t) cout<<"NO"<<endl;
    else
    {
        t=str.size()/t;
        for(i=0;i<str.size();i+=t)
        {
             str2=str.substr(i,t);
             reverse(str2.begin(),str2.end());
            str3=str3+str2;
        }
        if(str3==str) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
