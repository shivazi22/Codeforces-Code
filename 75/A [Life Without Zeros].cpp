#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,a1,b1,c1,st,k,i;
    cin>>a>>b;
    c=a+b;
    k=0,a1=0,b1=0,c1=0,st=1;
    while(a!=0)
    {
        if(a%10==0)
            a=a/10;
        else
        {
            st=1;
            for(i=1;i<=k;i++)
                st=st*10;
            a1=a1+(st)*(a%10);
            a=a/10;
            k++;
        }
    }
    st=1,k=0;
      while(b!=0)
    {
        if(b%10==0)
            b=b/10;
        else
        {
            st=1;
            for(i=1;i<=k;i++)
                st=st*10;
            b1=b1+(st)*(b%10);
            b=b/10;
            k++;
        }
    }
    st=1,k=0;
      while(c!=0)
    {
        if(c%10==0)
            c=c/10;
        else
        {
            st=1;
            for(i=1;i<=k;i++)
                st=st*10;
            c1=c1+(st)*(c%10);
            c=c/10;
            k++;
        }
    }
    if(a1+b1==c1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
