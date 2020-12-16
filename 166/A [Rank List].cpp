#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,k,i,j,c=0,a[55],b[55],t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;

              t=b[i];
              b[i]=b[j];
              b[j]=t;
            }
            if(a[j]==a[i]&&b[i]>b[j])
            {
                t=a[i];
               a[i]=a[j];
               a[j]=t;

              t=b[i];
              b[i]=b[j];
              b[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[k-1]==a[i]&&b[i]==b[k-1])
        c++;
    }
    printf("%d\n",c);

}
