#include<bits/stdc++.h>
using namespace std;
int m[10],w[10],s,u;
int main()
{
    cin>>m[1]>>m[2]>>m[3]>>m[4]>>m[5];
    cin>>w[1]>>w[2]>>w[3]>>w[4]>>w[5];
    cin>>s>>u;
    int xx=500,score=0,x=2;
    for(int i=1;i<=5;i++)
    {

        score+=max(((3*xx)/10),(250-m[i])*x-50*w[i]);
        xx+=500;
        x+=2;
    }
    score=score+s*100-u*50;
    cout<<score<<endl;

    return 0;
}
