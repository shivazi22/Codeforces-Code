#include<bits/stdc++.h>
using namespace std;
long a,b,c;
int main()
{
    cin>>a>>b>>c;
    if((a+b-c)%2==0&&((a+b-c)/2)>-1&&(a+c-b)%2==0&&((a+c-b)/2)>-1&&(c+b-a)%2==0&&((c+b-a)/2)>-1)
    cout<<(a+b-c)/2<<" "<<(b+c-a)/2<<" "<<(a+c-b)/2<<endl;
    else
        cout<<"Impossible"<<endl;


}
