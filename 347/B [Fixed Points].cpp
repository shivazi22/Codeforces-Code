#include<bits/stdc++.h>
using namespace std;

long a[100005],i,n,c,cnt;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
      {
          cin>>a[i];
         if(a[i]==i)
                cnt++;
      }
        for(i=0;i<n;i++)
        {
           if(a[i]!=i)
            if(a[a[i]]==i)
                c=1;
        }
        //cout<<cnt<<endl;

        if(cnt==n)
            cout<<cnt<<endl;
            else if(c==1)
            cout<<cnt+2<<endl;
        else cout<<cnt+1<<endl;
        return 0;

}
