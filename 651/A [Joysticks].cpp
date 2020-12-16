#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,cnt=0;
 cin>>a>>b;
 for(;;)
 {
     if(a>b) {a-=2;b++;}
     else {b-=2;a++;}
     if(a<0||b<0) break;
     else if(a==0||b==0)
     {
         cnt++;break;
     }
     else cnt++;
 }
 cout<<cnt<<endl;
    return 0;
}
