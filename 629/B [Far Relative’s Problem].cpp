#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >veg1;
vector<pair<int,int> >veg2;

int main()
{
    int n,a,b,k1=0,k2=0,maxi=0;
   string str;
   cin>>n;
   for(int i=0;i<n;i++)
   {

       cin>>str>>a>>b;
       if(str=="M")
       veg1.push_back(make_pair(a,b));
       else veg2.push_back(make_pair(a,b));
    }
    k1=veg1.size();
    k2=veg2.size();

    for(int j=1;j<=366;j++)
    {
        int cnt1=0;
       int cnt2=0;
    for(int i=0;i<k1;i++)
    {
        if(j>=veg1[i].first&&j<=veg1[i].second)
            cnt1++;
    }
    for(int i=0;i<k2;i++)
    {
        if(j>=veg2[i].first&&j<=veg2[i].second)
            cnt2++;
    }
    int mina=min(cnt1,cnt2);
    maxi=max(mina,maxi);

    }
    cout<<maxi*2<<endl;
    return 0;
}
