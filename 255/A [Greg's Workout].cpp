#include<stdio.h>
#include<math.h>
int main()
{
    long a,test,i,t,ans1,ans2,ans3;
   while(scanf("%ld",&test)!=EOF)
   {
    ans1=ans2=ans3=0;
    for(i=1;i<=test;i++)
    {
       if(i==1||i==4||i==7||i==10||i==13||i==16||i==19)
       {
           scanf("%ld",&t);
           ans1=ans1+t;
       }
       if(i==2||i==5||i==8||i==11||i==14||i==17||i==20)
       {
           scanf("%ld",&t);
           ans2=ans2+t;
       }
       if(i==3||i==6||i==9||i==12||i==15||i==18)
       {
           scanf("%ld",&t);
           ans3=ans3+t;
       }
    }
    if(ans1>ans2)
    {
        if(ans1>ans3)
        printf("chest\n");
        else
        printf("back\n");
    }
    else
    {
        if(ans3>ans2)
        printf("back\n");
        else
        printf("biceps\n");
    }
   }

}
