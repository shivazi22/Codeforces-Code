#include<bits/stdc++.h>
using namespace std;
int n,sum,sum2;
string str;
int main()
{
    cin>>n;
    cin>>str;

    for(int i=0;i<str.size()/2;i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
           sum+=str[i]-48;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    for(int i=str.size()/2;i<str.size();i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
           sum2+=str[i]-48;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    if(sum==sum2)
    cout<<"YES";
    else cout<<"NO";
    //cout<<sum<<endl;
    return 0;
}
