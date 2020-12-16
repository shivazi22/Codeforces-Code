#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
int main()
{
    int st;
    string str1,str2;
    cin>>st;
    cin>>str1>>str2;
    if(str2=="month")
    {
        if(st>=1&&st<=29)
            cout<<12<<endl;
        else if(st==30) cout<<11<<endl;
        else cout<<7<<endl;
    }
    else
    {
        if(st==5||st==6) cout<<53<<endl;
        else cout<<52<<endl;
    }
    return 0;
}
