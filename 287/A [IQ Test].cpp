#include<bits/stdc++.h>
using namespace std;
char str[10][10];
int cnt,cnt2,i,j;
int main()
{
    for(i=0;i<4;i++)
    scanf("%s",str[i]);
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            if(str[i][j]=='.')
                cnt++;
            else  if(str[i][j]=='#')
                    cnt2++;

             if(str[i][j+1]=='.')
                cnt++;
              else  if(str[i][j+1]=='#')
                    cnt2++;

             if(str[i+1][j]=='.')
                cnt++;
             else  if(str[i+1][j]=='#')
                    cnt2++;

             if(str[i+1][j+1]=='.')
                cnt++;
              else  if(str[i+1][j+1]=='#')
                    cnt2++;

                    if(cnt>=3||cnt2>=3)

            {cout<<"YES"<<endl;
            return 0;
        }
        cnt=0,cnt2=0;
        }

    }
    cout<<"NO"<<endl;
}
