















#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include<functional>
//using namespace std;

int main()
{
	std::string str ;
	std::cin>>str;

	std::transform(str.begin(), str.end(), str.begin(), std::ptr_fun(tolower));
    for(int i=0;i<str.size();i++)
   if(str[i]!='a'&&str[i]!='e'&&str[i]!='o'&&str[i]!='i'&&str[i]!='u'&&str[i]!='y')
         std::cout<<"."<<str[i]; 
       std::cout<<std::endl;
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
      int lower, upper;

      lower = getchar();
      upper = toupper(lower);
      printf("%d\n",upper);
      putchar(upper);

      return 0;
}*/
