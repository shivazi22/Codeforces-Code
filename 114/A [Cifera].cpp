#include<bits/stdc++.h>
using namespace std;
long long k,l,test,cnt;
int main()
{
    cin>>k>>l;
    test=k;
    if(k==l)
    {
        cout<<"YES"<<endl<<0<<endl;
        return 0;
    }
    for(;;)
    {
        cnt++;
        test*=k;
        if(test==l)
        {
            cout<<"YES"<<endl<<cnt<<endl;
            break;
        }
        if(test>l)
            {cout<<"NO"<<endl;
            break;
            }
    }

        return 0;
}
