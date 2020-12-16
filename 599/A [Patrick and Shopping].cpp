#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
const int str3[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    long d1,d2,d3,way1,way2,way3,way4;
   cin>>d1>>d2>>d3;
  way1= (d1+d2+d3);
  way2=2*(d2+d1);
  way3=2*(d1+d3);
  way4=2*(d3+d2);
  cout<<min(way1,(min(way2,min(way3,way4))))<<endl;
    return 0;
}
