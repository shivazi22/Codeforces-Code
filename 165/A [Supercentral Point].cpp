#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
vector<PII>shivazi;
int cnt,i,n,a,b,j;
int main()
{
    int flag1,flag2,flag3,flag4;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        shivazi.push_back(make_pair(a,b));
    }
    for(i=0;i<n;i++)
    {
         flag1=flag2=flag3=flag4=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(shivazi[i].first==shivazi[j].first&&shivazi[i].second>shivazi[j].second)
                flag1=1;
                else if(shivazi[i].first==shivazi[j].first&&shivazi[i].second<shivazi[j].second)
                    flag2=1;
                    else if(shivazi[i].first>shivazi[j].first&&shivazi[i].second==shivazi[j].second)
                    flag3=1;
                    else if(shivazi[i].first<shivazi[j].first&&shivazi[i].second==shivazi[j].second)
                    flag4=1;

            }
        }
        if(flag1&&flag2&&flag3&&flag4)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
