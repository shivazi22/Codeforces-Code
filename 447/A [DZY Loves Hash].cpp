#include<bits/stdc++.h>
using namespace std;
long k=-1,b[400],a[400],i=1,c,p,n;
int main()
{
    cin>>p>>n;
    while(n--)
    {
        cin>>a[i];
        a[i]=a[i]%p;
        b[a[i]]++;
        if(b[a[i]]==2&&c==0)
        {
            k=i;
            c=1;
        }
        i++;

    }
    cout<<k<<endl;
}
