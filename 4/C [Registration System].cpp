#include<bits/stdc++.h>
using namespace std;
map< string,int>mymap;
long n,nn;
string str[100005];
int main()
{

    cin>>n;
    nn=n;
    int i=0;

    while(n--)
    {
        cin>>str[i];
        mymap[str[i]]++;

        if(mymap[str[i]]==1)
        cout<<"OK"<<endl;
        else
        cout<<str[i]<<mymap[str[i]]-1<<endl;
        i++;
    }
    return 0;
    }
