#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    char str[1000];
    cin>>str;



    for(int i=1;i<strlen(str);i++)
    {

       if(str[i]>=65&&str[i]<=92)
       cnt++;
    }

    if(cnt==strlen(str)-1)
    {



        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>=65&&str[i]<=92)
            printf("%c",str[i]+32);
             else printf("%c",str[i]-32);
        }



    }
    else cout<<str<<endl;

    return 0;
}
