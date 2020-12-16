#include<bits/stdc++.h>
using namespace std;
long long n,k,p,i,j,k2,cnt,a[100005],b[100005],t,k1,p2,kt,pos,pp,cc;
int main()
{
    cin>>n>>kt>>p;
    k=1,k1=1;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t%2==0)
            a[k++]=t;
        else b[k1++]=t;
    }
    pos=k-1;
    pp=1;
    while(b[pp])
   {
        a[k]=b[pp++];
        k++;
       // cout<<a[i]<<endl;
   }
   //for(j=1;j<k;j++)
    //cout<<a[j]<<" ";

    if((kt-p)<=(k1-1)&&((k1-1)-(kt-p))%2==0)
    {
        //cout<<"fdwesfdrefre"<<endl;
        if(p<=((((k1-1)-(kt-p))/2)+pos))
        {
            cout<<"YES"<<endl;
             if(p==0)
            {
                while(cnt!=kt-1)
                {
                    cout<<1<<" "<<a[n--]<<endl;
                    cnt++;
                }

                cout<<n<<" ";
                for(pp=n;pp>=1;pp--)
                {
                    cout<<a[pp]<<" ";
                }
                return 0;
            }
            else
            {
            for(j=1;j<=i-1;j++)
            {
                if(a[j]%2==0&&cnt<p-1)
                {
                    cout<<1<<" "<<a[j]<<endl;
                    cnt++;
                }
                else if(a[j]%2!=0&&cnt<p-1)
                {
                     cout<<2<<" "<<a[j]<<" "<<a[j+1]<<endl;
                     j++;
                    cnt++;
                }
                else if(cnt==p-1)
                {
                    p2=i-(kt-p+1);
                    cout<<p2-j+1<<" ";
                    for(k2=j;k2<=p2;k2++)
                    cout<<a[k2]<<" ";
                    cout<<endl;

                    j=p2;
                    cnt++;
                }
                else
                {
                    cout<<1<<" "<<a[j]<<endl;
                    cnt++;
                }

            }
            return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}

