#include<bits/stdc++.h>
using namespace std;
int a[20]={0},i,n;
string str;
int main()
{
    cin>>n;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='2')
            a[2]++;
        else if(str[i]=='3')
            a[3]++;
        else if(str[i]=='4')
        {
            a[3]++;
            a[2]+=2;
        }
        else if(str[i]=='5')
            a[5]++;
        else if(str[i]=='6')
        {
            a[5]++;
            a[3]++;
        }
        else if(str[i]=='7')
            a[7]++;
        else if(str[i]=='8')
        {
            a[7]++;
            a[2]+=3;
        }
        else if(str[i]=='9')
        {
            a[7]++;
            a[3]+=2;
            a[2]++;
        }
    }
    for(i=7;i>=2;i--)
    {
        for(int j=1;j<=a[i];j++)
        cout<<i;
    }
    return 0;
}
