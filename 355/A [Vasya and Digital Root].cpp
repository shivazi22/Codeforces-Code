#include<bits/stdc++.h>
using namespace std;

int main()
{
    long k,d,i;
    cin>>k>>d;
    if(d==0&&k>1)
    {
        cout<<"No solution"<<endl;
        return 0;
    }
    if(k>=d)
       {

        for(i=1;i<=d;i++)
        cout<<1;
    for(i=d+1;i<=k;i++)
        cout<<0;
    cout<<endl;
       }
       else
       {
           for(i=1;i<=(d%k);i++)
            cout<<(d/k)+1;
           for(i=(d%k)+1;i<=k;i++)
            cout<<(d/k);
           cout<<endl;
       }
    return 0;
}
