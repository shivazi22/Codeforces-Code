#include<bits/stdc++.h>
using namespace std;
long n,a,b;
int main()
{
    cin>>n;
    if(n>=10)
    {
        cout<<n<<endl;
        return 0;
    }
    else
    {
        n=n*-1;
        a=n/10;
        b=(n/100)*10+(n%10);
        if(a<b)
            cout<<(a*-1)<<endl;
        else cout<<(b*-1)<<endl;
    }
    return 0;
}
