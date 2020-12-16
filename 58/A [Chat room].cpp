#include<bits/stdc++.h>
using namespace std;
char str[200];
int i,j,k,k1,k2,cc,l;

int main()
{
    cin>>str;
    int l=strlen(str);

    for(i=0;i<l;i++)
    {
        if(str[i]=='h')
        {
            for(j=i+1;j<l;j++)
            {
                if(str[j]=='e')
                {
                     for(k=j+1;k<l;k++)
                    if(str[k]=='l')
                    {
                        for(k1=k+1;k1<l;k1++)
                        {
                            if(str[k1]=='l')
                            {
                                for(k2=k1+1;k2<l;k2++)
                                {
                                    if(str[k2]=='o')
                                    {
                                        cout<<"YES"<<endl;
                                        cc=1;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }

                  break;
                }



            }
            break;
        }
    }
    if(cc==0)
        cout<<"NO"<<endl;
    return 0;
}
