#include<bits/stdc++.h>
using namespace std;
set< int >myset;
int p,q,t,n;
int main()
{
    cin>>n;
    cin>>p;
    while(p--)
    {
        cin>>t;
        myset.insert(t);
    }
    cin>>q;
    while(q--)
    {
        cin>>t;
        myset.insert(t);
    }
   if(myset.size()==n)
    cout<<"I become the guy."<<endl;
   else cout<<"Oh, my keyboard!"<<endl;
   return 0;
}
