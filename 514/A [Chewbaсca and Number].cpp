#include<bits/stdc++.h>
using namespace std;

char S[200];
int l,i;
int main()
{
   scanf("%s",S);
   l=strlen(S);
   for(i=0;i<l;i++)
   {
       if(i==0&&(9-(S[i]-48))==0)
        continue;
       else
       {
           if((9-(S[i]-48))<(S[i]-48))
            S[i]=(9-(S[i]-48))+48;

       }
   }
   printf("%s",S);


    return 0;

}
