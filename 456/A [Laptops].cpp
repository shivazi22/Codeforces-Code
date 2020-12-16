#include<bits/stdc++.h>
using namespace std;
typedef pair<long,long>PII;
vector<PII>shivazi;
long n,i,a,b;
int main()
{
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a>>b;
    shivazi.push_back(make_pair(a,b));
}
sort(shivazi.begin(),shivazi.end());
  for(i=0;i<n-1;i++)
  {
      if(shivazi[i].second>shivazi[i+1].second)
      {
          cout<<"Happy Alex"<<endl;
          return 0;
      }
  }
  cout<<"Poor Alex"<<endl;

return 0;
}
