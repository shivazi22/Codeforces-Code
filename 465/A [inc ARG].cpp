#include<bits/stdc++.h>
using namespace std;
char str[200];
int cnt,i,n;
int main()
{
    cin>>n;
    cin>>str;

        if(str[0]=='0')
        {
            cout<<1<<endl;
            return 0;
        }
        else
        {
            while(str[i]=='1')
            {
                i++;
                cnt++;
            }
            if(cnt<n)
                cnt++;
        }
        cout<<cnt<<endl;
}
