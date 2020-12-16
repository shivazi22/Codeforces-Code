#include<bits/stdc++.h>
using namespace std;
set<int>veg;
vector<int>veg2;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int value;
        cin>>value;
        veg.insert(value);
    }


   int value2=1;
    while(1)
    {
        if(veg.count(value2)) value2++;
        else
        {
            if(m-value2>=0)
            {
            veg2.push_back(value2);
            m=m-value2;
            value2++;
            }
            else break;

        }
    }
    int counter=veg2.size();
    cout<<counter<<endl;
    for(int i=0;i<counter;i++)
    cout<<veg2[i]<<" ";
    return 0;
}
