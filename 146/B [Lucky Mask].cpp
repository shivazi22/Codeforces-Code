#include<bits/stdc++.h>
using namespace std;

int main()
{
long long st,st1,st2,b,k,ans,pos,ans2;
    cin>>st>>b;
    st=st+1;
    while(1)
    {
        st1=st;
        ans=0;k=0;ans2=1;
    while(st1!=0)
    {
        pos=st1%10;
        st1=st1/10;
        if(pos==4 || pos==7)
        {ans=(ans+pos*ans2);
        ans2=ans2*10;
         k++;
         }
    }

    if(ans==b)
        {
        cout<<st<<endl;
        //cout<<"uyuyu"<<endl;
        break;
        }
    else
        st=st+1;
        }
return 0;
}
