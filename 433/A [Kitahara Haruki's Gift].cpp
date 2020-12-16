#include<bits/stdc++.h>
using namespace std;
int n,i,st,sum,cnt2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st;
        if(st==200) cnt2++;
        sum+=st;
    }

    if(n==1)
    {cout<<"NO"<<endl;
    return 0;
    }
    if(n==cnt2&&n%2==1)
         {cout<<"NO"<<endl;
    return 0;
    }
    if((sum/2) %100)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
