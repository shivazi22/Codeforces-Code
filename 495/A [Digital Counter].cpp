#include<bits/stdc++.h>
using namespace std;
long long int n;
int a[]={2,7,2,3,3,4,2,5,1,2};
int main()
{
    cin>>n;
    cout<<a[n/10]*a[n%10]<<endl;
    return 0;
}
