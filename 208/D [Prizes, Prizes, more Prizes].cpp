#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,a[55],p[5],q[5]={ },sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        for(int j=4;j>-1;j--)
            if(p[j]<=sum)
        {
            q[j]+=sum/p[j];
            sum%=p[j];
        }
    }
    cout<<q[0];
    for(int i=1;i<5;i++)
        cout<<' '<<q[i];
    cout<<endl<<sum<<endl;
}
