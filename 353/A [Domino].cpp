#include<bits/stdc++.h>
using namespace std;
long cou=0,cou1=0,A[1000],B[1000],cou2=0;
int main()
{
    long tt;
    cin>>tt;

    for(long i=1;i<=tt;i++)
    {
        cin>>A[i]>>B[i];
        if(A[i]%2==1&&B[i]%2==0)
            cou++;
        if(A[i]%2==0&&B[i]%2==1)
            cou1++;
        if(A[i]%2==1&&B[i]%2==1)
            cou2++;

    }
    if((cou%2==1&&cou1%2==0)||(cou%2==0&&cou1%2==1))
    {
        cout<<-1<<endl;
        return 0;
    }
    if(cou==0&&cou1==0)
    {
        if(cou2%2)
        {
        cout<<-1<<endl;
        return 0;
    }

    }
    if(cou%2==0&&cou1%2==0)
    {
        if(cou2%2==0)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            cout<<1<<endl;
            return 0;
        }
    }
    if(cou%2==1&&cou1%2==1)
    {
        if(cou2%2)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
             cout<<1<<endl;
            return 0;

        }
    }

    return 0;
}
