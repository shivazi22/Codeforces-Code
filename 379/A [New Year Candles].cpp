#include<bits/stdc++.h>
using namespace std;

 long  a,b,sum;
int main()
{

    cin>>a>>b;

    while(a>=b)
    {
        a=a-b+1;
        sum+=b;
    }
    cout<<sum+a<<endl;
    return 0;
}
