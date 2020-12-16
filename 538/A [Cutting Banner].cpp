#include<bits/stdc++.h>
using namespace std;
vector<string>str1,str2;
string str;
int i,j;
int main()
{
    cin>>str;

        for(i=1;i<=str.size();i++)
        str1.push_back(str.substr(0,i));
        for(i=1;i<=str.size();i++)
        str2.push_back(str.substr(str.size()-i,i));
        for(i=0;i<str1.size();i++)
        {
            for(j=0;j<str1.size();j++)
            {
                if(str1[i]=="CODEFORCES"||str2[j]=="CODEFORCES")
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(str1[i]+str2[j]=="CODEFORCES")
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;
}
