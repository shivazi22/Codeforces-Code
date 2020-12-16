#include<bits/stdc++.h>
using namespace std;
vector<long long >veg;
long long sum=0,cnt=0;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int st;
        cin>>st;
        if(st%2==0)
            sum+=st;
        else {
                cnt++;
            veg.push_back(st);
        }
    }
    if(cnt%2)
    {
        sort(veg.begin(),veg.end());
        veg.erase(veg.begin());
    }
          for(auto i:veg)
            sum+=i;
    cout<<sum<<endl;
    return 0;
}
