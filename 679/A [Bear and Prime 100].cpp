#include<bits/stdc++.h>
using namespace std;
int d[20]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
int res[20],c;
int main()
{
    for(int i=0;i<19;i++)
    {
        printf("%d\n",d[i]);
        fflush(stdout);
        string str;
        cin>>str;
        if(str=="yes") res[i]=1;
        else res[i]=0;
    }
    if(res[15]||res[16]||res[17]||res[18])
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
    }
    for(int i=0;i<19;i++)
    {
        c+=res[i];
    }
    if(c<=1)
    {
        printf("prime\n");
        fflush(stdout);
        return 0;
    }
    else
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
    }
    return 0;
}
