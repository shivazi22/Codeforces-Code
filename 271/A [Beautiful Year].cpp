#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st;
    cin>>st;
    for(;;)
    {
        st++;
  stringstream ss;
  ss << st;
  string str = ss.str();
  if(str[0]==str[1]||str[0]==str[2]||str[0]==str[3])
    ;
  else if(str[1]==str[0]||str[1]==str[2]||str[1]==str[3])
    ;
  else if(str[2]==str[0]||str[2]==str[1]||str[2]==str[3])
    ;
  else if(str[3]==str[0]||str[3]==str[1]||str[3]==str[2])
    ;
   else {cout<<str<<endl;
            break;}


    }
}
