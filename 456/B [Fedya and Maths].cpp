#include<bits/stdc++.h>
using namespace std;
char str[1000005];
long long l,x;
int main()
{
    cin>>str;
    l=strlen(str);
    if(l==1)
    {
        if((str[0]-48)%4==0)
            cout<<4<<endl;
        else cout<<0<<endl;

    }
    else
    {
       x= (str[l-2]-48)*10+(str[l-1]-48);
       if(x%4==0)
        cout<<4<<endl;
       else cout<<0<<endl;
    }
    return 0;

}
