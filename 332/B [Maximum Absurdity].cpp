#include<bits/stdc++.h>
using namespace std;

long long a[205000],b[205000],b1[200005],n,k,i,sum,maxi,tk,tk1,cc=0,maxa=0,tt;
long long t[200005];
int main()
{
    cin>>n>>k;
    sum=0;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]>maxa)
            {maxa=t[i];
             tt=i;}
        sum+=t[i];
      a[i]=sum;
    }
    b[k]=a[k];b1[k]=a[k]; maxi=b[k];
    int long long j=1;
    for(i=k+1;i<=n;i++)
    {
        b[i]=a[i]-a[j++];
        b1[i]=b[i];
        if(b[i]>maxi)
        {
            maxi=b[i];
            tk=i;
            cc=1;
        }
        if(b[i]<b[i-1])
            b[i]=b[i-1];
    }

    if(cc==0)
        tk=k;


    //for(i=k;i<=n;i++)
        //cout<<b[i]<<" "<<b1[i]<<" ";




    //cout<<tk<<endl;
    if(k==1)
    {
    tk=tt;
    t[tt]=0,maxa=0;
    for(i=1;i<=n;i++)
    {
        if(t[i]>maxa)
            {maxa=t[i];
             tt=i;}
    }
    tk1=tt;




    }
    else

{
    maxi=0;
  long long   int l,bb=1;
    for(i=n;i>=2*k;i--)
    {
      if(b1[i]+b[i-k]>=maxi)
      {
          maxi=b1[i]+b[i-k];
          l=i-k;

          tk=i;
          tk1=l;

      }

    }
     j=l;
        for(;;)
          {
              if(b[j-1]!=b[l])
              break;
              j--;
        }
        tk1=j;

}

    //cout<<tk<<" "<<tk1<<endl;

    if((tk-k+1)<(tk1-k+1))
        cout<<tk-k+1<<" "<<tk1-k+1<<endl;
    else
cout<<tk1-k+1<<" "<<tk-k+1<<endl;

    return 0;


}

