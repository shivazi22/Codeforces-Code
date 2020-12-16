#include<bits/stdc++.h>
using namespace std;

vector<int>veg;

int main()
{
    int m,st,cnt=1;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>st;
        if(cnt%2)
        {
            int st2=i-st;
            if(st2>-1)  veg.push_back(st2);
            else  veg.push_back((m-st+i));
        }
        else
        {
            int st2=st-i;
            if(st2>-1) veg.push_back(st2);
            else veg.push_back(st+m-i);

        }
        cnt++;
    }
        cnt=0;
        for(int i=0;i<m;i++)
            if(veg[0]==veg[i]) cnt++;

        if(cnt==m)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

return 0;
}

