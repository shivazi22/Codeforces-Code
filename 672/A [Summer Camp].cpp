#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,t;
	for(int i=1;i<=1000;i++)
    {

int a = i;
stringstream ss;
ss << a;

t = ss.str();str+=t;
    }
    int n;
    cin>>n;
    cout<<str[n-1]<<endl;
}
