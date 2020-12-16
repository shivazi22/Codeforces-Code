#include<bits/stdc++.h>
using namespace std;
char str[200];
int l,n,cnt,cnt2,i;
int main()
{
    cin>>n;
    scanf("%s",str);
    //int l=strlen(str);
    sort(str,str+n);
    sort(str+n,str+2*n);
     for(i=0;i<n;i++)
     {
         if(str[i]>str[i+n])
            cnt++;
         else if(str[i]<str[i+n]) cnt2++;
     }
     if(cnt==n||cnt2==n) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    //printf("%s",str);
    return 0;
}
