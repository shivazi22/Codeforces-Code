#include<bits/stdc++.h>
using namespace std;
int a,b,aa,bb,cc,i;
int main()
{

    cin>>a>>b;
    for(i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
         aa++;
        else if(abs(a-i)>abs(b-i))
            bb++;
        else cc++;
    }
    cout<<aa<<" "<<cc<<" "<<bb;
}
