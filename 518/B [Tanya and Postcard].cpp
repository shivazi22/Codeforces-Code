#include<bits/stdc++.h>
using namespace std;
char s1[200005],s2[200005],ch;
int l,i,t,cc,k,cnt,l1,l2,st[200],st2[200],t2;
int main()
{
    scanf("%s%s",&s1,&s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        st[s1[i]]++;
    }
      for(i=0;i<l2;i++)
    {
        st2[s2[i]]++;
    }
    for(i=65;i<=122;i++)
    {
        t=min(st[i],st2[i]);
        st[i]-=t;
        st2[i]-=t;
        cnt+=t;
    }
    l1-=cnt;
    for(i=65;i<=65+25;i++)
    {
        t2+=min(st[i],st2[i+32]);
    }
     for(i=65;i<=65+25;i++)
    {
        t2+=min(st[i+32],st2[i]);
    }

    if(t2>=l1)
        t2=l1;

    cout<<cnt<<" "<<t2<<endl;
    return 0;
}
