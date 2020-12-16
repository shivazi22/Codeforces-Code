#include<bits/stdc++.h>
using namespace std;
long  long N = 1500000;
long  long prime[200000];
bitset<1500000>status;
void findprime()
{

    long long  i, j, sqrtN;
    for( i = 2; i <= N ; i++ ) status[i] = false;
    sqrtN = long ( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == false )
        for( j = i * i; j <= N; j += i + i )
        status[j] = true;
    }
    long long cnt=0;
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

int main()
{
    findprime();
    long long n,k;
    cin>>n>>k;
    if(k==0&&n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    if(((n/2)>k)||k==0||n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
       long long  p=n/2;
        p--;
        k=k-p;
        p*=2;
        cout<<k<<" "<<2*k<<" ";
        if(n>2)
        {
            int flag=0;
            for(int i=0;i<p;i++)
            {
                if(prime[i]==k||prime[i]==2*k)
                {
                    flag=1;
                     continue;
                }

                    else cout<<prime[i]<<" ";
            }
            if(flag)
            {cout<<prime[p]<<" ";
            p++;
            }
            if(n%2)
            cout<<prime[p]<<endl;
        }
    }
    return 0;
}

