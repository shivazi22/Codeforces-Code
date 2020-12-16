#include<bits/stdc++.h>
using namespace std;
long x,y;
int main()
{
    cin>>x>>y;
    if(x>0&&y>0)
        cout<<"0 "<<x+y<<" "<<x+y<<" "<<0<<endl;
    else if(x<0&&y>0)
        cout<<x+y*-1<<" 0 0 "<<x*-1+y<<endl;
    else if(x<0&&y<0)
        cout<<x+y<<" 0 0 "<<x+y<<endl;
    else cout<<"0 "<<x*-1+y<<" "<<x+y*-1<<" 0"<<endl;
    return 0;
}
