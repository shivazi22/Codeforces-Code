#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
#include<list>
#include<stack>
#include<map>
using namespace std;
long n,a[100100],t,count=0;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>t;
        a[t]++;
    }
    count+=a[4];
    if(a[1]<a[3])
    {
        count+=a[1];

        a[3]=a[3]-a[1];
         a[1]=0;
    }
    else
    {
         count+=a[3];

        a[1]=a[1]-a[3];
         a[3]=0;

    }
    if(a[1]==0)
    {
        count+=a[2]/2;
        count+=a[2]%2;
        count+=a[3];
    }
    else
        {

        if(a[2]==0)
        {
            count+=a[1]/4;
           if(a[1]%4)
           count++;
        }
    else
    {
        count+=a[2]/2;
         a[2]=a[2]%2;
         if(a[2]!=0)
         {

        count+=a[1]/4;
        long l=(a[1]%4);
        if(l==3)
            count+=2;
        else count++;
         }
         else
         {
              count+=a[1]/4;
           if(a[1]%4)
           count++;

         }
    }
    }
    cout<<count<<endl;


    return 0;
}
