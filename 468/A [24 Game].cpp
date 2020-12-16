#include<bits/stdc++.h>
using namespace std;
long n,i;
int main()
{
    cin>>n;
    if(n<=3)
        cout<<"NO"<<endl;
    else if(n==4)
    {
        cout<<"YES"<<endl;
        cout<<"1 * 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
    else if(n==5)
    {
        cout<<"YES"<<endl;
        cout<<"5 - 1 = 4"<<endl;
        cout<<"4 - 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
   else if(n==6)
    {
        cout<<"YES"<<endl;
        cout<<"6 - 5 = 1"<<endl;
        cout<<"1 - 1 = 0"<<endl;
        cout<<"2 + 0 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
    else if(n==7)
    {
        cout<<"YES"<<endl;
        cout<<"7 - 6 = 1"<<endl;
        cout<<"5 - 1 = 4"<<endl;
        cout<<"4 * 1 = 4"<<endl;
         cout<<"4 - 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<n<<" - "<<n-1<<" = "<<1<<endl;
        cout<<n-2<<" - "<<1<<" = "<<n-3<<endl;
        cout<<n-3<<" - "<<n-3<<" = "<<0<<endl;

        for(i=n-4;i>=5;i--)
        cout<<i<<" * 0 = 0"<<endl;

        cout<<"1 + 0 = 1"<<endl;
          cout<<"1 * 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;



    }

    return 0;
}
