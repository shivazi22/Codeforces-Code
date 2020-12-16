#include<bits/stdc++.h>
using namespace std;
string str;

int main()
{
    int n,i;
    cin>>n;
    cin>>str;
    for(i=0;i<n-1;i++)
    {
        if((str[i]=='1'&&str[i+1]=='0')||(str[i]=='0'&&str[i+1]=='1'))
        {
            str.erase(i,2);
            i-=2;
        }

    }
    cout<<str.size()<<endl;

    }

