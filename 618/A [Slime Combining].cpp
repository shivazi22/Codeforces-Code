#include<bits/stdc++.h>
using namespace std;
set<int>myset;
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    while(n!=0)
    {
        if(n%2) myset.insert(cnt);
        n=n/2;
        cnt++;
    }
    for(auto it=myset.crbegin();it!=myset.crend();it++)
        cout<<*it<<" ";

return 0;
}
