#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a==1||b==1||c==1)
    {
        cout<<max(a*(b+c),max((a+b+c),(a+b)*c))<<endl;
        return 0;
    }
    cout<<a*b*c<<endl;

        return 0;

}
