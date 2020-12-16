#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"i can learn anything"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2) cout<<" I hate ";
        else cout<<" I love ";

        if(n-i==0)
            cout<<"it"<<endl;
        else cout<<"that";
    }
    return 0;
}
