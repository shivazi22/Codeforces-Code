#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589
int main()
{
    double d,h,v,e,total=0.0,total2;
    scanf("%lf%lf%lf%lf",&d,&h,&v,&e);
    total=pi*d*d*e/4.0;
    if(total>v) cout<<"NO"<<endl;
    else {
            cout<<"YES"<<endl;
            total=pi*d*d*h/((v-total)*4.);
            printf("%.10f\n",total);
    }

    return 0;
}
