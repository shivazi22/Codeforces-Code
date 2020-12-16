#include<bits/stdc++.h>
using namespace std;

//double f;

set<double>myset;

int main()
{
    long n,x,y,x1,y1,i;
    cin>>n>>x>>y;
  // double f= double(x)/(y);
   //printf("%lf",f);

    for(i=1;i<=n;i++)
    {
        cin>>x1>>y1;
        if((x1-x)==0)
        {
             myset.insert(40000);
             continue;
        }


       double f= (double)(y1-y)/(x1-x);
       myset.insert(f);

    }
    cout<<myset.size()<<endl;


    return 0;

}
