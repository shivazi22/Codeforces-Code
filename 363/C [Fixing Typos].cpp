#include<bits/stdc++.h>
using namespace std;

char str[200050],A[200050],B[200050];
long i,j,coun=0,k=0;


int main()
{
    cin>>str;
long    l=strlen(str)-2;
    for(i=0;i<l;i++)
    {
        if(str[i]==str[i+1]&&str[i+1]==str[i+2])
        ;
        else
        {
            A[k++]=str[i];

        }
    }
    A[k]=str[l];
    A[k+1]=str[l+1];
    A[k+2]=0;




if(strlen(str)==1)
   {cout<<str<<endl;
return 0;}

int k1=0;

    for(i=0;i<=k;i++)
    {
        if(A[i]==A[i+1])
        {

                B[k1++]=A[i];
                B[k1++]=A[i+1];
                i++;

                if(A[i+1]==A[i+2])
                {
                B[k1++]=A[i+1];
                i+=2;
                }


           }
        else B[k1++]=A[i];
        }




        if(A[k]!=A[k+1])
        B[k1++]=A[k+1];

           B[k1]=0;


           cout<<B<<endl;





    return 0;
}


/*#include <cstdio>
#include <cstring>
using namespace std;

char s[200005];

int main()
{
    gets(s);
    int n=0;
    for(int i=0;s[i];i++)
        {
        if(n>=2 && s[n-2]==s[n-1] && s[n-1]==s[i]) continue;
        if(n>=3 && s[n-3]==s[n-2] && s[n-1]==s[i]) continue;
        s[n++]=s[i];
    }
    s[n]=0;
    puts(s);
}*/
