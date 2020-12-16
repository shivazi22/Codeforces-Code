#include<bits/stdc++.h>
using namespace std;
char input[1050];
set<char>myset;
int main()
{

cin.getline(input,1050);
for(int i=0;i<=1050;i++)
    if(input[i]>='a' && input[i]<='z')
    myset.insert(input[i]);

   cout<<myset.size()<<endl;
return 0;

}
