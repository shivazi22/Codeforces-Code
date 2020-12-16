#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	map<int,int> cnt;
	for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			 cnt[a[i]]++;
			 }
		int m;
		cin>>m;
		vector<int> b(m);
		for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
		vector<int> c(m);
		for(int i=0;i<m;i++)
			scanf("%d",&c[i]);
			pair< pair<int,int>, int> ans(make_pair(-1,-1),-1);

			for(int i=0;i<m;i++)
			{
				int x=cnt[b[i]];
				int y=cnt[c[i]];
				ans=max(ans,make_pair(make_pair(x,y),i));
			}
			cout<<ans.second+1<<endl;
	return 0;
}
