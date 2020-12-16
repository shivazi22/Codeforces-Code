#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2,str;
    cin>>st1>>st2;
   transform(st1.begin(), st1.end(),st1.begin(), ::toupper);
  transform(st2.begin(), st2.end(),st2.begin(), ::toupper);
  if(st1>st2) cout<<"1"<<endl;
  else if(st1<st2) cout<<"-1"<<endl;
  else cout<<"0"<<endl;


}
