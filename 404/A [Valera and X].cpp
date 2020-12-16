#include<bits/stdc++.h>
using namespace std;
string str[305];
int n,i,j;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    cin>>str[i];

    //string st1=str[0][0];
    //string  st2=str[1][0];

    if(str[0][0]!=str[1][0])
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

                if(i==j&&str[i][j]!=str[0][0])
                {

                    cout<<"NO";
                    return 0;
                }
              else  if((i+j)==(n-1)&&str[i][j]!=str[0][0])
                {
                    //cout<<"Shivazi";
                    cout<<"NO";
                    return 0;
                }
                else if(i!=j&&(i+j)!=n-1&&str[i][j]!=str[1][0])
                {
                    cout<<"NO";
                    return 0;
                }


        }

       }
       cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
       return 0;
       }
