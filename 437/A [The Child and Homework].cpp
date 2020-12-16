#include<bits/stdc++.h>
using namespace std;

int st[10],i,j,cnt,cnt2;
char ch;
string str;
int main()
{
    for(i=1;i<=4;i++)
    {
        cin>>str;
        st[i]=str.size()-2;
        str.clear();
    }

    for(i=1;i<=4;i++)
    {
            cnt=0;
        for(j=1;j<=4;j++)
        {
            if(i!=j)
            {
                if(2*st[i]<=st[j])
                    cnt++;
            }
        }
        if(cnt==3)
        {
            ch=64+i;
            break;
        }

    }

         for(i=1;i<=4;i++)
    {
            cnt2=0;
        for(j=1;j<=4;j++)
        {
            if(i!=j)
            {
                if(st[i]/2>=st[j])
                    cnt2++;
            }
        }
        if(cnt2==3)
        {
          ch= 64+i;
          break;

        }
    }
    if(cnt==3&&cnt2!=3)
        printf("%c\n",ch);
    else if(cnt2==3&&cnt!=3)
        printf("%c\n",ch);
   else
    cout<<"C"<<endl;
	return 0;
}
