#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long int n,m,d,a[100001],c,g,h,j,i,k;
    double b;
    scanf("%ld %ld %ld",&n,&m,&d);
    j=1;g=0;h=0;
    k=n%m;
    a[0]=n;
    while(1)
    {
        for(i=0;i<10;i++)
        {
        n=k*10+i;
        if(n%m==0)
        {
        a[j++]=i;
        n/=m;
        k=0;
        g=0;
        break;
        }
        else
        g=1;
        }
        h++;
        if(g==1)
        {
            printf("-1\n");
            break;
        }
        else if(d==h)
        break;
    }
    if(g==0)
    for(i=0;i<j;i++)
    printf("%ld",a[i]);
    printf("\n");
    return 0;
}
