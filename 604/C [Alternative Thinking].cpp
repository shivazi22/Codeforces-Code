#include<bits/stdc++.h>
using namespace std;
long cnt,l;

int main()
{
    string str,st1;
    cin>>l;
    cin>>str;
    cnt=1;
    st1[0]=str[0];
    for(long i=1; i<l; i++)
    {
        if(str[i]==st1[0])
            continue;
        else
        {
            cnt++;
            st1[0]=str[i];
        }
    }
    //cout<<cnt<<endl;
    if(cnt==l||l==3||l==2) cout<<l<<endl;
    else
    {
        if(cnt==1)
        {cout<<cnt+2<<endl;
        return 0;
        }
        int cnt2=0;
        for(long i=0; i<l; i++)
        {
        if((str[i]=='0'&&str[i+1]=='0')||(str[i]=='1'&&str[i+1]=='1'))
        cnt2++;
        }

        if(cnt2==1) cout<<cnt+1<<endl;
        else cout<<cnt+2<<endl;
    }
    return 0;
}
