#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int sb[5001]={0},a1[5001],a,i,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&a1[i]);
        sb[a1[i]]++;
    }
    for(i=1;i<=a;i++)
    {
        if(sb[i]==0)
            count++;

    }
    printf("%d\n",count);
    return 0;
}
