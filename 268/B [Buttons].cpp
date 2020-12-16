#include<iostream>
using namespace std;
int i,j,sum,n,a[100],b[100];

int main()
{
    cin>>n;
    for(i=1;i<n;i++)
        {sum+=i*(n-i);}
    cout<<sum+n;
return 0;
}

