#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int> >groups;
map<int,int>poky;
vector<int> snowmen;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int st;
        cin>>st;
        poky[st]++;
    }
    for(map<int ,int>::iterator it=poky.begin();it!=poky.end();it++)
    groups.push(make_pair(it->second,it->first));

    while(groups.size()>=3)
    {
        pair<int,int>p1=groups.top();groups.pop();
        pair<int,int>p2=groups.top();groups.pop();
        pair<int,int>p3=groups.top();groups.pop();
        snowmen.push_back(p1.second);p1.first--;
        snowmen.push_back(p2.second);p2.first--;
        snowmen.push_back(p3.second);p3.first--;
        if(p1.first>0) groups.push(p1);
        if(p2.first>0) groups.push(p2);
        if(p3.first>0) groups.push(p3);
      }
      cout<<snowmen.size()/3<<endl;
      for(int i=0;i<snowmen.size();i+=3)
      {
          sort(snowmen.begin()+i,snowmen.begin()+i+3);
          cout<<snowmen[i+2]<<" "<<snowmen[i+1]<<" "<<snowmen[i]<<endl;
      }


    return 0;
}