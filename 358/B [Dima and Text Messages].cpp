#include<bits/stdc++.h>
using namespace std;
string S,tp,Q;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        S+="<3";
        cin>>tp;
        S+=tp;
    }
    S+="<3";

    cin>>Q;
    int id=0;
    for(i=0;i<Q.size();i++)
    {
        if(S[id]==Q[i])
            id++;
    }
    if(id==S.size())
        cout<<"yes\n";
    else cout<<"no\n";

}
