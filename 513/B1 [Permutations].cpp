#include<bits/stdc++.h>
using namespace std;
long  n,m,cnt;
long myints[] = {0,1,2,3,4,5,6,7,8},maxi,sum;
int main ()
{
    cin>>n>>m;



   maxi=(n*(n+1)*(n+2))/6;

cnt=0;

  do {
        sum=0;
        for(long i=1;i<=n;i++)
        {
            for(long int j=i;j<=n;j++)
            {
                long int st=*min_element(myints+i,myints+j+1);
                // cout<<st<<" ";
                sum+=st;


            }
            //cout<<endl;
        }
       // cout<<sum<<endl;
        if(sum==maxi)
            cnt++;

        if(cnt==m)
        {
             for(long int i=1;i<=n;i++)
             cout<<myints[i]<<" ";
             cout<<endl;
            break;
        }


    //cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while (next_permutation(myints+1,myints+n+1) );

 return 0;
}


