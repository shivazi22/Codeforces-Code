#include <bits/stdc++.h>
using namespace std;
int st[200];
int main()
{
    int l;
    string str;
    cin>>l;
    cin>>str;
    for(int i=0;i<l;i++){
        st[str[i]]++;
    }
    int sum=0;
    for(int i=97;i<=97+26;i++)
    {
        if(st[i]>1) sum+=(st[i]-1);
    }
    if(l>26) cout<<-1<<endl;
    else cout<<sum<<endl;
}
