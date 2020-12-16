#include<bits/stdc++.h>
using namespace std;
long cnt,n,ans;
int main()
{
    cin>>n;
    int a=5;
    while(n-a>0)
    {
        n=n-a;
        a=a*2;
        cnt++;
    }
    long l=pow(2,cnt);
    ans=n/l;
    if(n%l) ans++;
    if(ans==1)
    cout<<"Sheldon"<<endl;
    else if(ans==2)
    cout<<"Leonard"<<endl;
    else if(ans==3)
    cout<<"Penny"<<endl;
    else if(ans==4)
    cout<<"Rajesh"<<endl;
    else cout<<"Howard"<<endl;
    return 0;


}
