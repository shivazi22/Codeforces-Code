#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
#define MAX 3500
using namespace std;
int main()
{
    int t,i,l,a[150],c,t1,j,k;
    char str[1050],str1[1050]={},sb[30]={};
   scanf("%d",&t);
   c=0;
    scanf("%s",str);
    for(i=90;i<130;i++)
    a[i]=0;
    l=strlen(str);
    for(i=0;i<l;i++)
        a[str[i]]++;

        k=0;
        for(i=90;i<125;i++)
        if(a[i]!=0)
        {
        sb[k]=i;
        k++;
        }
        sb[k]=0;

        for(i=0;sb[i]!=0;i++)
        {
            if((a[sb[i]]%t)!=0)
            {

            printf("-1\n");
            c=1;
            break;
            }
            }
            k=0;
            if(c==0)
            for(i=0;sb[i]!=0;i++)
            {
                t1=a[sb[i]]/t;
                for(j=0;j<t1;j++)
                {
                    str1[k]=sb[i];
                    c=2;k++;
                    printf("%c",sb[i]);
                }
                }

        str1[k]=0;
        if(c==2)
        {
            for(i=0;i<t-1;i++)
            printf("%s",str1);
        }
        printf("\n");

        return 0;
}
