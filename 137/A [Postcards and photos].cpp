#include<stdio.h>
#include<string.h>
int main()
{
char str[110]={};
int i,j,count,v;
    scanf("%s",str);
    count=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='C')
        {
            v=0;
            while(str[i]=='C')
            {
                v++;
                i++;
            }
            if(v<=5)
            count=count+1;
             if((v%5==0)&&v>5)
            {
                j=v/5;
                count= j+count;
            }

             if((v%5!=0)&&(v>5))
            {
                j=v/5;
                count=count+j+1;
            }
        }
        if(str[i]=='P')
        {
            v=0;
            while(str[i]=='P')
           {
              v++;
               i++;
           }

            if(v<=5)
            count=count+1;
             if((v%5==0)&&v>5)
            {
                j=v/5;
                count= j+count;
            }

             if((v%5!=0)&&(v>5))
            {
                j=v/5;
                count=count+j+1;
            }


        }
        i=i-1;


        }
    printf("%d\n",count);
    return 0;
}
