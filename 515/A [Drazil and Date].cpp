#include<bits/stdc++.h>
using namespace std;
long long a,b,s,t;
int main()
{
    cin>>a>>b>>s;
    t=abs(a)+abs(b);
    if(s>=t)
    {
        if(s%2==0&& t%2==0)
       {

        cout<<"Yes"<<endl;
        return 0;
    }
        else if(s%2!=0&& t%2!=0)
        {
         cout<<"Yes"<<endl;
         return 0;
        }

    }
        cout<<"No"<<endl;


    return 0;
}
