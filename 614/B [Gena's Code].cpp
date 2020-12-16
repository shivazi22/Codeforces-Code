#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt4=0;
    string res,res2;

    for(int i=1;i<=n;i++)
    {

        string str;
        cin>>str;
        if(str=="0")
        {
            cnt4=1;continue;
        }

       int l=str.size();
       int cnt2=0,p=0,cnt3=0,cnt5=0;

        for(int j=0;j<l;j++)
        {

            if(str[j]!='0'&&str[j]!='1')
               {
                res+=str;p=1; cnt3=1;break;
               }


            if(str[j]=='1') cnt2++;
        }
        if(cnt2>1&&p==0){res+=str;cnt5=1;}

        if(cnt4+cnt3+cnt5==0)
        {
              for(int j=0;j<l;j++)
              {
                  if(str[j]=='0') res2+='0';
              }
        }

    }

    if(cnt4==1) cout<<0<<endl;
    else
    {
        if(res=="") res+='1';
        cout<<res+res2<<endl;

    }

    return 0;
}
