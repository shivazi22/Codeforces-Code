#include<bits/stdc++.h>
using namespace std;
long A[1000000],m,n,i,c,t,k=0,kk=0;
int main()
{
    cin>>n>>m;
    for(i=0;i<m;i++)
        {cin>>t;
        if(t==1||t==n)
        {
            kk=1;
        }
        if(t>0)

        A[k++]=t;}
        if(kk==1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    sort(A,A+m);
    if(k<3)
        cout<<"YES"<<endl;
    else
    {


    for(i=0;i<m-2;i++)
    {


       if(A[i]==A[i+1]-1&&A[i+1]-1==A[i+2]-2)
           {
            cout<<"NO"<<endl;
        c=1;
        break;
        }
    }
    if(c==0)
        cout<<"YES"<<endl;
    }
}
