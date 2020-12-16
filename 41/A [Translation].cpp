#include<bits/stdc++.h>
using namespace std;
string str,str1;

int main()
{
    cin>>str>>str1;
    reverse(str1.begin(),str1.end());
    if(str==str1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
