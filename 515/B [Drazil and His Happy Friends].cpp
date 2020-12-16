#include<bits/stdc++.h>
using namespace std;
 long a,b,s,t,A[1000000]={0},B[1000000]={0},n,m,i,k,g,st,vnt,cnt,j;

int main()
{

    cin>>n>>m;
    cin>>b;
    for(i=1;i<=b;i++)
    {
     scanf("%ld",&st);
        A[st]=1;
    }

    cin>>g;
    for(i=1;i<=g;i++)
    {
         scanf("%ld",&st);
        B[st]=1;
    }
    cnt=b+g;
    i=0;j=0;
    for(;;)
    {
            if(A[i]==0&&B[j]==1)
            {
                cnt++;
                A[i]=1;
            }
            if(A[i]==1&&B[j]==0)
            {
                cnt++;B[j]=1;
            }

        if(i==n-1)
            i=-1;
        if(j==m-1)
            j=-1;
        i++;
        j++;
        vnt++;
        if(cnt==n+m)
        {
        cout<<"Yes"<<endl;
        break;
        }
        else if(vnt==999999)
        {
            cout<<"No"<<endl;
            break;
        }

    }
    return 0;
}


