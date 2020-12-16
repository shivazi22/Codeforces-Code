#include<bits/stdc++.h>
using namespace std;

int A1[10000],N,i,j,A,B,C,D;
int main()
{
    int flag=0;
    cin>>N;
    for(i=1;i<=N;i++)
    cin>>A1[i];

    for(i=1;i<N;i++)
    {
        for(j=i+1;j<N;j++)
    {
        A=min(A1[i],A1[i+1]); B=max(A1[i],A1[i+1]);
        C=min(A1[j],A1[j+1]); D=max(A1[j],A1[j+1]);
        if(A>C&&A<D&&D<B)
            {flag=1;
             break;
             }
        else if(B>C&&B<D&&C>A)
        {
            flag=1;
            break;
        }
        //cout<<"ok"<<endl;
    }
    if(flag==1)
        break;
    }
    puts(flag? "yes":"no");
    return 0;
}
