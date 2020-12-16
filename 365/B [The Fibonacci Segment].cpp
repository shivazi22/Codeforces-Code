#include<bits/stdc++.h>
using namespace std;

long A[1000000],B[1000000],N,i;
int main()
{
    cin>>N;
      if(N==1)
      {
          cout<<1<<endl;
          return 0;
      }

    for(i=0;i<N;i++)
    {
        cin>>A[i];
        if(i>1)
        {
            if(A[i]==A[i-1]+A[i-2])
            {
               B[i]= B[i-1]+1;
            }
        }
    }
sort(B,B+N);
cout<<B[N-1]+2<<endl;

}
