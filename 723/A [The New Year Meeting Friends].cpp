#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
  int maxi=max(a,max(b,c));
  int mina=1000;
  for(int i=1;i<=maxi;i++)
  {
      int val=abs(i-a)+abs(i-b)+abs(i-c);
      mina=min(mina,val);
  }
  cout<<mina<<endl;
    return 0;
}
