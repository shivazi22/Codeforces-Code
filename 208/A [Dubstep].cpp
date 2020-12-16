#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[240];
    int l,i,c;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='W' && str[i+1]=='U'&&str[i+2]=='B')
        {
            c=0;
            i=i+2;
            continue;
        }
        if(c==0)
        {
             printf(" %c",str[i]);
             c=1;
        }

       else printf("%c",str[i]);
    }
    return 0;
}
