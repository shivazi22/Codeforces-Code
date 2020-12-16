#include<iostream>
using namespace std;
int main()
{
    long long  a,b,c,t,t1;
    cin>>a>>b>>c;
    t=a/c;
    t1=b/c;
    if(a%c)
    t++;
    if(b%c)
        t1++;
    cout<<t*t1<<endl;
    return 0;
}

