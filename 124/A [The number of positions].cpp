#include<bits/stdc++.h>
using namespace std;
int n,a,b,i,cnt;
int main()
{
    cin>>n>>a>>b;
    for(i=0;i<=n;i++)
    if(i>a&&(n-i)<=b)
            cnt++;
        cout<<cnt<<endl;
        return 0;


}
