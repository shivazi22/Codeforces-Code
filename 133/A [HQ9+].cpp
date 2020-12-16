#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2,str;
    int l1,l2,l3,l4;
    cin>>str;
    l1=str.find("H");
    l2=str.find("Q");
    l3=str.find("9");
    if((l1>=0||l1<str.size())||(l2>=0||l2<str.size())||(l3>=0||l3<str.size()))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;


}
