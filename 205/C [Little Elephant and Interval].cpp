#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long a,b;
    char buff[100],buff1[100];
    long long a3,a4,a1,a2,b1,b2,count,count1=0,count2=0;
    scanf("%I64d %I64d",&a,&b);
    sprintf(buff,"%I64d",a);
    sprintf(buff1,"%I64d",b);
    a3=buff[0]-48;
    a4=buff1[0]-48;
    //printf("%ld %ld",a3,a4);
    if(a<10)
    count1=a;
    else
    {
        a1=a/10;
        a2=a%10;
        if(a<100)
        {
        count1=9+a1-1;

        }
        else
        {
            count1=8+a1;

        }
        if(a2>=a3)
        count1++;
    }


     if(b<10)
    count2=b;
    else
    {
        b1=b/10;
        b2=b%10;

        if(b<100)
        {
        count2=9+b1-1;

        }
        else
        {
            count2=8+b1;

        }

        if(b2>=a4)
        count2++;
    }
    //printf("%ld %ld",count1,count2);
    count=count2-count1;
    if(a2==a3||a<10)
    count++;
    printf("%I64d\n",count);
    return 0;

    }




