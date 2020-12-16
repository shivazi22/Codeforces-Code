#include<bits/stdc++.h>
using namespace std;
long long int sum,m,n,i,a[100];
char str[100005];

int main()
{
    cin>>n>>m;
    scanf("%s",str);
    for(i=0;i<n;i++)
        a[str[i]]++;
    sort(a,a+100);
    i=99;
    while(1)
    {
        if(a[i]>=m)
        {
            sum+=m*m;
            break;
        }
        else
        {
            sum+=a[i]*a[i];
            m-=a[i];
        }
        i--;
    }
    cout<<sum<<endl;
    return 0;
}
