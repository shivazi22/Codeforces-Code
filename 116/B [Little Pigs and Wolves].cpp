#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int count=0,i,j,t1,t2;
    char str[20][20]={},c1;
    scanf("%d %d",&t1,&t2);
    for(i=0;i<t1+2;i++)
    {
        for(j=0;j<t2+2;j++)
        {
            str[i][j]=0;
        }
    }
    scanf("%c",&c1);
    for(i=1;i<=t1;i++)
    {
        for(j=1;j<=t2;j++)
        {
        scanf("%c",&str[i][j]);
        }
        scanf("%c",&c1);
    }
    for(i=1;i<=t1;i++)
    {
        for(j=1;j<=t2;j++)
        {
            if(str[i][j]=='W')
            {
              if(str[i][j+1]=='P')
              {
                  str[i][j+1]=0;
                 count++;
              }

              else if(str[i][j-1]=='P')
              {
                  str[i][j-1]=0;
                  count++;
              }

              else if(str[i+1][j]=='P')
              {
                  str[i+1][j]=0;
                 count++;
              }

              else if(str[i-1][j]=='P')
              {
                  str[i-1][j]=0;
                count++;
              }

            }
        }
    }
    printf("%d\n",count);
    return 0;
}
