#include<bits/stdc++.h>
using namespace std;
long long sum,a,b,c,d,i;
char str[100050];
int main()
{
    cin>>a>>b>>c>>d;
    cin>>str;
    long l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='1')
            sum+=a;
        else if(str[i]=='2')
            sum+=b;
        else if(str[i]=='3')
            sum+=c;
        else sum+=d;
    }
    cout<<sum<<endl;

}
