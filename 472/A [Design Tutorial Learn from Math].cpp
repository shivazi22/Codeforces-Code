#include<bits/stdc++.h>
using namespace std;
long long a,b,n,i,j,c,c1,cnt,cnt2;
int main()
{
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        cnt=cnt2=0;
        c=c1=0;
        a=i;
        b=n-i;
        for(j=2;j<=sqrt(a);j++)
        {
            if(a%j==0)
            {
                cnt=a;
                c=1;
                break;
            }
        }
         for(j=2;j<=sqrt(b);j++)
        {
            if(b%j==0)
            {
                cnt2=b;
                c1=1;
                break;
            }
        }
        if(c==1&&c1==1)
           {

            cout<<cnt<<" "<<cnt2<<endl;
            break;
            }



    }

}
