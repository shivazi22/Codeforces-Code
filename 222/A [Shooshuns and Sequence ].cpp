#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,st[100005],i,j,c,count,k;
    scanf("%ld %ld",&a,&b);

    for(i=1;i<=a;i++)
    scanf("%ld",&st[i]);


        c=0;
        for(j=b+1;j<=a;j++)
        {
            if(st[b]!=st[j])
            {
                c=1;
                printf("-1\n");
                break;
            }
        }
        if(c==0)
        {
            count=0;
            for(k=b-1;k>=1;k--)
            {
                if(st[b]==st[k])
                count++;

                else
                break;

            }
            if(count==(b-1))
            printf("0\n");
            else
           printf("%ld\n",b-1-count);
        }



    return 0;
}
