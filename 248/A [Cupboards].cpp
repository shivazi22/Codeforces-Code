#include<stdio.h>
#include<math.h>
int main()
{
    long i,a,b,T,count,count1,count2,count3,s;

    scanf("%ld",&T);
    count=count1=count2=count3=0;
    for(i=0;i<T;i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a==0)
        count++;
        if(a==1)
        count1++;
        if(b==0)
        count2++;
        if(b==1)
        count3++;
    }
    if(count<count1)
    a=count;
    else
    a=count1;
    if(count2<count3)
    s=count2;
    else
    s=count3;

    printf("%ld",a+s);
    return 0;
}
