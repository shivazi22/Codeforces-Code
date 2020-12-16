#include<bits/stdc++.h>
using namespace std;
long  N = 3500;
long  prime[3000];
bitset<3500>status;
void findprime()
{

    long  i, j, sqrtN;
    for( i = 2; i <= N ; i++ ) status[i] = false;
    sqrtN = long ( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == false )
        for( j = i * i; j <= N; j += i + i )
        status[j] = true;
    }
    int cnt=0;
    prime[0]=2;
    for( i = 3; i <= N; i += 2 )
    {
        if( status[i] == false)
        {
            cnt++;
            prime[cnt]=i;
        }
    }
}

bool findfactor(int n)
{
      int cc=0;
    for(int i=0;prime[i]<=sqrt(n); i++)
    {
        int flag=0;
        while(n%prime[i]==0)
        {
            flag=1;
            n/=prime[i];
        }
        if(flag)
        cc++;
    }
    if(n>1) cc++;
    if(cc==2) return true;
    else return false ;
}

int main()
{
    findprime();
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        if(findfactor(i))
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

