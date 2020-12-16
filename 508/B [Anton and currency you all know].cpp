#include<bits/stdc++.h>
using namespace std;

char str[200000];
long cnt,i,j,l,p,q;
int main()
{
    scanf("%s",str);
    long l= strlen(str);
    cnt=0,p=-1;
    for(i=0;i<l-1;i++)
    {
        if(((str[i]-'0')%2)==0)
        {
            if(str[i]<str[l-1])
            {
                swap(str[i],str[l-1]);
                printf("%s\n",str);
                cnt=1;
                break;
            }
            else
            p=i;
        }
    }
    if(p==-1&&cnt==0)
    cout<<-1<<endl;
    else if(cnt==0&&p>-1)
    {
        swap(str[p],str[l-1]);
        printf("%s",str);

    }
}

