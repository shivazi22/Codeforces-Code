#include<bits/stdc++.h>
using namespace std;
char str[10000];
int a[200],i,coun=0;

int main()
{
    cin>>str;
        for(i=0;str[i];i++)
        a[str[i]]++;

           for(i=97;i<=124;i++)
            if(a[i]%2)
                  coun++;

            if(coun%2==0&&coun>0)
            cout<<"Second"<<endl;
            else cout<<"First"<<endl;

            return 0;
}
