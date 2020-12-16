#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
    char str[200],str1[200],str2[200];
    int i,j,l,l1,l2,a[200],b[200],c=1;
    scanf("%s %s %s",str,str1,str2);
    l=strlen(str);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=50;i<200;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<l;i++)
    {
      a[str[i]]++;
    }
    for(i=0;i<l1;i++)
    {
      a[str1[i]]++;
    }
    for(i=0;i<l2;i++)
    {
      b[str2[i]]++;
    }
    for(i=50;i<200;i++)
    {
       if(a[i]!=b[i])
       {
           c=0;
       printf("NO\n");
       break;

       }
    }
    if(c==1)
    printf("YES\n");

}
