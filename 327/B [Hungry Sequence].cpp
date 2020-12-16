#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long int N = 10500000;
long int status[10500000];
// status[i] = 0, if i is prime
// status[i] = 1, if i is not a prime
int main()
{
long int i, j;
// initially we think that all are primes
for( i = 2; i <= N; i++ )
status[i] = 0;
for( i = 3; i <= N; i += 2 )
{
if( status[i] == 0 )
{
// so, i is a prime, so, discard all the multiples
// 3 * i is odd, since i is odd. And j += 2 * i, so, the next odd
// number which is multiple of i will be found
for( j = 3 * i; j <= N; j += 2 * i )
status[j] = 1; // status of the multiple is 1
}
}
// print the primes
//printf("2 ");
long nnn;
cin>>nnn;
int count=0;
for( i = 3; i <= N; i += 2 )
{
if( status[i] == 0 )
{
    count++;
// so, i is prime
printf("%ld ", i);
if(count==nnn)
break;

}
}
//cout<<count<<" "<<endl;

return 0;
}
