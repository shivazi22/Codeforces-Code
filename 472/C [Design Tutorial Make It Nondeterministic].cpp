#include<bits/stdc++.h>
using namespace std;
typedef pair<string,string>PII;
vector<PII>shivazi;
long n,i,t[100005],tt;
string str1,str2;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str1>>str2;
        shivazi.push_back(make_pair(str1,str2));
    }
    for(i=0;i<n;i++)
    cin>>t[i];
    tt=t[0];

    string tem,mina,maxa;

    tem=min(shivazi[tt-1].first,shivazi[tt-1].second);
    //cout<<tem<<endl;

    for(i=1;i<n;i++)
    {
       mina= min(shivazi[t[i]-1].first,shivazi[t[i]-1].second);
      maxa= max(shivazi[t[i]-1].first,shivazi[t[i]-1].second);


        if(mina<tem&&maxa<tem)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(tem<mina&&tem<maxa)
            tem=mina;
        else tem=maxa;

        //tem=min(shivazi[t[i]-1].first,shivazi[t[i]-1].second);
        //cout<<tem<<endl;
    }
    cout<<"YES"<<endl;

    return 0;

}
