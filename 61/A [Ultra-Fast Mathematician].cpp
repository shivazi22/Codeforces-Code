#include<bits/stdc++.h>
using  namespace std;
string str,str1;
int main()
{
    cin>>str>>str1;
    for(int i=0;i<str.size();i++)
        if(str[i]==str1[i])
        cout<<"0";
    else cout<<"1";
    cout<<endl;
    return 0;
}
