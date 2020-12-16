#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main()
{
    cin>>n>>m;
   cout<< (m-(n%m))*((n/m)*((n/m)-1))/2+(n%m)*((n/m)*((n/m)+1))/2<<" "<<(n-m)*(n-m+1)/2;
   return 0;
}

