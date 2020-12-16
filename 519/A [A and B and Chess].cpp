#include<bits/stdc++.h>
using namespace std;

int st[200],i,j,cnt,cnt2;
char str[20];
int main()
{
    for(i=65;i<=97+25;i++)
    {
        if(i=='q'||i=='Q')
            st[i]=9;
            else if(i=='r'||i=='R')
                st[i]=5;
            else if(i=='b'||i=='B'||i=='n'||i=='N')
                st[i]=3;
            else if(i=='p'||i=='P')
                st[i]=1;


    }

    for(i=1;i<=8;i++)
    {
        scanf("%s",str);
        for(j=0;j<8;j++)
        {
            if(str[j]>=65&&str[j]<=65+25)
            {
                cnt+=st[str[j]];
            }
            else if(str[j]>=97&&str[j]<=97+25)
            {
                cnt2+=st[str[j]];
            }

        }
    }
    if(cnt==cnt2)
        cout<<"Draw"<<endl;
    else if(cnt>cnt2)
        cout<<"White"<<endl;
    else cout<<"Black"<<endl;
    return 0;
}
