#include<bits/stdc++.h>
using namespace std;
int m,nnm;
int c;
vector<long long>mp;

    long long rec(long long  int i)
    {
        if(i>777777777)
        return 0;
        mp.push_back(i);
        rec(i*10+4);
        rec(i*10+7);
    }

    int main()
    {
        long long  int n;
        cin>>n;
        rec(4);rec(7);
        sort(mp.begin(),mp.end());
        //cout<<mp.size()<<endl;
       for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==n)
                {cout<<i+1<<endl;
                break;
                }
        }
return 0;
}
