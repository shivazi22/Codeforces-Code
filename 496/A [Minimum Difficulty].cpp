#include<bits/stdc++.h>
using namespace std;
int a[304],i,n,t,maxi,mina;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
        int mina=20000;

    for(i=2;i<=n-1;i++)
    {
        maxi=-1;
        for(int j=2;j<=n;j++)
        {
            if(i==j)
            {
                t=a[j+1]-a[j-1];
                j++;
            }
            else t=a[j]-a[j-1];
            maxi=max(maxi,t);
        }
      mina= min(mina,maxi);
    }
    cout<<mina<<endl;
    return 0;
}
