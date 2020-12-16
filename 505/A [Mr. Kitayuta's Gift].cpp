#include<bits/stdc++.h>
using namespace std;
string str,st1,st2,str2,str3;
int l,i,j,cc,p;
int main()
{
    cin>>str;
    l=str.size();
    for(i=l-1;i>=0;i--)
    str2+=str[i];
    cc=0;
    for(i=0;i<l;i++)
    {
        if(str[i]!=str2[i])
        {
            st1=str[i];
            st2=str2[i];
            p=i;
            cc=1;
            break;
        }
    }
    if(cc==0)
    {
        if(l%2)
        {
            st1=str[l/2];
            str.insert((l/2+1),st1);
            cout<<str<<endl;
        }
        else
        {
            str.insert((l/2),"a");
            cout<<str<<endl;
        }
        }
        else
        {
            str.insert(p,st2);
            for(i=l;i>=0;i--)
            {
                str3+=str[i];
            }
            if(str==str3)
            {
                cout<<str<<endl;
                return 0;
            }
            else
            {
                str3.clear();
                str2.insert(p,st1);
                for(i=l;i>=0;i--)
                str3+=str2[i];
                if(str2==str3)
                    cout<<str2<<endl;
                else cout<<"NA"<<endl;

            }
        }
        return 0;
}
