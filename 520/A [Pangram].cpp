#include<bits/stdc++.h>
using namespace std;
char S[200];
int st[220],i,cc,n;
int main()
{
    cin>>n;
    scanf("%s",S);
    cc=0;
    for(i=0;i<n;i++)
    {
        st[S[i]]++;
    }
    for(i=65;i<=65+25;i++)
    {
        if(st[i]>0||st[i+32]>0)
            continue;
        else
        {

            cout<<"NO"<<endl;
              cc=1;
            break;

        }
    }
    if(cc==0)
        cout<<"YES"<<endl;
    return 0;
}




