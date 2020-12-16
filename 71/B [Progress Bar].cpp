#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,k,t,i,k1,j,i2;
    float a,a1,a2;
    scanf("%d %d %d",&n,&k,&t);
    if(n==1&&k==1&&t==0)
    printf("0");

    else
    {

    a=(float)t/100.0;
    //printf("%lf",a);
    for(i=1;i<=n;i++)
    {
    a1=(float)(k*i)/(n*k);
    if(a1>=a)
    {
        if(a==a1)
        i2=i;
        else
        i2=i-1;
        break;

    }

    }


   // printf(" %d",i2);
    for(j=1;j<=k;j++)
    {
       a2=(float) ((k*i2)+j)/(n*k);
       //printf("%f %f\n",a2,a);
       if(a2>=a)
       {
           if(a==a2)
           j=j;
           else
           j=j-1;
           break;
       }

    }

    for(k1=0;k1<i2;k1++)
    printf("%d ",k);
    if(j>0)
    {
    printf("%d ",j);
    i2++;
    }
   for( j=i2+1;j<=n;j++)
   {
       if(j==n)
       printf("0");
       else
       printf("0 ");
   }
    }
return 0;

}
