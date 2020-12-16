#include<bits/stdc++.h>
using namespace std;
string st[200];
map<string,int>mp;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
        mp[st[i]]++;
    }
    map<string,int>::iterator it;
    int maxi=-1;
    for(it=mp.begin();it!=mp.end();it++)
        maxi=max(maxi,it->second);
        cout<<maxi<<endl;
    return 0;
}
