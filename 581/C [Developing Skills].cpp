#include<bits/stdc++.h>
using namespace std;
long long sum,a[100005],n,k;
int main()
{
    cin>>n>>k;
    for(long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=(a[i]/10);
        a[i]=a[i]%10;
        a[i]=10-a[i];
    }
    sort(a+1,a+n+1);

    for(long i=1;i<=n;i++)
    {
        if(a[i]<=k&&k>0&&a[i]!=10)
           {
          k=k-a[i];
          sum++;
          }
    }
    if(k>0)
    sum+=(k/10);

    if(sum>10*n)
        cout<<10*n<<endl;
      else cout<<sum<<endl;
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    cout<<min(a,b)<<"  "<<abs(a-b)/2<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
long long a[100008],a2[100008],n;
int main()
{
    cin>>n;
    for(long int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long maxi=a[n];
    for(long i=n;i>=1;i--)
    {
        if(a[i]<=maxi)
            a2[i]=maxi;
        else
        {
            maxi=a[i];
            a2[i]=maxi;
        }
    }
    for(long i=1;i<=n;i++)
    {
        if(a[i]-a2[i]==0)
            cout<<0<<" ";
        else cout<<a2[i]-a[i]+1<<" ";
    }
    return 0;
}*/













