#include<bits/stdc++.h>
using namespace std;
long long l,r;

int main()
{
   cin>>l>>r;
   if(l+2==r)
   {
       if(l%2==0)
       {
           cout<<l<<" "<<l+1<<" "<<l+2<<endl;
           return 0;
       }
       else cout<<-1<<endl;

   }
   else if(l+2>r)
   {
       cout<<-1<<endl;
       return 0;
   }

   else
   {
       if(l%2)
       {
           cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
           return 0;
       }
       else
       {
           cout<<l<<" "<<l+1<<" "<<l+2<<endl;
           return 0;
       }
   }
   // cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    return 0;

}

