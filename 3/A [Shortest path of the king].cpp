#include<bits/stdc++.h>
using namespace std;
char str[3],str1[3];
int a,b,a1,b1,test,x,y;
int main()
{
    scanf("%s",str);
    scanf("%s",str1);
    a=str[0]-96;
    b=str[1]-48;
    a1=str1[0]-96;
    b1=str1[1]-48;
    test=max(abs(a-a1),abs(b-b1));
    cout<<test<<endl;
    while(test--)
    {
        x=a,y=b;
        if(a>a1) a--;
        if(a<a1) a++;
        if(b>b1) b--;
        if(b<b1) b++;
        if(a<x&&b>y) cout<<"LU"<<endl;
        else if(a>x&&b<y) cout<<"RD"<<endl;
        else if(a<x&&b<y) cout<<"LD"<<endl;
        else if(a>x&&b>y) cout<<"RU"<<endl;
        else if(a==x&&b<y) cout<<"D"<<endl;
        else if(a==x&&b>y) cout<<"U"<<endl;
        else if(a>x&&b==y) cout<<"R"<<endl;
        else cout<<"L"<<endl;
    }
    return 0;
}
