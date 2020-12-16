
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<iostream>
#include<string>
#include<list>
#include<set>
#include<stack>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,s,t;
    vector<int>v;
    cin>>n>>s>>t;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
       v.push_back(k);
    }
    int count=0;
    while(s)
    {
        if(s==t)
        break;
        int m=v[s-1];
        v[s-1]=0;
        s=m;
        count++;
        }
        if(s)
        cout<<count;
        else
        cout<<-1<<endl;
        return 0;


}
