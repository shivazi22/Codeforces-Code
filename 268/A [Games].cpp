#include<iostream>
using namespace std;
int i,j,cnt,n,a[100],b[100];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;

    }

