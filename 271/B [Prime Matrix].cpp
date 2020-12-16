#include<bits/stdc++.h>
using namespace std;

long long res[250050],a[100050],sum,aa[600][600],pp,i,k,n,m,nn,j;

int N = 100050;
bool status[100052];
long prime[80000];
void StorPrime()
{
    long i, j, sqrtN,k=0;
    for( i = 2; i <= N; i++ )
    status[i] = 0;
    prime[0]=2;
    k=1;
    sqrtN = long( sqrt((double)N) ); // have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == 0 )
        {
            prime[k]=i;
            k++;
            for( j = i * i; j <= N; j += i + i )
            status[j] = 1; // status of the multiple is 1
        }
    }
    for(;i<100050;i+=2)
    if( status[i] == 0 )
    {
        prime[k]=i;
        k++;
    }

    // printf("%ld\n",k);
}

int main()
{
        StorPrime();

    pp=0;
    for(i=1;i<=100000;i++)
    {
        for(k=pp;k<=10000;k++)
        {
            if(prime[k]>=i)
            {
             a[i]= prime[k]-i;
             pp=k;
             break;
            }

        }
        }

      //  for(i=1;i<100;i++)
           // cout<<a[i]<<" ";



        cin>>n>>m;
        nn=0;

         for(i=1;i<=n;i++)
         {
             sum=0;
             for(j=1;j<=m;j++)
             {
                 cin>>aa[i][j];
                  //cout<<a[aa[i][j]]<<" ";
                 sum+=a[aa[i][j]];


             }

             res[nn++]=sum;
            }

             for(i=1;i<=m;i++)
         {
             sum=0;
             for(j=1;j<=n;j++)
             {

              sum+=a[aa[j][i]];

             }

             res[nn++]=sum;

             }
             //for(i=0;i<=nn;i++)
               // cout<<res[i]<<" ";

             sort(res,res+nn);
             cout<<res[0]<<endl;


  return 0;
}
