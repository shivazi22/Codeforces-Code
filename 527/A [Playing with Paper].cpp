#include<bits/stdc++.h>
using namespace std;
long long a,b,cnt=0,a1;
int main()
{
    cin>>a>>b;
    while(b!=0)
    {
        a1=b;
        cnt+=(a/b);
        b=a%b;
        a=a1;

    }
    cout<<cnt<<endl;
    return 0;
}
