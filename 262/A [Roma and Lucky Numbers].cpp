#include<stdio.h>
#include<string.h>
int main()
{
    long n,k;
    char st[20];
    scanf("%ld %ld",&n,&k);
    long m=n;
    for(long i=0;i<n;i++)
    {
        scanf("%s",st);
        long count=0;
        for(long j=0;j<strlen(st);j++)
        {
            if(st[j]=='4'||st[j]=='7')
                count++;

        }
        if(count>k)
            m--;
    }
    printf("%ld\n",m);
    return 0;
}
