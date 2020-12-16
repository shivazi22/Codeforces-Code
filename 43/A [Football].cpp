#include<bits/stdc++.h>
using namespace std;
int cnt=1,cnt2,n,i;
string str,str1,str2;
int main()
{
    cin>>n;
       cin>>str;
        str1=str;
    for(i=2;i<=n;i++)
    {
        cin>>str;
        if(str==str1)
            cnt++;
        else
        {
            cnt2++;
            str2=str;
        }

    }
    if(cnt>cnt2) cout<<str1<<endl;
    else cout<<str2<<endl;
    return 0;
}
