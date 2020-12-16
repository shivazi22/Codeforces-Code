#include<bits/stdc++.h>
using namespace std;
vector<int>veg1,veg2;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    if(m==0) {cout<<n-1<<endl;return 0;}
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        veg1.push_back(min(a,b));
        veg2.push_back(max(a,b));
    }
    sort(veg1.begin(),veg1.end());
    sort(veg2.begin(),veg2.end());
    int l=veg1.size()-1;
    a=veg1[l];
    b=veg2[0];
    if(a<b)
    {
        cout<<b-a<<endl;
    }
    else cout<<0<<endl;

   return 0;
}
