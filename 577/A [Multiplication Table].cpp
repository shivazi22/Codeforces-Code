#include<bits/stdc++.h>
using namespace std;
int st1[100],st2[100],n;
int main()
{
    long n,x,x2;
    cin>>n>>x;
    x2=sqrt(x);


        int cnt=0;
        for(int i=1;i<=x2;i++)
        {
            if(x%i==0&&i<=n&&(x/i)<=n)
            {
                if(i==(x/i))
                    cnt++;
                else cnt+=2;

            }
        }
        cout<<cnt<<endl;
    return 0;
}
