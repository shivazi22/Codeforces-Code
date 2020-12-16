#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,sum=0;
    cin>>a;
while(a!=0)
    {
     if(a%2)
     {sum++;
     a--;}
     else {a=a/2;}

     }
     cout<<sum<<endl;
    return 0;
}
