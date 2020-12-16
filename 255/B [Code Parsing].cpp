#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000010];
    long count,count1,l,i,j;
   while(scanf("%s",str)!=EOF)
   {

    l=strlen(str);
    count=count1=0;
    for(i=0;i<l;i++)
    {
        if(str[i]==120)
        count++;
        else
        count1++;
    }
    if(count==0||count1==0)
    printf("%s\n",str);
    else if(count>count1)
    {
        for(j=0;j<count-count1;j++)
        printf("x");
    }

    else
    {
        for(j=0;j<count1-count;j++)
        printf("y");
    }
    printf("\n");

    }
    return 0;
    }
