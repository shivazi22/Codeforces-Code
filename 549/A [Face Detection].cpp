#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,1};
int dy[]={0,1,0,1};
int main()
{
    int n,m;
    string str[100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>str[i];
 int cnt=0;
   for(int k=0;k<n-1;k++)
    for(int i=0;i<m-1;i++)
    {
        int a=0;int c=0;int f=0;int e=0;
        for(int j=0;j<4;j++)
        {
            int x=dx[j]+k;
            int y=dy[j]+i;
            if(str[x][y]=='f')  f=1;
            if(str[x][y]=='c')  c=1;
            if(str[x][y]=='a')  a=1;
            if(str[x][y]=='e')  e=1;
        }
        if(c&&f&&a&&e) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

