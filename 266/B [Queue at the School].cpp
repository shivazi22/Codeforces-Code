#include<bits/stdc++.h>
using namespace std;

int n,m;
string str,l1,l2;

int main()
{
    cin>>n>>m;
    cin>>str;

         for(int i=1;i<=m;i++)
        for(int j=0;j<n;j++)
        {
         l1=str[j];
         l2=str[j+1];

         if(l1=="B" && l2=="G")
       {
       swap(str[j],str[j+1]);
       j++;
       }
        }

        cout<<str<<endl;

        return 0;

}

