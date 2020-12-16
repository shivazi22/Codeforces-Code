#include<bits/stdc++.h>
using namespace std;
long sum,st[2050],st2[2050];
int main()
{
    long n;
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        int x1,y1;
        cin>>x1>>y1;
        st[x1+y1]++;
        if(x1-y1<1) st2[abs(x1-y1)+1000]++;
        else st2[x1-y1]++;
    }
    for(int i=1;i<=2000;i++)
    sum+=((st[i]*st[i]-st[i])/2)+((st2[i]*st2[i]-st2[i])/2);
    cout<<sum<<endl;

return 0;
}
