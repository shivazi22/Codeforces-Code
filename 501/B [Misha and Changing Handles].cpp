#include<bits/stdc++.h>
using namespace std;
string str1[1005],str2[1005],st1,st2;
int n,i;
map<string,string>mymap;
map<string,string>::iterator it;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str1[i]>>str2[i];
    }
    for(i=0;i<n;i++)
    {
        if(str1[i]!="")
            st1=str1[i],st2=str2[i];
        for(int j=i+1;j<n;j++)
        {
             if(str1[i]!="")
            if(st2==str1[j])
            {
                st2=str2[j];
                str1[j].clear();
                str2[j].clear();

            }

        }
        mymap[st1]=st2;
    }
    cout<<mymap.size()<<endl;
    for(it=mymap.begin(); it!=mymap.end();it++)
        cout<< it->first     <<" "<<it->second<<endl;




    return 0;
}




  /*   // std::vector

int main ()
{
  std::vector<int> myvector;

  // set some values:
  for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9

  std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
/*
/*
int main()
{
    scanf("%s",s);
    int k=0;
    for(i=l-1;i>=0;i--)
        s2[k++]=s[i];
    }
    for(i=0;i<l;i++)
    {
        if(s[i]!=s2[i])
        {
            p=i-1;
        }
    }
  return 0;
}

*/
/*
// inserting into a string
#include <iostream>
#include <string>

int main ()
{
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  str.insert(6,str3,3,4);             // to be (not )the question
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  str.insert(10,"to be ");            // to be not (to be )that is the question
  str.insert(15,1,':');               // to be not to be(:) that is the question
  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  str.insert (it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';
  return 0;
}
*/



