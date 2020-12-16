#include<bits/stdc++.h>
using namespace std;

int found1,found2,found3,i,l;
char st,ch;

string str1("qwertyuiopasdfghjkl;zxcvbnm,./");

string str4;


int main()
{
    scanf("%c",&st);
    scanf("%c",&ch);
    cin>>str4;
     l=str4.size();

    if(st=='R')
    {
    for(i=0;i<l;i++)
    {
        found1=str1.find(str4[i]);
       // found2=str2.find(str4[i]);
       // found3=str3.find(str4[i]);

       // if(found1==0)
           // cout<<str1[1];
        //if(found1>0)
            cout<<str1[found1-1];


        /*found2=str2.find(str4[i]);
         if(found2==0)
            cout<<str2[1];
       else if(found2>0)
            cout<<str2[found2-1];


     found3=str3.find(str4[i]);
         if(found3==0)
            cout<<str3[1];

        else if(found3>0)
            cout<<str3[found3-1];
            */



       // cout<<found1<<" "<<found2<<" "<<found3<<endl;


    }
    }
    else
    {
        for(i=0;i<l;i++)
    {
        found1=str1.find(str4[i]);
       // if(found1==l-1)
            //cout<<str1[l-2];
     //if(found1>0)
            cout<<str1[found1+1];


        /*found2=str2.find(str4[i]);
         if(found2==l-1)
            cout<<str2[l-2];
        else if(found2>0)
            cout<<str2[found2+1];


     found3=str3.find(str4[i]);
         if(found3==l-1)
            cout<<str3[i];
        else if(found3>0)
            cout<<str3[found3+1];


        //cout<<found1<<" "<<found2<<" "<<found3<<endl;

    }*/
    }
}
    return 0;
}
