#include<bits/stdc++.h>
using namespace std;
long start,endd,i,a[100005],b[100005],c[100005],n,kk;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    sort(b+1,b+n+1);
    for(i=n;i>=2;i--)
    {
        if(a[i-1]>a[i])
        {
            endd=i;
            while(a[i-1]>a[i])
                i--;
            start=i;
            break;
        }
    }
    if(!start&&!endd)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    kk=endd;
    for(i=start;i<=endd;i++)
    c[i]=a[kk--];


    //sort(c+1,c+n+1);

    for(i=1;i<=n;i++)
    {
        if(b[i]!=c[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<start<<" "<<endd<<endl;
    return 0;
}
