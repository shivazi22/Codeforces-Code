#include<bits/stdc++.h>
using namespace std;
long n,k,sum=0,i,mina,tt,t,A[1000000];
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
        A[i]=sum;
    }
    mina=A[k];
    tt=1;
    for(i=k+1;i<=n;i++)
    {
        if((A[i]-A[i-k])<mina)
           {mina=(A[i]-A[i-k]);
            tt=i-k+1;}

    }
    cout<<tt<<endl;



}
