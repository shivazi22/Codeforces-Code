#include<bits/stdc++.h>
using namespace std;
long a,b,c;
int main()
{
    cin>>a>>b>>c;
    cout<<(a*b+b*c+c*a-a-b-c+1)<<endl;
    return 0;
}
