#include<bits/stdc++.h>
using namespace std;
int a[10],i,n,sum,c,d;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+n+1);

    if(n==0)
    {
        cout<<"YES"<<endl;
        cout<<1<<endl<<2<<endl<<2<<endl<<3<<endl;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<2*a[1]<<endl<<2*a[1]<<endl<<2*a[1]+a[1]<<endl;

    }

    if(n==2)
    {

        c=(4*a[1]-a[2]);
         d=3*a[1];
         //cout<<c<<" "<<d<<endl;
        if(c>0&&d>0)
        {
            cout<<"YES"<<endl;
            cout<<c<<endl<<d<<endl;
        }

        else
            cout<<"NO"<<endl;
        }


    if(n==3)
    {
     int d1=a[2]+a[3]-a[1];
      int d2=a[1]+a[3]-a[2];
     int  d3=a[1]+a[2]-a[3];
     //cout<<d2<<endl;
        int max1=max(max(d1,max(a[1],a[2])),a[3]);
        int min1=min(min(d1,min(a[1],a[2])),a[3]);
        int max2=max(max(d2,max(a[1],a[2])),a[3]);
         int min2=min(min(d2,min(a[1],a[2])),a[3]);
      int max3=max(max(d3,max(a[1],a[2])),a[3]);
     int  min3=min(min(d3,min(a[1],a[2])),a[3]);

     if(((sum+d1)/4)==((a[2]+a[3])/2)&&((a[2]+a[3])/2)==abs(max1-min1))
     cout<<"YES"<<endl<<d1<<endl;
     else if(((sum+d2)/4)==((a[1]+a[3])/2)&&((a[1]+a[3])/2)==abs(max2-min2))
        cout<<"YES"<<endl<<d2<<endl;
        else if(((sum+d3)/4)==((a[1]+a[2])/2)&&((a[1]+a[2])/2)==abs(max3-min3))
        cout<<"YES"<<endl<<d3<<endl;
        else
            cout<<"NO"<<endl;
    }


    if(n==4)
    {
        if((a[4]-a[1])==(sum/4)&&(sum/4)==((a[2]+a[3])/2))
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
        }

    return 0;
}
