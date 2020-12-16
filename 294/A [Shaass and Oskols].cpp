#include<stdio.h>
#include<math.h>
int main()
{
    int i,k,t,t1,a1,b1,A[1000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    scanf("%d",&A[i]);
    scanf("%d",&t1);
    for(k=1;k<=t1;k++)
    {
        scanf("%d%d",&a1,&b1);

        if(a1+1<=t)
        A[a1+1]=A[a1]-b1+A[a1+1];
        if(a1-1>0)
        A[a1-1]=A[a1-1]+b1-1;
        A[a1]=0;
    }
    for(i=1;i<=t;i++)
    printf("%d\n",A[i]);
    return 0;

}
