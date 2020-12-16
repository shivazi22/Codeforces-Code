#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,sum=0;
    string str,str2;
    cin>>n;
    cin>>str>>str2;
    for(i=0;i<n;i++)
    {
        a=str[i]-48;
        b=str2[i]-48;
       // sum+=
       if(a>b)
        sum+=min(abs(a-b),(abs(9-max(a,b))+b+1));
        else sum+=min(abs(a-b),(abs(9-max(a,b))+a+1));

    }
    cout<<sum<<endl;
    return 0;
}
