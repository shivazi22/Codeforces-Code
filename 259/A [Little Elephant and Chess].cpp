#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char tt[10][10];
    int i,c=0,j;

    for(i=0;i<8;i++)
    {
        scanf("%s",tt[i]);
    }
    for(j=0;j<8;j++)
    {
        for(i=0;i<8;i++)
        {
           if(((tt[j][i]=='B'&&tt[j][i+1]=='B')||tt[j][i]=='W'&&tt[j][i+1]=='W'))
           {
               c=1;
               printf("NO\n");
               break;
           }

        }
       if(c==1)
        break;
        }
        if(c==0)
        printf("YES\n");
        return 0;

}
