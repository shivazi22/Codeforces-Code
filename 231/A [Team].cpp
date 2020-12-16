#include<stdio.h>
int main()
{
    long n,i,count,a,b,c,d;
    scanf("%ld",&n);
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        d=a+b+c;
        if(d>=2)
        count++;
    }
    printf("%ld\n",count);
    return 0;
}
