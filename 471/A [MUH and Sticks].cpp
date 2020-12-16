#include<bits/stdc++.h>
using namespace std;
int i,a[10],j,k,t;
int main()
{
    for(i=1;i<=6;i++)
    cin>>a[i];
    sort(a+1,a+7);
    int cc=0;
    for(i=1;i<=3;i++)
    {
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+2]==a[i+3])
        {
            a[i]=a[i+1]=a[i+2]=a[i+3]=0;
            t=a[i];
            for(j=1;j<=6;j++)
            {
                if(a[j]!=0)
                {
                    int c=0;
                    for(k=j+1;k<=6;k++)
                    {
                        if(a[k]==a[j])
                           {
                        cout<<"Elephant"<<endl;
                        c=1;
                        }
                    }
                    if(c==0)
                    {
                        cout<<"Bear"<<endl;

                    }
                    break;

                }

            }
            cc=1;
            break;
        }
    }
    if(cc==0)
        cout<<"Alien"<<endl;
        return 0;


}
