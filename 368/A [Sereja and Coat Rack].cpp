#include<bits/stdc++.h>
using namespace std;
int n,d,a[200],m,sum=0,i;
int main()
{
    cin>>n>>d;

    for(i=0;i<n;i++)
    cin>>a[i];

        sort(a,a+n);
        cin>>m;
        if(m<=n)
           {

           for(i=0;i<m;i++)
            sum+=a[i];
            cout<<sum<<endl;
           }
           else
           {
               for(i=0;i<n;i++)
                sum+=a[i];
               cout<<sum-(m-n)*d<<endl;
           }



    return 0;
}
