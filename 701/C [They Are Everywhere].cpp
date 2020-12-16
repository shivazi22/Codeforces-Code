#include<bits/stdc++.h>
using namespace std;
	char str[100005];
	int cc[256];
int main()
{
	int n,res=n;
	scanf("%d%s",&n,str);
	int cnt=set<char>(str,str+n).size();
	int i=0;
	for(int j=0;j<n;j++)
	{
		cc[str[j]]++;
		if(cc[str[j]]==1) cnt--;
		while(cc[str[i]]>1)
		{
			cc[str[i]]--;
			i++;
		}
		if(!cnt) res=min(res,j-i+1);
	}
	printf("%d\n",res);
	return 0;
}

