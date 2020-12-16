#include<string.h>
#include<stdio.h>
#include<math.h>
int main()

{
    char str[104]={};
    int l,s,i;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {


    scanf("%s",str);
    l=strlen(str);
    if(l>10)
    {
      printf("%c%d%c\n",str[0],l-2,str[l-1]);
    }
    else
    printf("%s\n",str);
    }
    return 0;

}
