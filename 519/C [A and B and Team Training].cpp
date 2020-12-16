#include<bits/stdc++.h>
using namespace std;
long long n,m,t,cnt,mina,cnt2,cnt3;

int main()
{
    cin>>n>>m;

    while(n!=0&&m!=0)
    {
        if(n==1&&m==1)
            break;
        if(n>m)
        {
            n-=2;
            m--;
            cnt++;
        }
        else
        {
            m-=2;
            n--;
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;

}
