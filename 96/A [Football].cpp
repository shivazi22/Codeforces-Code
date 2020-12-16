#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2,str;
    int l1,l2;
    cin>>str;

    st1="0000000";
    st2="1111111";
    l1=str.find(st1);
    l2=str.find(st2);
    if((l1>=0&&l1<str.size())||(l2>=0&&l2<str.size()))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
