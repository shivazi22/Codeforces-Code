#include<bits/stdc++.h>
using namespace std;
long int n,k,i,p;
int main()
{
    cin>>n>>k;
    if(k>n)
        {cout<<-1<<endl;return 0;}
    else if(k==n)
        {for(i=97;i<97+n;i++)
        printf("%c",i);
        return 0;
        }
        else
        {
          if(k==1)
                {cout<<-1<<endl;
            return 0;}
            cout<<"ab";
             p=n-k;
            k=k-2;

            for(i=1;i<=p;i++)
            {
                if(i&1) cout<<"a";
                else cout<<"b";
            }
            for(i=1;i<=k;i++)
            printf("%c",98+i);
            cout<<endl;

        }

    return 0;
}
