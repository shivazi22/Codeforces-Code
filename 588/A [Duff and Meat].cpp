#include<bits/stdc++.h>
using namespace std;
long long st,sum, n;
int main()
{
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(i==1)
        {
            sum+=(a*b);
            st=b;
        }
        else
        {
            if(st<=b) sum+=(a*st);
            else {st=b;sum+=(a*b);}
        }
    }
    cout<<sum<<endl;
    return 0;
}
