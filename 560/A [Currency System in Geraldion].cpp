#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    if(a[1]==1) cout<<-1<<endl;
    else cout <<1<<endl;

    return 0;
}
