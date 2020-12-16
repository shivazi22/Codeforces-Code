#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979
int main()
{
    float r,R,n;
    float PI=3.141592653;
    cin>>n>>R>>r;
    if(n==1.0)
    {
        if(r<=R)
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    else
        {
            float nn;
         nn=(PI/asin((float)r/(float)(R-r)));
        // cout<<nn<<endl;
        //long int nn1=(long int) nn;
        //cout<<nn<<" "<<n<<endl;
       if(nn>=n)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
        }

    return 0;
}
