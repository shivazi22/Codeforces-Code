#include<bits/stdc++.h>
using namespace std;
long a[100005],b[100005],n,st,maxi,mina2,maxi2;
int main()
{
    cin>>n;
    cin>>a[1];
    st=a[1];b[1]=1;
    long k=2;
    for(long i=2;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=st)
        {
            b[k++]=i;
            st=a[i];
        }
    }
    a[n+1]=100050;
    b[k]=n+1;




    st=b[1];maxi=1,mina2=maxi2=a[b[1]];
    for(int i=2;i<=k;i++)
    {
        if((abs(a[b[i]]-mina2)<2)&&(abs(a[b[i]]-maxi2)<2))
        {
            mina2=min(a[b[i]],mina2);
            maxi2=max(a[b[i]],maxi2);
            continue;
        }
        else
        {
            maxi=max(maxi,b[i]-st);
            st=b[i-1];
            maxi2=mina2=a[b[i-1]];
            if(i==k)
                break;
            i--;
        }
    }
    cout<<maxi<<endl;

    return 0;
}
