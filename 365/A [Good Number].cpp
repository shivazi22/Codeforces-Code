#include<bits/stdc++.h>
using namespace std;

long N,K,i,j;

int main()
{
    cin>>N>>K;
    int coun=0;
    for(i=1;i<=N;i++)
    {
        int cc=0;
        char str[50];
        int A[100];

        for(int p=48;p<=60;p++)
            A[p]=0;

        cin>>str;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]-48<=K)
            {
                A[str[j]]++;
            }
            //else cout<<0<<endl;
        }
        //cout<<A[49];
        for(int k=48;k<=K+48;k++)
        {
            if(A[k]==0)
            {
                cc=1;

             //cout<<0<<endl;
             }

        }
        if(cc==0)
        {
            coun++;
        }

    }

    cout<<coun<<endl;
    return 0;
}
