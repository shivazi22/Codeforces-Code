#include<bits/stdc++.h>
using namespace std;
long t,st,a[100005],n,i,l,r;
char str[100005];
int main()
{
    scanf("%s",str);
    n=strlen(str);
    long k=1;
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
            t++;
        a[i+1]=t;
       // cout<<a[i+1]<<endl;
    }
    a[n]=t;
    //for(i=0;i<)
    cin>>st;
    while(st--)
    {
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
