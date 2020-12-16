#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int main()
{
    string A;
    string str[10];
     str[0]="jolteon";
     str[1]="flareon";
     str[2]="umbreon";
     str[3]="leafeon";
     str[4]="glaceon";
     str[5]="sylveon";

    cin>>n;
    cin>>A;
    if(n==6)
        {cout<<"espeon"<<endl;
        return 0;}
        else if(n==8) {cout<<"vaporeon"<<endl;}
        else
        {
            for(i=0;i<=5;i++)
            {
                int c=1;
                for(j=0;j<=3;j++)
                {
                    if(str[i][j]!=A[j]&&A[j]!='.')
                    {
                        c=0;
                        break;
                    }
                }
                if(c==1)
                {
                    cout<<str[i]<<endl;
                    break;
                }
            }
        }
        return 0;
}
