#include<stdio.h>
#include<math.h>
int main()
{
    long test,ans,ans1,a,b,c,b1,b2,i;
    scanf("%ld",&test);
    ans=ans1=b1=b2=0;
    for(i=0;i<test;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a==1)
        {

        ans=ans+b+c;
        b1=b1+b;
        }
        else
        {

        ans1=ans1+b+c;
        b2=b2+b;
        }
    }
    if(b1>=(ans/2))
    printf("LIVE\n");
    else
    printf("DEAD\n");
    if(b2>=(ans1/2))
    printf("LIVE\n");
    else
    printf("DEAD\n");
    return 0;
}
