#include<bits/stdc++.h>
using namespace std;
unsigned long long  aa,bb,a[200000],st,p,k,i,k2,cnt,p1,p2,cc,dd;
int main()
{
    cin>>aa>>bb;
    a[1]=2;
    k2=k=2,p=0;
    st=1;
    cnt=1;
    while(1)
    {
        for(i=st; i<=st+p; i++)
        {
            a[k++]=a[i]*2+1;
        }
        a[k++]=a[i-1]*2+2;
        //st=st*2+1;
        st=k-k2;
        k2++;
        p++;


        if(a[k-1]>1000000000000000009)
            break;
    }


//for(i=1;i<=20;i++)
    // cout<<a[i]<<" ";

    //cout<<k<<endl;

    cc=min(aa,bb);
    dd=max(aa,bb);
    p1=p2=0;
    for(i=1; i<=k; i++)
    {
        if(a[i]>=cc)
        {
            p1=i;
            break;
        }
    }
    //cout<<p1<<endl;

    for(i=1; i<=k; i++)
        if(a[i]==dd)
        {

            p2=i;
            break;
        }
        else if(a[i]>dd)
        {p2=i-1;break;}



    //cout<<p2<<endl;

    if(p1==0&&p2==0)
        cout<<0<<endl;
    else cout<<p2-p1+1<<endl;

    return 0;
}
