#include<bits/stdc++.h>
using namespace std;

long a[200],b[201],sum,t,k,i,j;

char str[10000];
int main()
{

    scanf("%s",str);
    int l=strlen(str);
    cin>>k;
    for(i=97;i<=97+25;i++)
       {
           cin>>a[i];
           b[i]=a[i];
       }
    sort(a,a+200);
    t=a[199];
    int p=1;
    for(i=0;i<l;i++)
    sum+=b[str[i]]*p++;
    for(j=p;j<p+k;j++)
        sum+=t*j;
    cout<<sum<<endl;
    return 0;


}
