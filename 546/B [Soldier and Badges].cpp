#include<bits/stdc++.h>
using namespace std;
long a[40000],i,n,pre,cnt,res;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);

    res=a[1];
    for(i=2;i<=n;i++)
    {
        pre=a[i-1];
        if(a[i]==pre)
            {

        res=res+1;
        cnt+=(res-a[i]);
        }
        else

        {
            res=res+1;
            if((res-a[i])>0)
            cnt+=(res-a[i]);
            else res=a[i];

        }
    }
    cout<<cnt<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x>>x;
    string str1,str2,str3;
    cin>>str1>>str2;
    str3={str1.front(),str2.back(),str1.back(),str2.front()};
    cout<<(str3==">v<^"||str3=="<^>v"?"YES":"NO")<<endl;
    return 0;
}



/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,y,x;

	while(~scanf("%d%d%d%d",&n,&m,&x,&y))
	{
	int l=1,r=2e9;
	while(l<r)
	{
		int mid=l+(r-l)/2;
		if(n<=(mid-mid/x)&&m<=(mid-mid/y)&&m+n<=(mid-mid/(x*y)))
			r=mid;
		else
			l=mid+1;
	}
	printf("%d\n",r);
	}
	return 0;
}

#include <cstdio>
#include <iostream>
using namespace std;
long long ca,cb,x,y,v;

int main(){
	cin >> ca >> cb >> x >> y;
	v = (ca + cb) % (x * y - 1) + x * y * ((ca + cb) / (x * y - 1)) - ((ca + cb) % (x * y - 1) == 0);
	if(v - v / y < cb)
		v = cb % (y - 1) + (cb / (y - 1)) * y - (cb % (y - 1) == 0);
	if(v - v / x < ca)
		v = ca % (x - 1) + (ca / (x - 1)) * x - (ca % (x - 1) == 0);
	cout << v << endl;
	return 0;
}
/*
#include <iostream>

using namespace std;

typedef long long ll;

ll cur1, cur2, x, y;

int main()
{
    cin>>cur1>>cur2>>x>>y;
    ll l = 0;
    ll r = 2e15;
    while (l != r)
    {
        ll m = (l + r) >> 1LL;
        ll f = m - (m/x);
        ll s = m - (m/y);
        ll all = m - (m/x/y);
        if (f < cur1 || s < cur2 || all < cur1 + cur2)
            l = m + 1;
        else
            r = m;
    }
    cout<<l;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for (int i=0;i<n;i++)
		cin>>a[i];
	vector<pair<int,int> >res;

	for (int st=0;st<k;st++)
	{
		vector<int>::iterator it1= max_element(a.begin(), a.end());
		vector<int>::iterator it2= min_element(a.begin(), a.end());
		if (it1==it2)
			break;
		if (*it1==*it2+1)
			break;
		(*it1)-=1;
		(*it2)+=1;
		res.push_back(make_pair(it1-a.begin()+1,it2-a.begin()+1));
	}
	cout<<*max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end())<< ' ';
	cout<<res.size()<<'\n';
	for (int i=0;i<res.size();i++)
    cout<<res[i].first<<' '<<res[i].second<<'\n';
    return 0;
}*/
