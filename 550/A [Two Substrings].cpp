#include<bits/stdc++.h>
using namespace std;
vector<int>veg;
string st;
int cc=0,pos2,pos1,l,flag,flag1;

int main()
{

    cin>>st;
    l=st.size();
    for(int i=0;i<l-1;i++)
    {
        if(st[i]=='A' && st[i+1]=='B')
        veg.push_back(1);
        else if(st[i]=='B'&&st[i+1]=='A')
        veg.push_back(2);
        else veg.push_back(0);
    }
     l=veg.size();
    for(int i=0;i<l-1;i++)
    {
        if((veg[i]==1&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==1))
        {
            cc=1;
            pos1=i-2;
            pos2=i+3;
        }
    }
   // cout<<cc<<endl;
    if(cc)
    {
        for(int i=pos1;i>=0;i--)
        {
            if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        for(int i=pos2;i<l;i++)
        {
             if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else
    {
        flag=flag1=0;
        for(int i=0;i<l-1;i++)
        {
            if((veg[i]==0&&veg[i+1]==1)||(veg[i]==1&&veg[i+1]==0))
                flag=1;
            else if((veg[i]==0&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==0))
                flag1=2;
        }
        if(flag==1&&flag1==2) {cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='B'&&str[j+1]=='A')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
     for(int i=0;i<l-1;i++)
    {
        if(str[i]=='B'&&str[i+1]=='A')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='A'&&str[j]+1=='B')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
vector<int>veg1,veg2;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
            veg1.push_back(i);
            else if(str[i]=='B'&&str[i+1]=='A')
                veg2.push_back(i);
    }
    int l1=veg1.size();
    int l2=veg2.size();
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(abs(veg1[i]-veg2[j])>1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
*/
