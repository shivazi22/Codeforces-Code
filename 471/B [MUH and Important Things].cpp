#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;
vector<PII>shivazi;
int cnt=0,i,kk;
int main()
{
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
     int a[i];
    cin>>a[i];
    shivazi.push_back(make_pair(a[i],i));
    }

    sort(shivazi.begin(),shivazi.end());

   // for(i=0;i<n;i++)
   // cout<<shivazi[i].first<<" "<<shivazi[i].second+1<<endl;

 for(i=0;i<n;i++)
 if(shivazi[i].first==shivazi[i+1].first)
 cnt++;

    if(cnt<2)
        {
    cout<<"NO"<<endl;
    return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
            cout<<shivazi[i].second+1<<" ";
            cout<<endl;
       for(i=0;i<n;i++)
       {
           if(shivazi[i].first==shivazi[i+1].first)
           {
               swap(shivazi[i].second,shivazi[i+1].second);
               kk=i;
               break;
           }
       }

        for(i=0;i<n;i++)
        cout<<shivazi[i].second+1<<" ";
        cout<<endl;

           for(i=0;i<n;i++)
       {
           if(shivazi[i].first==shivazi[i+1].first&&i!=kk)
           {
               swap(shivazi[i].second,shivazi[i+1].second);
               break;
           }
       }
         for(i=0;i<n;i++)
        cout<<shivazi[i].second+1<<" ";

    }
return 0;
}
