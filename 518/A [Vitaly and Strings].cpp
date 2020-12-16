#include<bits/stdc++.h>
using namespace std;
char s1[150],s2[150],ch;
int l,i,t,cc,k;
int main()
{
    scanf("%s%s",&s1,&s2);
   l= strlen(s1);
//scanf("%c",ch);
    for(i=0;i<l-1;i++)
    {
        if(s1[i]!=s2[i])
        {
            cc=1;
        }
    }
    if(cc==0&&s2[l-1]==s1[l-1]+1)
    {
        cout<<"No such string"<<endl;
    }
    else
    {
        k=l-1;
        while(s1[k]=='z')
        {

            s1[k]='a';
            k--;
        }
        s1[k]=s1[k]+1;

   if(strcmp(s1,s2)==0)
   {
     cout<<"No such string"<<endl;
   }
   else

        printf("%s",s1);
    }


    return 0;
}
