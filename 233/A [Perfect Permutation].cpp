#include<bits/stdc++.h>
using namespace std;

using namespace std;
int n,i;
int main()
{
    cin>>n;
    if(n%2)
        cout<<-1<<endl;
    else
    {
        for(i=2;i<=n;i+=2)
        {
            cout<<" "<<i<<" "<<i-1;

        }
    }
    return 0;
}
