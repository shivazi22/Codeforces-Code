#include<bits/stdc++.h>
using namespace std;
long a,b,c,d,e,i,cnt;
int main()
{
    cin>>a>>b>>c>>d>>e;
    for(i=1;i<=e;i++)
    {
        if(i%a==0||i%b==0||i%c==0||i%d==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
