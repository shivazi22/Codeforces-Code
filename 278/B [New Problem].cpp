
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string stt;
int n,i,j,k=0,k1,a1[200],a,b,cc=0;
vector<string>sr;

int main ()
{

  cin>>n;
 for(i=1;i<=n;i++)
  {
      cin>>stt;
      for(int p=0;p<stt.size();p++)
        a1[stt[p]]++;

      for(k1=0;k1<stt.size()-1;k1++)
      sr.push_back(stt.substr (k1,2));

    }

     for(i=97;i<=122;i++)
      if(a1[i]==0)
       {
           printf("%c\n",i);
            return 0;
       }

       sort(sr.begin(),sr.end());


      for(a='a';a<='z';a++)
      {

        for(b='a';b<='z';b++)
       {
           for(i=0;i<sr.size();i++)
               if(a==sr[i][0]&&b==sr[i][1])
                break;

               if(sr.size()==i)
              {
                  printf("%c%c\n",a,b);
                 cc=1; break;
              }
       }
       if(cc==1)
        break;
}
return 0;
}
