#include<bits/stdc++.h>
using namespace std;
int a[20],i,j,n;
char ch;
int main()
{
    cin>>n;
    scanf("%c",&ch);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%c",&ch);
            a[ch-48]++;

        }
        scanf("%c",&ch);
    }
    //cout<<a[1]<<endl;
    for(i=1;i<=9;i++)
    {
        if(a[i]!=0&& a[i]>2*n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
