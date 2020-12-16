#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;
long arry[10000],j,arry1[10000];

int main()
{
    long i=1,people,plane;
    cin>>people>>plane;
    long n=plane;


    while(plane--)
   {
       cin>>arry[i];
       arry1[i]=arry[i];
       i++;
  }

    long sum=0;
   for(i=1;i<=people;i++)
   {
    sort(arry+1,arry+n+1);
    sum+=arry[n];
    arry[n]--;
   }

    long sum1=0;
   for(i=1;i<=people;i++)
   {
    sort(arry1+1,arry1+n+1);
    j=1;
    while(arry1[j]==0)
        j++;
    sum1+=arry1[j];
    arry1[j]--;
   }
   cout<<sum<<" "<<sum1<<endl;





    return 0;
}
