#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100001];
    int i,t=0;

    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    if(str[i]=='0')
        {
            t=1;
            str[i]=-1;
            break;
        }
        if(t==0)
        str[0]=-1;
        for(i=0;str[i]!=0;i++)
        if(str[i]=='0'||str[i]=='1')
        printf("%c",str[i]);
        printf("\n");
return 0;
}
