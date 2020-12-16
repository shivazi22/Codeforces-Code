#include <iostream>

using namespace std;
int main()
{
    long n,A[100050],a1=0,a2=0;
    cin>>n;
    long nn=n;
    long i=1;
    while(n--)
        cin>>A[i++];
    for(i=1;i<=nn;i++)
    {
        if(A[i]==25)
            a1++;
        else if(A[i]==50)
        {
            a2++;
            if(a1>=1)

                a1--;
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else
        {
            if(a2>=1&&a1>=1)
                {
                    a2--;
                    a1--;}
            else if(a1>=3)
               a1-=3 ;
            else
             {
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    cout<<"YES"<<endl;
}


