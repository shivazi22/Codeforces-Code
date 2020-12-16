/*// map::begin/end
#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  // show content:
  for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
map<string,int> mymap,pp;
int maxi=-10000005,n,st[2000],i;

string str[2000],ans;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        scanf("%d",&st[i]);

        mymap[str[i]]+=st[i];
    }

    for(i=0;i<n;i++)
    {
        if(mymap[str[i]]>maxi)
            maxi=mymap[str[i]];
    }

      //cout<<maxi<<endl;
    for(i=0;i<n;i++)
    {

         pp[str[i]]+=st[i];
        if(pp[str[i]]>=maxi&&mymap[str[i]]==maxi)
        {
          cout<<str[i]<<endl;
          break;
        }
    }

return 0;
}
