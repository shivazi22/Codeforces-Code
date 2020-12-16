#include<bits/stdc++.h>
using namespace std;
string str,str1;
int l,l1,l2,l3,ll,i;
int main ()
{
    cin>>str;
    cin>>str1;

    for(i=0;i<str.size();i++)
    {
        if(str[i]=='|')
           {
        l1=i;
        break;
        }
    }
    l2=str.size()-1-l1;
    l3=str1.size();
    ll=abs(l1-l2);

    if(l3<ll)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(l3>ll)
    {
        if((l3-ll)%2)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
    }
    l=l1+l2+l3;
    l=l/2;

    if(l1<l)
    {
        for(i=0;i<l-l1;i++)
        {
            cout<<str1[i];
        }
    }
    for(i=0;i<=l1+l2;i++)
        cout<<str[i];

        if(l2<l)
    {
        int k=l3-1;
        for(i=0;i<l-l2;i++)
        {
            cout<<str1[k--];
        }
    }


        return 0;


}
