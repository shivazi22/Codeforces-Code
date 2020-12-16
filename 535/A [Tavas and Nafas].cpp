#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    if(s==0) cout<<"zero"<<endl;
    if(s==1) cout<<"one"<<endl;
    else if (s==2) cout<<"two"<<endl;
    else if (s==3) cout<<"three"<<endl;
    else if (s==4) cout<<"four"<<endl;
    else if (s==5) cout<<"five"<<endl;
    else if (s==6) cout<<"six"<<endl;
    else if (s==7) cout<<"seven"<<endl;
    else if (s==8) cout<<"eight"<<endl;
    else if (s==9) cout<<"nine"<<endl;
    else if (s==10) cout<<"ten"<<endl;
    else if (s==11) cout<<"eleven"<<endl;
    else if (s==12) cout<<"twelve"<<endl;
    else if (s==13) cout<<"thirteen"<<endl;
    else if (s==14) cout<<"fourteen"<<endl;
    else if (s==15) cout<<"fifteen"<<endl;
    else if (s==16) cout<<"sixteen"<<endl;
    else if (s==17) cout<<"seventeen"<<endl;
    else if (s==18) cout<<"eighteen"<<endl;
    else if (s==19) cout<<"nineteen"<<endl;
    else if (s==20) cout<<"twenty"<<endl;

if(s>20)
{
    if((s/10)==2) cout<<"twenty";
    else if((s/10)==3) cout<<"thirty";
    else if((s/10)==4) cout<<"forty";
    else if((s/10)==5) cout<<"fifty";
    else if((s/10)==6) cout<<"sixty";
    else if((s/10)==7) cout<<"seventy";
    else if((s/10)==8) cout<<"eighty";
    else if((s/10)==9) cout<<"ninety";
   if((s%10)==1) cout<<"-one"<<endl;
   else if((s%10)==2) cout<<"-two"<<endl;
   else if((s%10)==3) cout<<"-three"<<endl;
   else if((s%10)==4) cout<<"-four"<<endl;
   else if((s%10)==5) cout<<"-five"<<endl;
   else if((s%10)==6) cout<<"-six"<<endl;
   else if((s%10)==7) cout<<"-seven"<<endl;
   else if((s%10)==8) cout<<"-eight"<<endl;
   else if((s%10)==9) cout<<"-nine"<<endl;


}

    return 0;
}
