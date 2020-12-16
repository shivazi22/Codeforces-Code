#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,t;
    cin>>n;
    if(n==0)
    {
        cout<<"O-|-OOOO"<<endl;
        return 0;
    }
    while(n)
    {
        t=n%10;
        n=n/10;
        if(t==0)
            cout<<"O-|-OOOO"<<endl;
        else if(t==1)
         cout<<"O-|O-OOO"<<endl;
        else if(t==2)
             cout<<"O-|OO-OO"<<endl;
        else if(t==3)
         cout<<"O-|OOO-O"<<endl;
         else if(t==4)
             cout<<"O-|OOOO-"<<endl;
             if(t==5)
            cout<<"-O|-OOOO"<<endl;
        else if(t==6)
         cout<<"-O|O-OOO"<<endl;
        else if(t==7)
             cout<<"-O|OO-OO"<<endl;
        else if(t==8)
         cout<<"-O|OOO-O"<<endl;
         else if(t==9)
             cout<<"-O|OOOO-"<<endl;




    }

}
