
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
vector<PII>shivazi;
int n,s,i,a,b;
int main()
{
    cin>>n>>s;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        shivazi.push_back(make_pair(a,b));

    }
    sort(shivazi.begin(),shivazi.end());
    int maxa=-1;
    for(i=n-1;i>=0;i--)
    {
              if(shivazi[i].first==s && shivazi[i].second==0)
         {
             maxa=max(0,maxa);
         }

        if(shivazi[i].first<s)
        {

             if(shivazi[i].second==0)
                {
            maxa=max(0,maxa);
            }
            else
            {
                maxa=max(100-shivazi[i].second,maxa);
            }
        }
    }
    cout<<maxa<<endl;
}
