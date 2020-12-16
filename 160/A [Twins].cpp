#include<bits/stdc++.h>
using namespace std;
long n,i,a[200],cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
      a[0]=0;
      sort(a,a+n+1);
      for(i=1;i<=n;i++)
        a[i]=a[i-1]+a[i];
      for(i=n-1;i>=0;i--)
      {
          cnt++;
          if(a[n]-a[i]>a[i])
            break;
      }
      cout<<cnt<<endl;

      return 0;
}
