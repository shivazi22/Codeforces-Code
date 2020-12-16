#include<bits/stdc++.h>
using namespace std;
  int n,k,ans,i,j,cnt;
int main()
{

    cin>>n>>k;
    ans=(n*n)/2;
    if((n*n)%2) ans++;
    if(k>ans) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((i+j)%2==0&&cnt<k)
                {
                    cout<<"L";
                    cnt++;
                }
                else cout<<"S";
            }
            cout<<endl;
        }
    }
    return 0;
}



/*
string str,sub;


int k,st[200],cnt,i,j;
int main()
{
    cin>>k>>str;
    for(i=0;i<str.size();i++)
    st[str[i]]++;
    for(i='a';i<='z';i++)
       {
           if(st[i]!=0) cnt++;
       }
    if(cnt>=k) cout<<"YES"<<endl;
    else {
            cout<<"NO"<<endl;return 0;
    }

    memset(st,0,sizeof(st));
    st[str[0]]=1;
    for(i=0;i<str.size();i++)
    {
        if(k==1)
        {
            for(j=i;j<str.size();j++)
                sub+=str[j];
            cout<<sub<<endl;
            return 0;
        }
        while(st[str[i]]==1)
        {
            sub+=str[i];
            i++;
        }
        st[str[i]]=1;
        i--;
        cout<<sub<<endl;
        k--;
        sub.clear();
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
long long cnt1,cnt2,x,y,l,r,m;
int main()
{
    cin>>cnt1>>cnt2>>x>>y;
    l=1;r=2e9;
    while(l<r)
    {
        m=(l+r)/2;
        if(cnt1<=(m-m/x)&&cnt2<=(m-m/y)&&(cnt1+cnt2)<=(m-m/x/y))
           r=m;
        else l=m+1;
    }
    cout<<r<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
long n=5000005;
 long long a,b,st,ans,ans2,p,q,a2[5000005];
vector<long> result ;
vector<bool> input(n + 1, true);

void gener()
{

    long sqrtN = (long)sqrt(n);

    for (long i = 2; i <= sqrtN; i ++)
        {
        if (! input[i]) continue;
        for (long j = i * i; j <= n; j += i)
            input[j] = false;
        }
    a2[1]=0;
    result.push_back(2);
    a2[2]=1;
    for (long i = 3; i <= n; i += 2)
    {if (input[i])
    result.push_back(i);
    a2[i]=1;
    }
}


int main()
{

  gener();
//long l=result.size();

   for(a=2;(a<=5000005)&&(a2[a]!=1);a++)
   {
       ans=0;
       long l = (long)sqrt(a);
    for(long i=0;i<l;i++)
    {
        st=a;
        p=q=result[i];
        while(st/p)
        {
            ans+=(st/p);
            p=p*q;

        }
    }
    a2[a]=ans;
   }
   for(long i=1;i<=100;i++)
    cout<<a2[i]<<" ";
cin>>n;
    for(long i =1;i<=n;i++)
    {
        cin>>a>>b;
        cout<<a2[a]-a2[b]<<endl;
    }
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
