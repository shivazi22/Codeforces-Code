#include<bits/stdc++.h>
using namespace std;
int n,i,sum,cnt,t;
int main()
{
    cin>>n;
for(i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
    }
    for(int i=1;i<=5;i++)
    if((sum+i)%(n+1)!=1)
            cnt++;
        cout<<cnt<<endl;

}
