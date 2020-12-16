#include<bits/stdc++.h>
using namespace std;

string str;
int main()
{
    getline(cin,str);
    int l=str.size();
    int i=l-1,n=0,p=1;
    while(str[i]!=' ')
    {
        n=(str[i]-48)*p+n;
        p=p*10;
        i--;
    }
    p=0;
    int q=0;
    for(int i=2;i<l;i+=4)
    {
        if(str[i]=='-') q++;
        else if(str[i]=='+') p++;
    }
    p++;
    int s=(n+q)/p;
    int test=s;
    int remin=(n+q)%p;
    if(remin>0) test++;
    if(s>0&&s<=n&&test<=n)
    {
        cout<<"Possible"<<endl;
        if(remin==0) cout<<s;
        else {
            cout<<s+1;
            remin--;
        }
        for(i=1;i<l;i++)
        {
            if(str[i]=='+'&&remin!=0)
           {cout<<"+ "<<s+1<<" ";remin--; i+=3;continue;}
           else if(str[i]=='+'&&remin==0)
           {cout<<"+ "<<s<<" ";i+=3;continue;}
            else if(str[i]=='-') {cout<<"- 1 "; i+=3;continue;}
            else cout<<str[i];
        }
        return 0;
    }
    if(q>0)
    {
    s=(p-n)/q;
    test=s;
    remin=(p-n)%q;
    if(remin>0) test++;
    if(s>0&&s<=n&&test<=n)
    {
        cout<<"Possible"<<endl;
       cout<<1;
        for(i=1;i<l;i++)
        {
            if(str[i]=='-'&&remin!=0)
           {cout<<"- "<<s+1<<" ";remin--; i+=3;continue;}
           else if(str[i]=='-'&&remin==0)
           {cout<<"- "<<s<<" ";i+=3;continue;}
            else if(str[i]=='+') {cout<<"+ 1 "; i+=3;continue;}
            else cout<<str[i];
        }
        return 0;
    }
    }
    cout<<"Impossible"<<endl;

    return 0;
}
