#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int main()
{
    cin>>a>>b>>c>>d>>e;
    if(a+b+c+d+e==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if((a+b+c+d+e)%5==0)
        cout<<(a+b+c+d+e)/5<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
