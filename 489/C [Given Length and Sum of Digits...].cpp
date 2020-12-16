#include<bits/stdc++.h>
using namespace std;

long a[205],b[205],ss,s,i,m;
int main()
{
    cin>>m>>s;
    if(m==1&&s==0)
    {
        cout<<0<<" "<<0<<endl;
        return 0;
    }

    if(s==0||s>m*9)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    ss=s;
    s--;
    a[1]=1;
    for(i=m;i>=1;i--)
    {
        if(s>=9)
            {a[i]=9;
            s=s-9;
            }
            else
                {a[i]+=s;
                s=0;
                }
}
for(i=1;i<=m;i++)
{
    if(ss>=9)
    {
        b[i]=9;
        ss=ss-9;
    }
    else
    {
        b[i]=ss;
        ss=0;
    }

}

for(i=1;i<=m;i++)
cout<<a[i];
cout<<" ";

for(i=1;i<=m;i++)
    cout<<b[i];

return 0;
}
