#include<bits/stdc++.h>
using namespace std;
set<int>myset;
long a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    myset.insert(a);myset.insert(b);myset.insert(c);myset.insert(d);
    cout<<4-myset.size()<<endl;
    return 0;

}
