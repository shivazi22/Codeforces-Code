#include<iostream>
#include<cstdio>
using namespace std;
char ct,ch;
int main()
{
    int t,count=0;
    cin>>t;
    scanf("%c",&ch);
    for(int i=0;i<t;i++)
    {
        scanf("%c",&ch);
        if(ct==ch)
        count++;
         ct=ch;
    }
    cout<<count<<endl;
    return 0;

}