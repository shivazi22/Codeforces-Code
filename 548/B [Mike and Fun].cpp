#include<bits/stdc++.h>
using namespace std;
int n,m,q,maxi,i,j,I,J,res,a[505][505];
vector<int>maxima;

int main()
{
    cin>>n>>m>>q;
     // memset(a,0,sizeof(a));
    for(i=1;i<=n;i++)
    {
        int maxi=-1000;
        res=0;
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1) res++;
            else
            {
                maxi=max(maxi,res);
                res=0;
            }
                if(j==m)
            {
                maxi=max(maxi,res);
                res=0;
            }
        }
        maxima.push_back(maxi);
    }

    for(i=1;i<=q;i++)
    {
        cin>>I>>J;
        if(a[I][J]) a[I][J]=0;
        else a[I][J]=1;

        res=0;maxi=-1000;
        for(j=1;j<=m+1;j++)
        {
         if(a[I][j]) res++;
         else
         {
             maxi=max(maxi,res);
             res=0;
         }
             if(j==m)
            {
                maxi=max(maxi,res);
                res=0;
            }
        }
        maxima[I-1]= maxi;
        cout<<*max_element(maxima.begin(),maxima.end())<<endl;

    }
    return 0;
}
