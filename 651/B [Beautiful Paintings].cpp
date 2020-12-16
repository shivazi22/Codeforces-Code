#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   cin>>n;
   int veg[1010],veg2[1010];
   set<int>myset;

   int k=0;
   for(int i=0;i<n;i++)
   {
       cin>>veg[i];
       int size1=myset.size();
       myset.insert(veg[i]);
       if(size1==myset.size())
        veg2[k++]=veg[i];
   }
   int cnt=myset.size()-1;

   for(;;)
   {
       memset(veg,0,sizeof(veg));
       if(k==0) break;
       int m=k;
         k=0;
       myset.clear();
       for(int i=0;i<m;i++)
       {
           int size1=myset.size();
           myset.insert(veg2[i]);
           if(size1==myset.size())
            veg[k++]=veg2[i];
       }

       cnt+=myset.size()-1;

       for(int j=0;j<k;j++)
        veg2[j]=veg[j];
   }
    cout<<cnt<<endl;

    return 0;
}
