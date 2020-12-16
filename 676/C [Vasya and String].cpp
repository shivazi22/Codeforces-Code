#include<bits/stdc++.h>
using namespace std;
int cnta[100005];
int n,k;
char str[100005];

int checking(char d)
{
    int initial=0;
    int ending=1;
    cnta[0]=0;
       for(int i=0;i<n;i++)
    {
        if(str[i]==d) cnta[i+1]=cnta[i]+1;
        else cnta[i+1]=cnta[i];
    }
    int res=0;
    while(ending<=n)
    {
        if(cnta[ending]-cnta[initial]<=k)
        {
            res=max(res,ending-initial);
            ending++;
        }
        else initial++;
    }
    return res;
}

int main()
{
    cin>>n>>k;
    scanf("%s",str);
    cout<<max(checking('a'),checking('b'))<<endl;
    return 0;
}
