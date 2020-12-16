#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;

    cin>>x1>>y1>>x2>>y2;
    if(abs(x1-x2)==abs(y1-y2)&&y1-y2!=0)
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    else if(abs(x1-x2)==0)
    cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x1+abs(y1-y2)<<" "<<y2<<endl;
    else if(abs(y1-y2)==0)
        cout<<min(x1,x2)<<" "<<y1+abs(x1-x2)<<" "<<max(x1,x2)<<" "<<y1+abs(x1-x2)<<endl;
    else cout<<-1<<endl;
    return 0;
}
