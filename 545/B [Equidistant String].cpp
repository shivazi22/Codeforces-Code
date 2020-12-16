#include <bits/stdc++.h>
using namespace std;
string str1,str2,s;
int i,cnt,cnt2;
int main()
{
    cin>>str1>>str2;
    for(i=0;i<str1.size();i++)
    {
        if(str1[i]!=str2[i])
            cnt++;
    }
    //cout<<cnt<<endl;
    if(cnt%2)
    {cout<<"impossible"<<endl;return 0;}

    for(i=0;i<str1.size();i++)
    {
        if(str1[i]==str2[i]) s+=str1[i];
        else
        {
            if(cnt2<(cnt/2))
            {s+=str1[i]; cnt2++;}
            else s+=str2[i];}
    }
    cout<<s<<endl;
    return 0;
}
