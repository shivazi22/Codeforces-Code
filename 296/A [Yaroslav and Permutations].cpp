#include<stdio.h>
int s1[1004]={0};
int main()
{
    int t,i,s[105];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&s[i]);
    s1[s[i]]++;
    }
    for(i=1;i<=t;i++)
    if(s1[s[i]]>(t+1)/2)
        {
            printf("NO\n");
            return 0;
        }
        printf("YES\n");

}
