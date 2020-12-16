#include<bits/stdc++.h>
using namespace std;
int m,k,k1,l,j;

int main()
{
    string s;
    cin>>s>>m;
    l=s.size();

    for(k1=0;k1<l;k1++)
    {
        k=k1;
        for(j=k1;j<l&&j<=k1+m;j++)
        if(s[j]>s[k])
        k=j;

        for(j=k;j>k1;j--)
        swap(s[j],s[j-1]);

        m=m-(k-k1);
        if(m==0)
        break;
    }
    cout<<s<<endl;
    return 0;
}
