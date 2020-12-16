
 Conforces_Solutions: 723 The New Year Meeting Friends

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
  int maxi=max(a,max(b,c));
  int mina=1000;
  for(int i=1;i<=maxi;i++)
  {
      int val=abs(i-a)+abs(i-b)+abs(i-c);
      mina=min(mina,val);
  }
  cout<<mina<<endl;
    return 0;
}


 Conforces_Solutions: 705 Hulk


#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"i can learn anything"<<endl;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2) cout<<" I hate ";
        else cout<<" I love ";

        if(n-i==0)
            cout<<"it"<<endl;
        else cout<<"that";
    }
    return 0;
}



 Conforces_Solutions: 702 Powers of Two

#include<bits/stdc++.h>
using namespace std;
const int NX = 1e5 + 10 ;
int A[NX] ;
int N;
map<int,int>cnt;
int main()
{

    cin>>N;
    for(int i=1;i<=N;i++)
    cin>>A[i-1];

    long long res=0;
    for(int i=0;i<N;i++)
    {
        long long ans=1;
        for(int j=2;j<=31;j++)
        {
            ans=2*ans;
            long long temp=ans-A[i];
            res+=cnt[temp];
        }
        cnt[A[i]]++;
    }
    cout<<res<<endl;
    return 0;
}


 Conforces_Solutions: 701 They Are Everywhere

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



 Conforces_Solutions: 621 Wet Shark and Odd and Even

#include<bits/stdc++.h>
using namespace std;
vector<long long >veg;
long long sum=0,cnt=0;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int st;
        cin>>st;
        if(st%2==0)
            sum+=st;
        else {
                cnt++;
            veg.push_back(st);
        }
    }
    if(cnt%2)
    {
        sort(veg.begin(),veg.end());
        veg.erase(veg.begin());
    }
          for(auto i:veg)
            sum+=i;
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 630 Again Twenty Five!

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    cout<<25<<endl;
    }


 Conforces_Solutions: 26 Almost Prime

#include<bits/stdc++.h>
using namespace std;
long  N = 3500;
long  prime[3000];
bitset<3500>status;
void findprime()
{

    long  i, j, sqrtN;
    for( i = 2; i <= N ; i++ ) status[i] = false;
    sqrtN = long ( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == false )
        for( j = i * i; j <= N; j += i + i )
        status[j] = true;
    }
    int cnt=0;
    prime[0]=2;
    for( i = 3; i <= N; i += 2 )
    {
        if( status[i] == false)
        {
            cnt++;
            prime[cnt]=i;
        }
    }
}

bool findfactor(int n)
{
      int cc=0;
    for(int i=0;prime[i]<=sqrt(n); i++)
    {
        int flag=0;
        while(n%prime[i]==0)
        {
            flag=1;
            n/=prime[i];
        }
        if(flag)
        cc++;
    }
    if(n>1) cc++;
    if(cc==2) return true;
    else return false ;
}

int main()
{
    findprime();
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        if(findfactor(i))
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}



 Conforces_Solutions: 414 Mashmokh and Numbers

#include<bits/stdc++.h>
using namespace std;
long  long N = 1500000;
long  long prime[200000];
bitset<1500000>status;
void findprime()
{

    long long  i, j, sqrtN;
    for( i = 2; i <= N ; i++ ) status[i] = false;
    sqrtN = long ( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == false )
        for( j = i * i; j <= N; j += i + i )
        status[j] = true;
    }
    long long cnt=0;
    prime[0]=2;
    for( i = 3; i <= N; i += 2 )
    {
        if( status[i] == false)
        {
            cnt++;
            prime[cnt]=i;
        }
    }
}

int main()
{
    findprime();
    long long n,k;
    cin>>n>>k;
    if(k==0&&n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    if(((n/2)>k)||k==0||n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
       long long  p=n/2;
        p--;
        k=k-p;
        p*=2;
        cout<<k<<" "<<2*k<<" ";
        if(n>2)
        {
            int flag=0;
            for(int i=0;i<p;i++)
            {
                if(prime[i]==k||prime[i]==2*k)
                {
                    flag=1;
                     continue;
                }

                    else cout<<prime[i]<<" ";
            }
            if(flag)
            {cout<<prime[p]<<" ";
            p++;
            }
            if(n%2)
            cout<<prime[p]<<endl;
        }
    }
    return 0;
}



 Conforces_Solutions: 235 LCM Challenge

#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a,long long b,long long c)
{
    long long lc=__gcd(a,b);
    lc=a*b/lc;
    return lc*c/__gcd(lc,c);
}
int main()
{
    unsigned long long  n;
    cin>>n;
    if(n<3)
        cout<<n<<endl;
    else
    {
        if(n%2==0)
        {
            long long t=n-50;
            if(t<1) t=1;
            long long maxi=(n-1)*(n-2)*(n-3);
            for(int i=t;i<=n;i++)
            {
                for(int j=i+1;j<=n;j++)
                {
                    for(int k=j+1;k<=n;k++)
                    {
                         if((lcm(i,j,k))>maxi)
                         {maxi=lcm(i,j,k); //cout<<i<<"  "<<j<<" "<<k<<endl;}
                    }
                }
            }
        }
        cout<<maxi<<endl;
    }
        else cout<<(n*(n-1)*(n-2))<<endl;
    }
}


 Conforces_Solutions: 615 Multipliers

#include<bits/stdc++.h>
using namespace std;
int maxi=1000000007;
map<int,int>mp;
long long  bigmod(long long a,long long b,int maxi)
{
    if(b==0) return 1%maxi;
    long long  x=bigmod(a,b/2,maxi);
    x=(x*x)%maxi;
    if(b%2==1) x=(x*a)%maxi;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int val;
        cin>>val;
        mp[val]++;
    }
    long long ans=1,d=1;
    for(auto a:mp)
    {
       long long  cnt=a.second;
       long long cnt2=a.first;
       long long st=bigmod(cnt2,cnt*(cnt+1)/2,maxi);
       ans=bigmod(ans,(cnt+1),maxi)*bigmod(st,d,maxi)%maxi;
       d=(d*(cnt+1))%(maxi-1);
    }
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 678 Johny Likes Numbers

#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,p,q,ans,temp,k;
cin>>n>>k;
n=n/k;
cout<<(n+1)*k<<endl;
}


 Conforces_Solutions: 678 Joty and Chocolate

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b,p,q,ans,temp;
	cin>>n>>a>>b>>p>>q;
	ans=(n/a)*p+(n/b)*q;
	long long lcm=(a*b)/__gcd(a,b);
	temp=n/lcm;
	if(p<q)
	{
		ans=ans-temp*p;
	}
	else ans=ans-temp*q;
	cout<<ans<<endl;
}


 Conforces_Solutions: 679 Bear and Prime 100

#include<bits/stdc++.h>
using namespace std;
int d[20]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
int res[20],c;
int main()
{
    for(int i=0;i<19;i++)
    {
        printf("%d\n",d[i]);
        fflush(stdout);
        string str;
        cin>>str;
        if(str=="yes") res[i]=1;
        else res[i]=0;
    }
    if(res[15]||res[16]||res[17]||res[18])
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
    }
    for(int i=0;i<19;i++)
    {
        c+=res[i];
    }
    if(c<=1)
    {
        printf("prime\n");
        fflush(stdout);
        return 0;
    }
    else
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
    }
    return 0;
}


 Conforces_Solutions: 680 Bear and Finding Criminals

#include<bits/stdc++.h>
using namespace std;
int cnt=0,aa[500],n,a;

int main()
{
   scanf("%d%d",&n,&a);
   for(int i=1;i<=n;i++)
   {
     scanf("%d",&aa[i]);
     if(aa[i]) cnt++;
   }
   if(a>n) {printf("%d\n",0);fflush(stdout);}
   else
   {
       cnt=0;
       if(aa[a]) cnt++;
       int i,j;
   i=j=a;
   for(;;)
   {
       i--;
       j++;
       if(i<1&&j>n) break;
       if(i<1)
       {
           if(aa[j]) cnt++;
       }
       else if(j>n)
       {
           if(aa[i]) cnt++;
       }
       else {
        if(aa[i]==1&&aa[j]==1) cnt+=2;
       }

   }
   printf("%d\n",cnt);fflush(stdout);
   }
   //fflush(stdout);
}


 Conforces_Solutions: 680 Bear and Five Cards

#include<bits/stdc++.h>
using namespace std;
int cnt[200];

int main()
{
    int sum=0,a[20];
   for(int i=1;i<=5;i++)
   {
       scanf("%d",&a[i]);
       sum+=a[i];
       cnt[a[i]]++;
   }
   int sum2=0,sum3=0;
   for(int i=1;i<=102;i++)
   {
       if(cnt[i]==2)
        sum2=i*2;
       if(cnt[i]>=3)
        sum3=i*3;
   }
   sum-=max(sum2,sum3);
   printf("%d\n",sum);
   fflush(stdout);
}


 Conforces_Solutions: 669 Little Artem and Grasshopper

#include<bits/stdc++.h>
using namespace std;
int val[200000],n;
bool vis[200000];
string str;
bool solution(int pos)
{
    if(pos<0||pos>=n) return true;
    if(vis[pos])  return false;
    vis[pos]=true;
    if(str[pos]=='<') return solution(pos-val[pos]);
    else return solution(pos+val[pos]);

    }
int main()
{
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++)
    cin>>val[i];
    if(solution(0)) cout<<"FINITE"<<endl;
    else cout<<"INFINITE"<<endl;
    return 0;
}


/*#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;++i)
#define FOR(i, a, b) for(int i = a;i < b;++i)
#define pb push_back
#define X first
#define Y second
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
const int MAX = 101000;
char in[MAX];
int len[MAX];
bool vis[MAX];
int n;

bool solve (int pos)
 {
	if(pos < 0 || pos >= n) return true;
	if(vis[pos]) return false;
	vis[pos] = true;
	if(in[pos] == '<') return solve(pos - len[pos]);
	else return solve(pos + len[pos]);
}

int main()
{
	scanf("%d", &n);
	scanf("%s", in);
	REP(i, n) scanf("%d", &len[i]);
	if(solve(0)) printf("FINITE\n");
	else printf("INFINITE\n");
}
*/


 Conforces_Solutions: 667 Coat of Anticubism

#include<bits/stdc++.h>
using namespace std;
long long n,sum=0,maxi=0,maxi2;
long long a[200000];
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        maxi=max(maxi,a[i]);
    }
    maxi2=sum-maxi;
    cout<<maxi-maxi2+1<<endl;
return 0;}


 Conforces_Solutions: 670 Magic Powder - 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0; i<n; i++)
    cin>>a[i];
    vector<long long>b(n);
    for(int i=0; i<n; i++)
    cin>>b[i];
    long long mid,l=0,u=(long long) 2e9;
    while(l<u)
    {
        mid=(l+u+1)/2;
        long long t=0;
        for(int i=0; i<n; i++)
        {
            t+=max(0LL,a[i]*mid-b[i]);
            if(t>k) break;
        }
        if(t<=k) l=mid;
        else u=mid-1;
    }
    cout<<l<<endl;
    return 0;
}



Conforces_Solutions: 670 Magic Powder - 1


#include<bits/stdc++.h>
using namespace std;
int value[1004],a[1005];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int mina=2000;
    for(int j=1;j<=n;j++)
    {
        cin>>value[j];
        int t=value[j]/a[j];
        mina=min(mina,t);
    }
    int ans=0;
    ans+=mina;
    for(int i=1;i<=n;i++)
    {
        value[i]-=a[i]*mina;
    }
    mina =0;
    for(;;)
    {
        for(int i=1;i<=n;i++)
        if(value[i]<a[i])
        mina+=a[i]-value[i];

        if(mina>k) break;
        else {
            ans++;
            for(int i=1;i<=n;i++)
            {
                if(value[i]>a[i]) value[i]-=a[i];
                else value[i]=0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 643 Bear and Two Paths

#include<bits/stdc++.h>
using namespace std;
int cnt[5005];
int main()
{
    int n,k;
    cin>>n>>k;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(n>4&&k>=(n+1))
    {
        cout<<a<<" "<<c<<" ";
        cnt[a]=1;cnt[b]=1; cnt[c]=1;cnt[d]=1;
        for(int i=1;i<=n;i++)
            if(!cnt[i]) cout<<i<<" ";
        cout<<d<<" "<<b<<" ";
        cout<<endl;

         cout<<c<<" "<<a<<" ";

        for(int i=1;i<=n;i++)
            if(!cnt[i]) cout<<i<<" ";
        cout<<b<<" "<<d<<" ";
        cout<<endl;

    }
    else cout<<-1<<endl;
    return 0;
}


 Conforces_Solutions: 673 Bear and Colors

#include<bits/stdc++.h>
using namespace std;
int ans[5005],cnt[5005],a[5005];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        memset(cnt,0,sizeof(cnt));
        int best=a[i];
        ans[best]++;
        cnt[best]++;
        for(int j=i+1;j<=n;j++)
        {
            cnt[a[j]]++;
            if(cnt[best]<cnt[a[j]]) best=a[j];
            else if(cnt[best]==cnt[a[j]]&&a[j]<best)
                best=a[j];
            ans[best]++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
    return 0;
}


 Conforces_Solutions: 675 Money Transfers

#include <bits/stdc++.h>
using namespace std;
map<long long,int>d;
int main()
{
    int n;
    cin>>n;
    int mina=n-1;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        int st;
        cin>>st;
        sum+=st;
        d[sum]++;
        mina=min(mina,n-d[sum]);
    }
    cout<<mina<<endl;
    return 0;
}


 Conforces_Solutions: 676 Vasya and String

#include<bits/stdc++.h>
using namespace std;
int cnta[100005];
int n,k;
char str[100005];

int checking(char d)
{
    int initial=0;
    int ending=1;
    cnta[0]=0;
       for(int i=0;i<n;i++)
    {
        if(str[i]==d) cnta[i+1]=cnta[i]+1;
        else cnta[i+1]=cnta[i];
    }
    int res=0;
    while(ending<=n)
    {
        if(cnta[ending]-cnta[initial]<=k)
        {
            res=max(res,ending-initial);
            ending++;
        }
        else initial++;
    }
    return res;
}

int main()
{
    cin>>n>>k;
    scanf("%s",str);
    cout<<max(checking('a'),checking('b'))<<endl;
    return 0;
}


 Conforces_Solutions: 676 Pyramid of Glasses

#include<bits/stdc++.h>
using namespace std;
double dp[15][15];
int main()
{
    int n,t;
    cin>>n>>t;
    dp[1][1]=t;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(dp[i][j]+1e-12>=1) ans++;
            double r=max(dp[i][j]-1,( double)0);
            dp[i+1][j]+=r*0.5;
            dp[i+1][j+1]+=r*0.5;
        }
    }
    cout<<ans<<endl;

    return 0;
}


 Conforces_Solutions: 676 Pyramid of Glasses

#include<bits/stdc++.h>
using namespace std;
long double dp[15][15];
int main()
{
    int n,t;
    cin>>n>>t;
    dp[1][1]=t;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(dp[i][j]+1e-12>=1) ans++;
            long double r=max(dp[i][j]-1,(long double)0);
            dp[i+1][j]+=r*0.5;
            dp[i+1][j+1]+=r*0.5;
        }
    }
    cout<<ans<<endl;

    return 0;
}


 Conforces_Solutions: 574 Bear and Three Musketeers

#include<bits/stdc++.h>
using namespace std;
int veg[4005][4005];
int degree[4005];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        int val1,val2;
        cin>>val1>>val2;
        veg[val1][val2]=1;
        veg[val2][val1]=1;
        degree[val1]++;
        degree[val2]++;
    }
    int mina=20000,flag=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(veg[i][j])
            for(int k=j+1; k<=n; k++)
            {
                int sum=0;
                if(veg[i][k]&&veg[j][k])
                {

                                flag=1;
                                sum+=degree[i]+degree[j]+degree[k]-6;
                                if(sum<mina)
                                mina=sum;

                        }
                    }
                }
            }
    if(flag)
        cout<<mina<<endl;
    else  cout<<-1<<endl;

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

const int inf = 100000005;
const int nax = 5005;
int degree[nax];
bool t[nax][nax];

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; ++i)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        t[a][b] = t[b][a] = true;
        degree[a]++;
        degree[b]++;
    }
    int result = inf;
    for(int i = 1; i <= n; ++i)
        for(int j = i + 1; j <= n; ++j)
        {
            // we are O(n^2) times here
            if(t[i][j])
            {
                // we are O(m) times here
                for(int k = j + 1; k <= n; ++k)
                {
                    // O(m * n) times here
                    if(t[i][k] && t[j][k])
                        result = min(result, degree[i]+degree[j]+degree[k]);
                }
            }
        }
    if(result == inf) puts("-1");
    else printf("%d\n", result - 6);
    return 0;
}
*/


 Conforces_Solutions: 677 Vanya and Label

#include<bits/stdc++.h>
using namespace std;
#define mod long(1e9+7)
int cnt=0;
int mapping(char z)
{
    if(z>='0'&&z<='9') return z-'0';
    else if(z>='A'&&z<='Z') return z-'A'+10;
    else if(z>='a'&&z<='z') return z-'a'+36;
    else if(z=='-') return 62;
    else return 63;
}
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l;i++)
    cnt+=6-__builtin_popcount(mapping(str[i]));
    long long ans=1;

    for(int i=1;i<=cnt;i++)
    {
        ans=((ans%mod)*(3%mod))%mod;
    }
    cout<<ans<<endl;
}


 Conforces_Solutions: 677 Vanya and Food Processor

#include<bits/stdc++.h>
using namespace std;
long long n,k,h,sum,a[100005],val,i;
int main()
{
    cin>>n>>h>>k;
    for( i=1;i<=n;i++)
    cin>>a[i];
    long long cnt=0;
   long long sum=0,presum;
   for(int i=1;i<=n;i++)
    {
       presum=sum;
       sum+=a[i];
       if(sum<=h)
       {
           cnt+=sum/k;
           sum=sum%k;
       }
       if(sum>h&&presum>0)
       {
           cnt++;
           sum-=presum;
           cnt+=sum/k;
           sum=sum%k;
       }
    }
    if(sum%k) cnt++;
    cout<<cnt<<endl;

    return 0;
}


 Conforces_Solutions: 677 Vanya and Fence

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,cnt2=0,a[2000];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>m) cnt++;
        else  cnt2++;
    }
    cout<<cnt*2+cnt2<<endl;
    return 0;
}


 Conforces_Solutions: 574 Bear and Poker

#include<bits/stdc++.h>
using namespace std;
long long n,a[100005],i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];

        while(a[1]%2==0)
        a[1]/=2;
        while(a[1]%3==0)
        a[1]/=3;

    for( i=2;i<=n;i++)
    {
        while(a[i]%2==0)
            a[i]/=2;
        while(a[i]%3==0)
            a[i]/=3;
            if(a[1]!=a[i])
            {
                cout<<"No"<<endl;
                break;
            }
    }
    if(i==n+1) cout<<"Yes"<<endl;
    return 0;
}


 Conforces_Solutions: 574 Bear and Elections

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,a[2000],maxi,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(;;)
    {
         maxi=0;
        for(int i=1;i<=n;i++)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
                p=i;
            }
        }
        if(p==1)
        {
             maxi=0;
        for(int i=2;i<=n;i++)
        {
            if(maxi<a[i])
            {
                maxi=a[i];
                p=i;
            }
        }
        if(maxi==a[1])
            cnt++;
             break;
        }

        else{
            cnt++;
            a[p]--;
            a[1]++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 676 Nicholas and Permutation

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[400],p,q;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int maxi=0;
    int mina=1000;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            p=i;
        }
         if(a[i]<mina)
        {
            mina=a[i];
            q=i;
        }

    }
    if(p<q)
    {
     cout<<q-p+max((p-1),(n-q))<<endl;
    }
    else cout<<p-q+max(q-1,(n-p))<<endl;



    return 0;
}


 Conforces_Solutions: 617 Chocolate

#include<bits/stdc++.h>
using namespace std;
int a[200];
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    long long ans=0;
     i=1;
    while(1)
    {
        if(a[i]==1)
            {ans=1;break;}
        if(i==n) break;
        i++;
    }
    int cnt=0;
    for(int j=i+1;j<=n;j++)
    {
      if(a[j]==0) cnt++;
     else {ans*=(cnt+1);cnt=0;}
    }
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 617 Elephant

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0;
    cin>>n;
    ans+=n/5;
    if(n%5) ans++;
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 606 Magic Spheres

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  a,b,c,a1,b1,c1,sum=0;
   cin>>a>>b>>c>>a1>>b1>>c1;
   if(a-a1<0) sum+=(a-a1);
   else sum+=(a-a1)/2;

    if(b-b1<0) sum+=(b-b1);
   else sum+=(b-b1)/2;
    if(c-c1<0) sum+=(c-c1);
   else sum+=(c-c1)/2;

   if(sum<0)
     cout<<"No"<<endl;
   else cout<<"Yes"<<endl;

    return 0;
}


 Conforces_Solutions: 606 Magic Spheres

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  a,b,c,a1,b1,c1,sum=0;
   cin>>a>>b>>c>>a1>>b1>>c1;
   if(a+b+c<a1+b1+c1) {cout<<"No"<<endl;return 0;}
   if(a-a1<0) sum+=(a-a1);
   else sum+=(a-a1)/2;

    if(b-b1<0) sum+=(b-b1);
   else sum+=(b-b1)/2;
    if(c-c1<0) sum+=(c-c1);
   else sum+=(c-c1)/2;

   if(sum<0)
     cout<<"No"<<endl;
   else cout<<"Yes"<<endl;

    return 0;
}


 Conforces_Solutions: 629 Far Relative’s Problem

#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >veg1;
vector<pair<int,int> >veg2;

int main()
{
    int n,a,b,k1=0,k2=0,maxi=0;
   string str;
   cin>>n;
   for(int i=0;i<n;i++)
   {

       cin>>str>>a>>b;
       if(str=="M")
       veg1.push_back(make_pair(a,b));
       else veg2.push_back(make_pair(a,b));
    }
    k1=veg1.size();
    k2=veg2.size();

    for(int j=1;j<=366;j++)
    {
        int cnt1=0;
       int cnt2=0;
    for(int i=0;i<k1;i++)
    {
        if(j>=veg1[i].first&&j<=veg1[i].second)
            cnt1++;
    }
    for(int i=0;i<k2;i++)
    {
        if(j>=veg2[i].first&&j<=veg2[i].second)
            cnt2++;
    }
    int mina=min(cnt1,cnt2);
    maxi=max(mina,maxi);

    }
    cout<<maxi*2<<endl;
    return 0;
}


 Conforces_Solutions: 629 Far Relative’s Birthday Cake

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;

   cin>>n;
   string str[200];
   for(i=0;i<n;i++)
   {
       cin>>str[i];
   }
   int sum=0;
   for(i=0;i<n;i++)
   {
       int cnt=0;
       for(j=0;j<n;j++)
       {
           if(str[i][j]=='C')
            cnt++;
       }
       sum+=cnt*(cnt-1)/2;

   }
    for(j=0;j<n;j++)
   {
       int cnt=0;
       for(i=0;i<n;i++)
       {
           if(str[i][j]=='C')
            cnt++;
       }
       sum+=cnt*(cnt-1)/2;

   }
   cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 667 Pouring Rain

#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592653589
int main()
{
    double d,h,v,e,total=0.0,total2;
    scanf("%lf%lf%lf%lf",&d,&h,&v,&e);
    total=pi*d*d*e/4.0;
    if(total>v) cout<<"NO"<<endl;
    else {
            cout<<"YES"<<endl;
            total=pi*d*d*h/((v-total)*4.);
            printf("%.10f\n",total);
    }

    return 0;
}


 Conforces_Solutions: 675 Restoring Painting

#include<bits/stdc++.h>
using namespace std;
long long n,a,b,c,d,cnt=0,sum;
int main()
{
 cin>>n>>a>>b>>c>>d;
 for(int i=1;i<=n;i++)
 {
     sum=a+b+i;
     int x=sum-(a+c);
     int y=sum-(c+d);
     int z=sum-(b+d);
     if((x>=1&&x<=n)&&(y>=1&&y<=n)&&(z>=1&&z<=n))
     {
        cnt++;
     }
 }
 cout<<cnt*n<<endl;

    return 0;
}


 Conforces_Solutions: 675 Infinite Sequence

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
cin>>a>>b>>c;
if(c==0&&a==b)
cout<<"YES"<<endl;
else if(c==0&&a!=b)
    cout<<"NO"<<endl;
else if((b-a)%c==0)
{
    int t=((b-a)/c)+1;
    if(t>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 673 Problems for Round

#include<bits/stdc++.h>
using namespace std;
vector<int>veg1,veg2;
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    if(m==0) {cout<<n-1<<endl;return 0;}
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        veg1.push_back(min(a,b));
        veg2.push_back(max(a,b));
    }
    sort(veg1.begin(),veg1.end());
    sort(veg2.begin(),veg2.end());
    int l=veg1.size()-1;
    a=veg1[l];
    b=veg2[0];
    if(a<b)
    {
        cout<<b-a<<endl;
    }
    else cout<<0<<endl;

   return 0;
}


 Conforces_Solutions: 673 Bear and Game

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp=0;
    int a[100];
    int n,ans,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]-temp<=15) ans=a[i];
        else {ans=temp+15;break;}
        temp=a[i];
    }
    if(i==n+1)
    {
           if(90-temp<=15) ans=90;
        else ans=temp+15;
    }
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 664 Rebus

#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int ans[140];
int flag=1;
int main()
{
    string s="";
    while(s!="=")
    {
        cin>>s;
        if(s=="+") flag=1;
        else if(s=="-") flag=-1;
        else if(s=="?") a.push_back(flag);
    }
    int n,sum=0;
    cin>>n;
    int m=a.size();
    for(int i=0;i<m;i++)
    {
        ans[i]=1;
        sum+=ans[i]*a[i];
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]==1)
        while(ans[i]<n&&sum<n)
        ans[i]++,sum++;
        if(a[i]==-1)
        while(ans[i]<n&&sum>n)
        ans[i]++,sum--;
    }
    if(sum!=n) {cout<<"Impossible"<<endl;return 0;}
    else
    {
        cout<<"Possible"<<endl;
        cout<<ans[0]<<" ";
        for(int i=1;i<m;i++)
        {
            if(a[i]==-1)
            cout<<"- ";
            else cout<<"+ ";
            cout<<ans[i]<<" ";
        }
        cout<<"= "<<n;
    }
    return 0;
}

















 Conforces_Solutions: 664 Rebus

#include<bits/stdc++.h>
using namespace std;

string str;
int main()
{
    getline(cin,str);
    int l=str.size();
    int i=l-1,n=0,p=1;
    while(str[i]!=' ')
    {
        n=(str[i]-48)*p+n;
        p=p*10;
        i--;
    }
    p=0;
    int q=0;
    for(int i=2;i<l;i+=4)
    {
        if(str[i]=='-') q++;
        else if(str[i]=='+') p++;
    }
    p++;
    int s=(n+q)/p;
    int test=s;
    int remin=(n+q)%p;
    if(remin>0) test++;
    if(s>0&&s<=n&&test<=n)
    {
        cout<<"Possible"<<endl;
        if(remin==0) cout<<s;
        else {
            cout<<s+1;
            remin--;
        }
        for(i=1;i<l;i++)
        {
            if(str[i]=='+'&&remin!=0)
           {cout<<"+ "<<s+1<<" ";remin--; i+=3;continue;}
           else if(str[i]=='+'&&remin==0)
           {cout<<"+ "<<s<<" ";i+=3;continue;}
            else if(str[i]=='-') {cout<<"- 1 "; i+=3;continue;}
            else cout<<str[i];
        }
        return 0;
    }
    if(q>0)
    {
    s=(p-n)/q;
    test=s;
    remin=(p-n)%q;
    if(remin>0) test++;
    if(s>0&&s<=n&&test<=n)
    {
        cout<<"Possible"<<endl;
       cout<<1;
        for(i=1;i<l;i++)
        {
            if(str[i]=='-'&&remin!=0)
           {cout<<"- "<<s+1<<" ";remin--; i+=3;continue;}
           else if(str[i]=='-'&&remin==0)
           {cout<<"- "<<s<<" ";i+=3;continue;}
            else if(str[i]=='+') {cout<<"+ 1 "; i+=3;continue;}
            else cout<<str[i];
        }
        return 0;
    }
    }
    cout<<"Impossible"<<endl;

    return 0;
}


 Conforces_Solutions: 671 Recycling Bottles

#include<bits/stdc++.h>
using namespace std;
double dista[100005],distb[100005],distr[100005];
int main()
{
    double ax,ay,bx,by,rx,ry,sum=0.0,aaa,bbb,aa,bb,x,y,t;
    unsigned n,a,b,i;
    scanf("%lf%lf%lf%lf%lf%lf%u",&ax,&ay,&bx,&by,&rx,&ry,&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf",&x,&y);
        distr[i]=hypot(x-rx,y-ry);
        dista[i]=hypot(x-ax,y-ay);
        distb[i]=hypot(x-bx,y-by);
        sum+=distr[i];
    }
    aa=dista[a=0]-distr[0];
    bb=distb[b=0]-distr[0];

    for(i=0;i<n;i++)
    {
        if(aa>(t=dista[i]-distr[i]))
        {
            aa=t;a=i;
        }
        if(bb>(t=distb[i]-distr[i]))
        {
            bb=t;b=i;
        }
    }
    aaa=bbb=0.0;

	for(int i=0;i<n;i++)
	{
		if(i!=a&&aaa>(t=distb[i]-distr[i])) aaa=t;
		if(i!=b&&bbb>(t=dista[i]-distr[i])) bbb=t;
	}
	if((aa+=aaa)>(bb+=bbb))aa=bb;
	printf("%.12f\n",sum*2.0+aa);

    return 0;
}




 Conforces_Solutions: 672 Different is Good

#include <bits/stdc++.h>
using namespace std;
int st[200];
int main()
{
    int l;
    string str;
    cin>>l;
    cin>>str;
    for(int i=0;i<l;i++){
        st[str[i]]++;
    }
    int sum=0;
    for(int i=97;i<=97+26;i++)
    {
        if(st[i]>1) sum+=(st[i]-1);
    }
    if(l>26) cout<<-1<<endl;
    else cout<<sum<<endl;
}


 Conforces_Solutions: 672 Summer Camp

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


 Conforces_Solutions: 618 Slime Combining

#include<bits/stdc++.h>
using namespace std;
set<int>myset;
int main()
{
    int n;
    cin>>n;
    int cnt=1;
    while(n!=0)
    {
        if(n%2) myset.insert(cnt);
        n=n/2;
        cnt++;
    }
    for(auto it=myset.crbegin();it!=myset.crend();it++)
        cout<<*it<<" ";

return 0;
}


 Conforces_Solutions: 651 Beautiful Paintings

#include<bits/stdc++.h>
using namespace std;
multiset<int>st;
set<int>s;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    int num=0;
    while(!st.empty())
    {
     s.clear();
    for(auto it=st.begin();it!=st.end();it++)
    {
     if(s.find(*it)==s.end()) {s.insert(*it);num++;}
    }
    for(auto it=s.begin();it!=s.end();it++)
        st.erase(st.find(*(it)));
    num--;
    }
    cout<<num<<endl;
    return 0;
}


 Conforces_Solutions: 651 Beautiful Paintings

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   cin>>n;
   int veg[1010],veg2[1010];
   set<int>myset;

   int k=0;
   for(int i=0;i<n;i++)
   {
       cin>>veg[i];
       int size1=myset.size();
       myset.insert(veg[i]);
       if(size1==myset.size())
        veg2[k++]=veg[i];
   }
   int cnt=myset.size()-1;

   for(;;)
   {
       memset(veg,0,sizeof(veg));
       if(k==0) break;
       int m=k;
         k=0;
       myset.clear();
       for(int i=0;i<m;i++)
       {
           int size1=myset.size();
           myset.insert(veg2[i]);
           if(size1==myset.size())
            veg[k++]=veg2[i];
       }

       cnt+=myset.size()-1;

       for(int j=0;j<k;j++)
        veg2[j]=veg[j];
   }
    cout<<cnt<<endl;

    return 0;
}


 Conforces_Solutions: 651 Joysticks

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,cnt=0;
 cin>>a>>b;
 for(;;)
 {
     if(a>b) {a-=2;b++;}
     else {b-=2;a++;}
     if(a<0||b<0) break;
     else if(a==0||b==0)
     {
         cnt++;break;
     }
     else cnt++;
 }
 cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 670 Cinema

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


 Conforces_Solutions: 670 Game of Robots

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,a[100050];
	long long k;
 cin>>n>>k;
  for(int i=1;i<=n;i++)
	cin>>a[i];
	if(n==1) {cout<<a[1]<<endl;return 0;}
 long long val=sqrt(1.+4.*(double)k*2.)-1.;
 //cout<<val<<endl;
 long long val2=val/2;
 val=val2*(val2+1)/2;
 n=k-val;
 if(n==0) cout<<a[val2];
 else
 cout<<a[n]<<endl;


}


 Conforces_Solutions: 588 Duff in Love

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=1;
    cin>>n;
    long long x=n;
    long long value=sqrt(n);
    for(int i=2;i<=value;i++)
    {
        if(x%i==0)
        {
            ans*=i;
            while(x%i==0)
            x/=i;
            value=sqrt(x);
        }
    }
    if(x>1) ans*=x;
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 614 Gena's Code

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt4=0;
    string res,res2;

    for(int i=1;i<=n;i++)
    {

        string str;
        cin>>str;
        if(str=="0")
        {
            cnt4=1;continue;
        }

       int l=str.size();
       int cnt2=0,p=0,cnt3=0,cnt5=0;

        for(int j=0;j<l;j++)
        {

            if(str[j]!='0'&&str[j]!='1')
               {
                res+=str;p=1; cnt3=1;break;
               }


            if(str[j]=='1') cnt2++;
        }
        if(cnt2>1&&p==0){res+=str;cnt5=1;}

        if(cnt4+cnt3+cnt5==0)
        {
              for(int j=0;j<l;j++)
              {
                  if(str[j]=='0') res2+='0';
              }
        }

    }

    if(cnt4==1) cout<<0<<endl;
    else
    {
        if(res=="") res+='1';
        cout<<res+res2<<endl;

    }

    return 0;
}


 Conforces_Solutions: 614 LinkCut Tree

#include<bits/stdc++.h>
using namespace std;
#define mx 1000000000000000000
int main()
{
    unsigned long long l,r,k,cc=0;
    cin>>l>>r>>k;

        long long ans=1;
        for(;;)
        {
            if(ans>=l&&ans<=r) {cout<<ans<<" ";cc=1;}
             if (ans<=(r/k))  ans=k*ans;
            else break;
        }
    if(cc==0)
    cout<<-1<<endl;
    return 0;
}


 Conforces_Solutions: 659 Tanya and Toys

#include<bits/stdc++.h>
using namespace std;
set<int>veg;
vector<int>veg2;

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int value;
        cin>>value;
        veg.insert(value);
    }


   int value2=1;
    while(1)
    {
        if(veg.count(value2)) value2++;
        else
        {
            if(m-value2>=0)
            {
            veg2.push_back(value2);
            m=m-value2;
            value2++;
            }
            else break;

        }
    }
    int counter=veg2.size();
    cout<<counter<<endl;
    for(int i=0;i<counter;i++)
    cout<<veg2[i]<<" ";
    return 0;
}


 Conforces_Solutions: 621 Wet Shark and Bishops

#include<bits/stdc++.h>
using namespace std;
long sum,st[2050],st2[2050];
int main()
{
    long n;
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        int x1,y1;
        cin>>x1>>y1;
        st[x1+y1]++;
        if(x1-y1<1) st2[abs(x1-y1)+1000]++;
        else st2[x1-y1]++;
    }
    for(int i=1;i<=2000;i++)
    sum+=((st[i]*st[i]-st[i])/2)+((st2[i]*st2[i]-st2[i])/2);
    cout<<sum<<endl;

return 0;
}


 Conforces_Solutions: 572 Arrays

#include<bits/stdc++.h>
using namespace std;
long cnt,a[200000],b[200000];
const int str3[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    long na,nb,m,k;
    cin>>na>>nb>>m>>k;
    for(long i=1;i<=na;i++)
        cin>>a[i];
    for(long i=1;i<=nb;i++)
        cin>>b[i];
    for(long i=nb;i>=1;i--)
        if(a[m]<b[i]) cnt++;
    if(cnt>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        return 0;
}


 Conforces_Solutions: 599 Patrick and Shopping

#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
const int str3[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    long d1,d2,d3,way1,way2,way3,way4;
   cin>>d1>>d2>>d3;
  way1= (d1+d2+d3);
  way2=2*(d2+d1);
  way3=2*(d1+d3);
  way4=2*(d3+d2);
  cout<<min(way1,(min(way2,min(way3,way4))))<<endl;
    return 0;
}


 Conforces_Solutions: 611 New Year and Days

#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
const int str3[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int st;
    string str1,str2;
    cin>>st;
    cin>>str1>>str2;
    if(str2=="month")
    {
      int cnt=0;
      for(int i=0;i<12;i++)
        if(st<=str3[i]) cnt++;
      cout<<cnt<<endl;
    }
    else
    {
        if(st==5||st==6) cout<<53<<endl;
        else cout<<52<<endl;
    }
    return 0;
}


 Conforces_Solutions: 611 New Year and Days

#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
int main()
{
    int st;
    string str1,str2;
    cin>>st;
    cin>>str1>>str2;
    if(str2=="month")
    {
        if(st>=1&&st<=29)
            cout<<12<<endl;
        else if(st==30) cout<<11<<endl;
        else cout<<7<<endl;
    }
    else
    {
        if(st==5||st==6) cout<<53<<endl;
        else cout<<52<<endl;
    }
    return 0;
}


 Conforces_Solutions: 560 Currency System in Geraldion

#include<bits/stdc++.h>
using namespace std;
long a[2500],n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    if(a[1]==1) cout<<-1<<endl;
    else cout <<1<<endl;

    return 0;
}


 Conforces_Solutions: 551 GukiZ and Contest

#include<bits/stdc++.h>
using namespace std;
int st[2500],n,cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>st[i];
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=n;j++)
        if(st[i]<st[j]) cnt++;
        cout<<cnt+1<<" ";
    }

    return 0;
}


 Conforces_Solutions: 551 GukiZ and Contest

#include<bits/stdc++.h>
using namespace std;
int st[2500],st2[2500],st3[2500],n,cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>st[i];
        st2[i]=st[i];
    }
    sort(st2+1,st2+n+1);
    cnt=1;
    st3[st2[n]]=1;
    for(int i=n-1;i>=1;i--)
    {
        cnt++;
        if(st2[i]<st2[i+1])
        st3[st2[i]]=cnt;
    }
    for(int i=1;i<=n;i++)
        cout<<st3[st[i]]<<" ";

    return 0;
}


 Conforces_Solutions: 577 Multiplication Table

#include<bits/stdc++.h>
using namespace std;
int st1[100],st2[100],n;
int main()
{
    long n,x,x2,cnt=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    if(x%i==0&&(x/i)<=n) cnt++;
    cout<<cnt<<endl;

    return 0;
}


 Conforces_Solutions: 577 Multiplication Table

#include<bits/stdc++.h>
using namespace std;
int st1[100],st2[100],n;
int main()
{
    long n,x,x2;
    cin>>n>>x;
    x2=sqrt(x);


        int cnt=0;
        for(int i=1;i<=x2;i++)
        {
            if(x%i==0&&i<=n&&(x/i)<=n)
            {
                if(i==(x/i))
                    cnt++;
                else cnt+=2;

            }
        }
        cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 583 Asphalting Roads

#include<bits/stdc++.h>
using namespace std;
int st1[100],st2[100],n;
int main()
{

   int n;
   cin>>n;
   for(int i=1;i<=n*n;i++)
   {
       int a,b;
     cin>>a>>b;
     if(st1[a]==false&&st2[b]==false)
     {
         st1[a]=1;st2[b]=1;
          cout<<i<<" ";

     }
   }
    return 0;
}


 Conforces_Solutions: 583 Asphalting Roads

#include<bits/stdc++.h>
using namespace std;
int st[100][100],n;
int main()
{

   int n;
   cin>>n;
   for(int i=1;i<=n*n;i++)
   {
       int a,b;
     cin>>a>>b;
     if(st[a][b]==0)
     {
         for(int k=1;k<=n;k++)
         st[a][k]=1;
         for(int k=1;k<=n;k++)
            st[k][b]=1;
         cout<<i<<" ";

     }
   }
    return 0;
}


 Conforces_Solutions: 570 Elections

#include<bits/stdc++.h>
using namespace std;
int n,m,vot;
long a[200],res[200];
int main()
{

 cin>>n>>m;
 for(int i=1;i<=m;i++)
 {
     long maxi=-1;
     for(int j=1;j<=n;j++)
     {
         cin>>a[j];
         if(a[j]>maxi)
         {vot=j;maxi=a[j];
         }
     }
     res[vot]++;
 }
long maxi=*max_element(res,res+110);
 for(int i=1;i<=100;i++)
 {
     if(maxi==res[i])
     {
         cout<<i<<endl;
         break;
     }
 }
    return 0;
}


 Conforces_Solutions: 588 Duff and Meat

#include<bits/stdc++.h>
using namespace std;
long st,sum,best=10000, n;
int main()
{
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        long a,b;
        cin>>a>>b;
        best=min(best,b);
        sum+=(a*best);
    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 588 Duff and Meat

#include<bits/stdc++.h>
using namespace std;
long long st,sum, n;
int main()
{
    cin>>n;
    for(long i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(i==1)
        {
            sum+=(a*b);
            st=b;
        }
        else
        {
            if(st<=b) sum+=(a*st);
            else {st=b;sum+=(a*b);}
        }
    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 580 Kefa and First Steps

#include<bits/stdc++.h>
using namespace std;
vector<long long>veg;

int main()
{
    long n;
    cin>>n;
    for(long int i=1;i<=n;i++)
       {
           long long value;
           cin>>value;
            veg.push_back(value);
       }

        long long  cnt=1;
       long long maxi=0;
    for(long int i=0;i<n-1;i++)
    {
        if(veg[i]<=veg[i+1])
            cnt++;
            else cnt=1;

          maxi= max(cnt,maxi);
        }
        if(n==1) cout<<1<<endl;
        else
    cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 611 New Year and Old Property

#include<bits/stdc++.h>
using namespace std;
unsigned long long  aa,bb,a[200000],st,p,k,i,k2,cnt,p1,p2,cc,dd;
int main()
{
    cin>>aa>>bb;
    a[1]=2;
    k2=k=2,p=0;
    st=1;
    cnt=1;
    while(1)
    {
        for(i=st; i<=st+p; i++)
        {
            a[k++]=a[i]*2+1;
        }
        a[k++]=a[i-1]*2+2;
        //st=st*2+1;
        st=k-k2;
        k2++;
        p++;


        if(a[k-1]>1000000000000000009)
            break;
    }


//for(i=1;i<=20;i++)
    // cout<<a[i]<<" ";

    //cout<<k<<endl;

    cc=min(aa,bb);
    dd=max(aa,bb);
    p1=p2=0;
    for(i=1; i<=k; i++)
    {
        if(a[i]>=cc)
        {
            p1=i;
            break;
        }
    }
    //cout<<p1<<endl;

    for(i=1; i<=k; i++)
        if(a[i]==dd)
        {

            p2=i;
            break;
        }
        else if(a[i]>dd)
        {p2=i-1;break;}



    //cout<<p2<<endl;

    if(p1==0&&p2==0)
        cout<<0<<endl;
    else cout<<p2-p1+1<<endl;

    return 0;
}


 Conforces_Solutions: 610 Vika and Squares

#include<bits/stdc++.h>
using namespace std;
long long sum,maxi=0,mina=1000000099,i,n,a[200005],cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        {cin>>a[i];
        if(a[i]<mina) mina=a[i];}
        sum=mina*n;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>mina)
                cnt++;
                else cnt=0;
            maxi=max(maxi,cnt);
        }
         for(int i=1;i<=n;i++)
        {
            if(a[i]>mina)
                cnt++;
                else
                {
                    for(int j=n;j>=1;j--)
                    {
                        if(a[i]>mina)
                     cnt++;
                    }
                    break;
                }
            }
        maxi=max(maxi,cnt);
        cout<<sum+maxi<<endl;
    return 0;
}


 Conforces_Solutions: 610 Pasha and Stick

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    if(n&1) cout<<0<<endl;
    else {
        if(n/2&1) cout<<n/4<<endl;
        else cout<<n/4-1<<endl;
    }
    return 0;
}


 Conforces_Solutions: 579 Raising Bacteria

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,sum=0;
    cin>>a;
while(a!=0)
    {
     if(a%2)
     {sum++;
     a--;}
     else {a=a/2;}

     }
     cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 608 Hamming Distance Sum

#include<bits/stdc++.h>
using namespace std;
long long sum1[200005],sum2[200005],l1,l2,i,t;
string str1,str2;
int main()
{

    cin>>str1>>str2;
    l1=str1.size();
    l2=str2.size();

    for(i=1; i<=l2; i++)
    {
        if(str2[i-1]=='0')
        {
            sum1[i]=sum1[i-1]+1;
            sum2[i]=sum2[i-1];
        }
        else
        {
            sum1[i]=sum1[i-1];
            sum2[i]=sum2[i-1]+1;
        }
    }

    long long sum=0;
    t=l2-l1+1;

    for(i=1; i<=l1; i++)
    {
        if(str1[i-1]=='1')
            sum+=(sum1[t]-sum1[i-1]);
        else
            sum+=(sum2[t]-sum2[i-1]);
        t++;
    }
    cout<<sum<<endl;

    return 0;
}


 Conforces_Solutions: 608 Saitama Destroys Hotel

#include<bits/stdc++.h>
using namespace std;
vector<pair<long,long> >veg;
long f,t,sum,n,s,l;
int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>f>>t;
       veg.push_back(make_pair(f,t));
    }
    sort(veg.begin(),veg.end());
    l=veg.size();
    sum=0;
    for(int i=l-1;i>=0;i--)
    {
        sum+=(s-veg[i].first);
        s=veg[i].first;
        if(sum<veg[i].second)
            sum=veg[i].second;
    }
    sum+=veg[0].first;
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 584 Olesya and Rodion

#include<bits/stdc++.h>
using namespace std;
int main()
{

int mn,t;
    cin>>mn>>t;
    if(mn==1&&t==10) {cout<<-1<<endl;return 0;}
    else
    {
        if(t==10)
        {
            cout<<1;
            for(int i=1;i<mn;i++)
                cout<<0;
        }
        else  for(int i=1;i<=mn;i++) cout<<t;

    }
    return 0;
}


 Conforces_Solutions: 602 Approximating a Constant Range

#include<bits/stdc++.h>
using namespace std;
long a[100005],b[100005],n,st,maxi,mina2,maxi2;
int main()
{
    cin>>n;
    cin>>a[1];
    st=a[1];b[1]=1;
    long k=2;
    for(long i=2;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=st)
        {
            b[k++]=i;
            st=a[i];
        }
    }
    a[n+1]=100050;
    b[k]=n+1;




    st=b[1];maxi=1,mina2=maxi2=a[b[1]];
    for(int i=2;i<=k;i++)
    {
        if((abs(a[b[i]]-mina2)<2)&&(abs(a[b[i]]-maxi2)<2))
        {
            mina2=min(a[b[i]],mina2);
            maxi2=max(a[b[i]],maxi2);
            continue;
        }
        else
        {
            maxi=max(maxi,b[i]-st);
            st=b[i-1];
            maxi2=mina2=a[b[i-1]];
            if(i==k)
                break;
            i--;
        }
    }
    cout<<maxi<<endl;

    return 0;
}


 Conforces_Solutions: 604 Alternative Thinking

#include<bits/stdc++.h>
using namespace std;
long cnt,l;

int main()
{
    string str,st1;
    cin>>l;
    cin>>str;
    cnt=1;
    st1[0]=str[0];
    for(long i=1; i<l; i++)
    {
        if(str[i]==st1[0])
            continue;
        else
        {
            cnt++;
            st1[0]=str[i];
        }
    }
    //cout<<cnt<<endl;
    if(cnt==l||l==3||l==2) cout<<l<<endl;
    else
    {
        if(cnt==1)
        {cout<<cnt+2<<endl;
        return 0;
        }
        int cnt2=0;
        for(long i=0; i<l; i++)
        {
        if((str[i]=='0'&&str[i+1]=='0')||(str[i]=='1'&&str[i+1]=='1'))
        cnt2++;
        }

        if(cnt2==1) cout<<cnt+1<<endl;
        else cout<<cnt+2<<endl;
    }
    return 0;
}


 Conforces_Solutions: 604 More Cowbell

#include<bits/stdc++.h>
using namespace std;
long a[100005],n,k,t,t2;
int main()
{
    cin>>n>>k;
    for(long i=1;i<=n;i++)
        cin>>a[i];
        if(k>n||k==n) cout<<a[n]<<endl;
        else {
            t=n-k;
            t2=t;
            for(long i=t+1;i<=2*t;i++)
            {
                a[i]=a[i]+a[t2--];
                //cout<<a[i]<<" ";
            }
            long maxi=a[t+1];
            for(long i=t+1;i<=n;i++)
                maxi=max(maxi,a[i]);
                cout<<maxi<<endl;

        }

    return 0;
}


 Conforces_Solutions: 604 Uncowed Forces

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


 Conforces_Solutions: 584 Kolya and Tanya 

#include<bits/stdc++.h>
using namespace std;
long long sum=1,sum2=1,i,n;
int main()
{
    cin>>n;
    for(i=1; i<=3*n; i++)
    {
        sum=(sum*3)%(1000000007);
    }
    sum=(sum%1000000007);

    for(i=1; i<=n; i++)
    sum2=(sum2*7)%(1000000007);

    sum2=(sum2%1000000007);
    cout<<(sum-sum2+1000000007)%1000000007<<endl;
    return 0;
}
















 Conforces_Solutions: 581 Luxurious Houses

#include<bits/stdc++.h>
using namespace std;
long long a[100008],a2[100008],n;
int main()
{    cin>>n;
    for(long int i=1;i<=n;i++)
    cin>>a[i];

    long long maxi=a[n];
    for(long i=n-1;i>=1;i--)
    {
        if(a[i]>maxi)
        {a2[i]=a[i]-1;
        maxi=a[i];
        }
        else if(a[i]==maxi)
        a2[i]=a[i];
        else
            a2[i]=maxi;
    }
    for(long i=1;i<=n-1;i++)
   cout<<a2[i]-a[i]+1<<" ";

    cout<<0<<endl;
    return 0;
}















 Conforces_Solutions: 581 Vasya the Hipster

/*#include<bits/stdc++.h>
using namespace std;
long long sum,a[100005],n,k;
int main()
{
    cin>>n>>k;
    for(long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=(a[i]/10);
        a[i]=a[i]%10;
        a[i]=10-a[i];
    }
    sort(a+1,a+n+1);

    for(long i=1;i<=n;i++)
    {
        if(a[i]<=k&&k>0&&a[i]!=10)
           {
          k=k-a[i];
          sum++;
          }
    }
    if(k>0)
    sum+=(k/10);

    if(sum>10*n)
        cout<<10*n<<endl;
      else cout<<sum<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    cout<<min(a,b)<<"  "<<abs(a-b)/2<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
long long a[100008],a2[100008],n;
int main()
{
    cin>>n;
    for(long int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long maxi=a[n];
    for(long i=n;i>=1;i--)
    {
        if(a[i]<=maxi)
            a2[i]=maxi;
        else
        {
            maxi=a[i];
            a2[i]=maxi;
        }
    }
    for(long i=1;i<=n;i++)
    {
        if(a[i]-a2[i]==0)
            cout<<0<<" ";
        else cout<<a2[i]-a[i]+1<<" ";
    }
    return 0;
}*/















 Conforces_Solutions: 581 Developing Skills

#include<bits/stdc++.h>
using namespace std;
long long sum,a[100005],n,k;
int main()
{
    cin>>n>>k;
    for(long i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=(a[i]/10);
        a[i]=a[i]%10;
        a[i]=10-a[i];
    }
    sort(a+1,a+n+1);

    for(long i=1;i<=n;i++)
    {
        if(a[i]<=k&&k>0&&a[i]!=10)
           {
          k=k-a[i];
          sum++;
          }
    }
    if(k>0)
    sum+=(k/10);

    if(sum>10*n)
        cout<<10*n<<endl;
      else cout<<sum<<endl;
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    cin>>a>>b;
    cout<<min(a,b)<<"  "<<abs(a-b)/2<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
long long a[100008],a2[100008],n;
int main()
{
    cin>>n;
    for(long int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long maxi=a[n];
    for(long i=n;i>=1;i--)
    {
        if(a[i]<=maxi)
            a2[i]=maxi;
        else
        {
            maxi=a[i];
            a2[i]=maxi;
        }
    }
    for(long i=1;i<=n;i++)
    {
        if(a[i]-a2[i]==0)
            cout<<0<<" ";
        else cout<<a2[i]-a[i]+1<<" ";
    }
    return 0;
}*/















 Conforces_Solutions: 567 Lineland Mail

#include<bits/stdc++.h>
using namespace std;
long a[200050];
int main()
{
    long n;
    cin>>n;
    for(long int i=1;i<=n;i++)
    cin>>a[i];

        cout<< (a[2]-a[1])<<" "<<(a[n]-a[1])<<endl;
        for(long int j=1;j<=n;j++)
        if(j!=1&&j!=n)
        cout<< min((a[j]-a[j-1]),(a[j+1]-a[j]))<<" "<<max((a[j]-a[1]),(a[n]-a[j]))<<endl;
        cout<< (a[n]-a[n-1])<<" "<<(a[n]-a[1])<<endl;
return 0;
}


 Conforces_Solutions: 557 Pasha and Tea

#include<bits/stdc++.h>
using namespace std;
long a[200005],n;
double w;
int main()
{
    cin>>n>>w;
    for(long i=1;i<=n*2;i++)
    cin>>a[i];
    sort(a+1,a+(n*2)+1);
    double x=(double)a[n+1]/(double)a[1];
    if(x>=2) x=(double)a[1];
    else  x=(double)a[n+1]/2.0;
    x=3.0*x*(double)n;
    if(x<w)
    printf("%f\n",x);
    else printf("%f\n",w);


return 0;
}


 Conforces_Solutions: 556 Case of the Zeros and Ones

#include<bits/stdc++.h>
using namespace std;
string str;

int main()
{
    int n,i;
    cin>>n;
    cin>>str;
    for(i=0;i<n-1;i++)
    {
        if((str[i]=='1'&&str[i+1]=='0')||(str[i]=='0'&&str[i+1]=='1'))
        {
            str.erase(i,2);
            i-=2;
        }

    }
    cout<<str.size()<<endl;

    }



 Conforces_Solutions: 556 Case of Fake Numbers

#include<bits/stdc++.h>
using namespace std;

vector<int>veg;

int main()
{
    int m,st,cnt=1;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>st;
        if(cnt%2)
        {
            int st2=i-st;
            if(st2>-1)  veg.push_back(st2);
            else  veg.push_back((m-st+i));
        }
        else
        {
            int st2=st-i;
            if(st2>-1) veg.push_back(st2);
            else veg.push_back(st+m-i);

        }
        cnt++;
    }
        cnt=0;
        for(int i=0;i<m;i++)
            if(veg[0]==veg[i]) cnt++;

        if(cnt==m)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

return 0;
}



 Conforces_Solutions: 554 Kyoya and Photobooks

#include<bits/stdc++.h>
using namespace std;
vector<string>veg;
string str;
int main()
{

   cin>>str;
   cout<<(str.size())*25+26<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
vector<string>veg;
string str;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        veg.push_back(str);
    }
    sort(veg.begin(),veg.end());
    int maxi=1,cnt=1;

    for(int i=1;i<n;i++)
    {
        if(veg[i]==veg[i-1]) cnt++;
        else cnt=1;
        maxi=max(maxi,cnt);
    }
    cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
char st[200][200];
map<string,int>mp;
int main()
{
    int n,maxi=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    scanf("%s",st[i]);

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(!strcmp(st[i],st[j])) cnt++;
        }
        maxi=max(cnt,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
string st[200];
map<string,int>mp;
int main()
{
    int n,maxi=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>st[i];

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(st[i]==st[j]) cnt++;
        }
        maxi=max(cnt,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
string st[200];
map<string,int>mp;
int main()
{
    int n,maxi=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
        mp[st[i]]++;
        if(mp[st[i]]>maxi)
            maxi=mp[st[i]];
    }
        cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
string st[200];
map<string,int>mp;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
        mp[st[i]]++;
    }

    int maxi=-1;
    for(auto s:mp)
        maxi=max(maxi,s.second);
        cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
string a[20000],st[20400];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=0,maxi=-1;

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='1') cnt++;
        }
        if(cnt==n) ans++;
        }

    maxi=max(ans,maxi);

    for(int i=0;i<n;i++)
    {
        string st[2000];
        for(int k=0;k<n;k++)
        st[k]=a[k];

        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='0')
            {
                for(int p=0;p<n;p++)
                {
                    if(st[p][j]=='1') st[p][j]='0';
                    else st[p][j]='1';
                }
            }
        }

        int ans=0;
    for(int p=0;p<n;p++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(st[p][j]=='1')
            cnt++;
        }

        if(cnt==n)
        ans++;
    }

    maxi=max(ans,maxi);
    }
   cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
string a[20000],st[20400];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=0,maxi=-1;

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='1') cnt++;
        }
        if(cnt==n) ans++;
        }

    maxi=max(ans,maxi);

    for(int i=0;i<n;i++)
    {


        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='0')
            {
                for(int p=0;p<n;p++)
                {
                    if(a[p][j]=='1') a[p][j]='0';
                    else a[p][j]='1';
                }
            }
        }

        int ans=0;
    for(int p=0;p<n;p++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[p][j]=='1')
            cnt++;
        }

        if(cnt==n)
        ans++;
    }

    maxi=max(ans,maxi);
    }
   cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 554 Ohana Cleans Up

#include<bits/stdc++.h>
using namespace std;
string st[200];
map<string,int>mp;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
        mp[st[i]]++;
    }
    map<string,int>::iterator it;
    int maxi=-1;
    for(it=mp.begin();it!=mp.end();it++)
        maxi=max(maxi,it->second);
        cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 552 Vanya and Table

#include<bits/stdc++.h>
using namespace std;
int a[105][105];
long long sum,i,j,x1,x2,x3,x4,y1,y2,y3,y4,n;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        x3=min(x1,x2);
        x4=max(x1,x2);
        y3=min(y1,y2);
        y4=max(y1,y2);
        for(i=y3;i<=y4;i++)
        {
            for(j=x3;j<=x4;j++)
            {
                a[i][j]++;
            }
        }

    }
    for(i=1;i<=100;i++)
    {
        for(j=1;j<=100;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 552 Vanya and Books

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long long st=9,k=1,ans=0;

    while(n!=0)
    {
        if(n<=st)
        {
            ans+=n*k;
            n=0;
        }
        else {ans+=(st*k);
        n=n-st;
        st=st*10;
        k++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 525 Ilya and Sticks

//cool,easy,work
#include<bits/stdc++.h>
using namespace std;
long long veg[100005];
queue <int>mq;
priority_queue<int>pq;
priority_queue<int,vector<int>,greater<int> >pq2;
long long n,sum,a[100005],l;

int main()
{
    cin>>n;
    for(long int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);

    int k=1;
    for(long int i=n;i>=2;i--)
    {
        if(abs(a[i]-a[i-1])==0||abs(a[i]-a[i-1])==1)
        {
            veg[k++]=(min(a[i],a[i-1]));
            i--;
        }
    }

    for(long int i=1;i<=k-2;i+=2)
    {
        sum+=(veg[i]*veg[i+1]);
    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 549 Face Detection

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



 Conforces_Solutions: 548 Mike and Fun

#include<bits/stdc++.h>
using namespace std;
int n,m,q,maxi,i,j,I,J,res,a[505][505];
vector<int>maxima;

int main()
{
    cin>>n>>m>>q;
     // memset(a,0,sizeof(a));
    for(i=1;i<=n;i++)
    {
        int maxi=-1000;
        res=0;
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1) res++;
            else
            {
                maxi=max(maxi,res);
                res=0;
            }
                if(j==m)
            {
                maxi=max(maxi,res);
                res=0;
            }
        }
        maxima.push_back(maxi);
    }

    for(i=1;i<=q;i++)
    {
        cin>>I>>J;
        if(a[I][J]) a[I][J]=0;
        else a[I][J]=1;

        res=0;maxi=-1000;
        for(j=1;j<=m+1;j++)
        {
         if(a[I][j]) res++;
         else
         {
             maxi=max(maxi,res);
             res=0;
         }
             if(j==m)
            {
                maxi=max(maxi,res);
                res=0;
            }
        }
        maxima[I-1]= maxi;
        cout<<*max_element(maxima.begin(),maxima.end())<<endl;

    }
    return 0;
}


 Conforces_Solutions: 550 Two Substrings


/*#include<bits/stdc++.h>
using namespace std;
vector<int>veg;
string st;
int cc=0,pos2,pos1,l,flag,flag1;

int main()
{

    cin>>st;
    l=st.size();
    for(int i=0;i<l-1;i++)
    {
        if(st[i]=='A' && st[i+1]=='B')
        veg.push_back(1);
        else if(st[i]=='B'&&st[i+1]=='A')
        veg.push_back(2);
        else veg.push_back(0);
    }
     l=veg.size();
    for(int i=0;i<l-1;i++)
    {
        if((veg[i]==1&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==1))
        {
            cc=1;
            pos1=i-2;
            pos2=i+3;
        }
    }
   // cout<<cc<<endl;
    if(cc)
    {
        for(int i=pos1;i>=0;i--)
        {
            if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        for(int i=pos2;i<l;i++)
        {
             if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else
    {
        flag=flag1=0;
        for(int i=0;i<l-1;i++)
        {
            if((veg[i]==0&&veg[i+1]==1)||(veg[i]==1&&veg[i+1]==0))
                flag=1;
            else if((veg[i]==0&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==0))
                flag1=2;
        }
        if(flag==1&&flag1==2) {cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
string str;

int main()
{
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='B'&&str[j+1]=='A')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
     for(int i=0;i<l-1;i++)
    {
        if(str[i]=='B'&&str[i+1]=='A')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='A'&&str[j+1]=='B')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
vector<int>veg1,veg2;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
            veg1.push_back(i);
            else if(str[i]=='B'&&str[i+1]=='A')
                veg2.push_back(i);
    }
    int l1=veg1.size();
    int l2=veg2.size();
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(abs(veg1[i]-veg2[j])>1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 550 Two Substrings


/*#include<bits/stdc++.h>
using namespace std;
vector<int>veg;
string st;
int cc=0,pos2,pos1,l,flag,flag1;

int main()
{

    cin>>st;
    l=st.size();
    for(int i=0;i<l-1;i++)
    {
        if(st[i]=='A' && st[i+1]=='B')
        veg.push_back(1);
        else if(st[i]=='B'&&st[i+1]=='A')
        veg.push_back(2);
        else veg.push_back(0);
    }
     l=veg.size();
    for(int i=0;i<l-1;i++)
    {
        if((veg[i]==1&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==1))
        {
            cc=1;
            pos1=i-2;
            pos2=i+3;
        }
    }
   // cout<<cc<<endl;
    if(cc)
    {
        for(int i=pos1;i>=0;i--)
        {
            if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        for(int i=pos2;i<l;i++)
        {
             if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else
    {
        flag=flag1=0;
        for(int i=0;i<l-1;i++)
        {
            if((veg[i]==0&&veg[i+1]==1)||(veg[i]==1&&veg[i+1]==0))
                flag=1;
            else if((veg[i]==0&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==0))
                flag1=2;
        }
        if(flag==1&&flag1==2) {cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
string str;

int main()
{
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='B'&&str[j+1]=='A')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
     for(int i=0;i<l-1;i++)
    {
        if(str[i]=='B'&&str[i+1]=='A')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='A'&&str[j+1]=='B')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
vector<int>veg1,veg2;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
            veg1.push_back(i);
            else if(str[i]=='B'&&str[i+1]=='A')
                veg2.push_back(i);
    }
    int l1=veg1.size();
    int l2=veg2.size();
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(abs(veg1[i]-veg2[j])>1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
*/


 Conforces_Solutions: 550 Two Substrings

#include<bits/stdc++.h>
using namespace std;
vector<int>veg;
string st;
int cc=0,pos2,pos1,l,flag,flag1;

int main()
{

    cin>>st;
    l=st.size();
    for(int i=0;i<l-1;i++)
    {
        if(st[i]=='A' && st[i+1]=='B')
        veg.push_back(1);
        else if(st[i]=='B'&&st[i+1]=='A')
        veg.push_back(2);
        else veg.push_back(0);
    }
     l=veg.size();
    for(int i=0;i<l-1;i++)
    {
        if((veg[i]==1&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==1))
        {
            cc=1;
            pos1=i-2;
            pos2=i+3;
        }
    }
   // cout<<cc<<endl;
    if(cc)
    {
        for(int i=pos1;i>=0;i--)
        {
            if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        for(int i=pos2;i<l;i++)
        {
             if(veg[i]==2||veg[i]==1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else
    {
        flag=flag1=0;
        for(int i=0;i<l-1;i++)
        {
            if((veg[i]==0&&veg[i+1]==1)||(veg[i]==1&&veg[i+1]==0))
                flag=1;
            else if((veg[i]==0&&veg[i+1]==2)||(veg[i]==2&&veg[i+1]==0))
                flag1=2;
        }
        if(flag==1&&flag1==2) {cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='B'&&str[j+1]=='A')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
     for(int i=0;i<l-1;i++)
    {
        if(str[i]=='B'&&str[i+1]=='A')
        {
            for(int j=i+2;j<l-1;j++)
            {
                if(str[j]=='A'&&str[j]+1=='B')
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            break;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
vector<int>veg1,veg2;
int main()
{
    string str;
    cin>>str;
    int l=str.size();
    for(int i=0;i<l-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
            veg1.push_back(i);
            else if(str[i]=='B'&&str[i+1]=='A')
                veg2.push_back(i);
    }
    int l1=veg1.size();
    int l2=veg2.size();
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(abs(veg1[i]-veg2[j])>1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
*/


 Conforces_Solutions: 550 Preparing Olympiad

#include<bits/stdc++.h>
using namespace std;

int ar[20];

int main()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++) cin>>ar[i];
    int res=0;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0,mx=0,mn=111111111;
        for(int j=0;j<n;j++)
        {
            if( i & (1<<j) )
            {
                sum+=ar[j];
                mx=max(mx,ar[j]);
                mn=min(mn,ar[j]);
            }
        }
        if(sum>=l && sum<=r && (mx-mn)>=x)
            res++;
    }
    cout<<res<<endl;
    return 0;
}


















 Conforces_Solutions: 550 Divisibility by Eight

#include<bits/stdc++.h>
using namespace std;

string str;

int main()
{
    int i,j,k,l,sum,sum1,sum2,cc=0;
    cin>>str;
    l=str.size();
    for(i=0;i<l;i++)
    {
        sum=str[i]-48;

        //cout<<sum<<endl;
        if(sum%8==0)
        {
            cout<<"YES"<<endl;
            cout<<sum<<endl;
            cc=1;
            return 0;
        }
        for(j=i+1;j<l;j++)
        {
            sum1=sum*10+str[j]-48;
            //cout<<sum1<<endl;
             if(sum1%8==0)
        {
            cout<<"YES"<<endl;
            cout<<sum1<<endl;
            cc=1;
          return 0;
        }
        for(k=j+1;k<l;k++)
        {
            sum2=sum1*10+str[k]-48;
            //cout<<sum2<<endl;
             if(sum2%8==0)
        {
            cout<<"YES"<<endl;
            cout<<sum2<<endl;
            cc=1;
          return 0;
        }
        }

        }
    }
    if(cc==0)
        cout<<"NO"<<endl;

    return 0;
}


 Conforces_Solutions: 548 Mike and Fax

#include<bits/stdc++.h>
using namespace std;
string str,str2,str3;
int t,i;
int main()
{
    cin>>str>>t;
    if(str.size()%t) cout<<"NO"<<endl;
    else
    {
        t=str.size()/t;
        for(i=0;i<str.size();i+=t)
        {
             str2=str.substr(i,t);
             reverse(str2.begin(),str2.end());
            str3=str3+str2;
        }
        if(str3==str) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}


 Conforces_Solutions: 544 Sea and Islands

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


 Conforces_Solutions: 544 Set of Strings

#include<bits/stdc++.h>
using namespace std;
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


 Conforces_Solutions: 483 Friends and Presents

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


 Conforces_Solutions: 546 Soldier and Badges

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


 Conforces_Solutions: 546 Soldier and Bananas

#include<bits/stdc++.h>
using namespace std;
long long k,w,n,ans;
int main()
{
    cin>>k>>n>>w;
   ans=(((( w+1)*w)/2)*k)-n;
   if(ans<0) cout<<0<<endl;
   else cout<<ans<<endl;
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


 Conforces_Solutions: 475 Strongly Connected City

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


 Conforces_Solutions: 545 Queue

#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,i,sum,cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    sum=a[1];
    for(i=2;i<=n;i++)
    {
        if(sum<=a[i])
        {
            sum+=a[i];
            cnt++;
        }
    }
    cout<<cnt+1<<endl;
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


 Conforces_Solutions: 479 Towers

#include <bits/stdc++.h>
using namespace std;
int j,n,k,maxi,mina,st[200],a[20000],b[20000],i,pos1,pos2,cc=0;
int main()
{
   cin>>n>>k;
   for(i=1;i<=n;i++) cin>>st[i];
   int cnt=0;
   for(i=1;i<=k;i++)
   {
       mina=100000;maxi=-100000;
       for(j=1;j<=n;j++)
       {
           if(st[j]>maxi) {maxi=st[j];pos1=j;}
           if(st[j]<mina) {mina=st[j];pos2=j;}
       }
       if(maxi==mina||abs(maxi-mina)==1) break;

       else
       {
           cnt++;
           st[pos1]--;
           st[pos2]++;
           a[cnt]=pos1;
           b[cnt]=pos2;
       }
   }
    mina=100000;maxi=-100000;
     for(j=1;j<=n;j++)
       {
           if(st[j]>maxi) {maxi=st[j];pos1=j;}
           if(st[j]<mina) {mina=st[j];pos2=j;}
       }

   cout<<(maxi-mina)<<" "<<cnt<<endl;
   for(i=1;i<=cnt;i++)
    cout<<a[i]<<" "<<b[i]<<endl;
    return 0;
}


 Conforces_Solutions: 545 Equidistant String

#include <bits/stdc++.h>
using namespace std;
string str1,str2,s;
int i,cnt,cnt2;
int main()
{
    cin>>str1>>str2;
    for(i=0;i<str1.size();i++)
    {
        if(str1[i]!=str2[i])
            cnt++;
    }
    //cout<<cnt<<endl;
    if(cnt%2)
    {cout<<"impossible"<<endl;return 0;}

    for(i=0;i<str1.size();i++)
    {
        if(str1[i]==str2[i]) s+=str1[i];
        else
        {
            if(cnt2<(cnt/2))
            {s+=str1[i]; cnt2++;}
            else s+=str2[i];}
    }
    cout<<s<<endl;
    return 0;
}


 Conforces_Solutions: 545 Toy Cars

#include <bits/stdc++.h>
using namespace std;

int n,i,j,k,cnt,a[200][200],ans[200];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int k=1;
     for(i=1;i<=n;i++)
    {
        int cc=0;
        for(j=1;j<=n;j++)
        {

            if(a[i][j]==1||a[i][j]==3)
            {
                cc=1;
                 break;
            }
        }
        if(cc==0)
           {
            cnt++;
          ans[k++]=i;
          }
    }
    cout<<cnt<<endl;
    for(i=1;i<=cnt;i++)
        cout<<ans[i]<<" ";


    return 0;
}


 Conforces_Solutions: 545 Woodcutters

#include <bits/stdc++.h>
using namespace std;
long long n,a[100005],b[100006],last,pre,cnt,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i]>>b[i];

    pre=a[1];
    cnt=2;
    if(n<3)
    {
        cout<<n<<endl;
        return 0;
    }

    for(i=2;i<=n-1;i++)
    {
           last=a[i+1];
        if(a[i]-b[i]>pre)
        {

            cnt++;
            pre=a[i];
        }
       else if(a[i]+b[i]<last)
            {
                cnt++;
                pre=a[i]+b[i];
            }
            else pre=a[i];



    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 535 Tavas and SaDDas

#include <bits/stdc++.h>
using namespace std;

string S;
int main()
{
	cin >> S;
	int ans = 1, len = S.length();
	for (int i=1;i<len;i++) ans += (1<<i);


	for (char c: S)
        {
		len--;
		if (c == '7') ans += (1<<len);
	}
	cout << ans << endl;
}


 Conforces_Solutions: 535 Tavas and SaDDas

#include<bits/stdc++.h>
using namespace std;
int m,nnm;
int c;
vector<long long>mp;

    long long rec(long long  int i)
    {
        if(i>777777777)
        return 0;
        mp.push_back(i);
        rec(i*10+4);
        rec(i*10+7);
    }

    int main()
    {
        long long  int n;
        cin>>n;
        rec(4);rec(7);
        sort(mp.begin(),mp.end());
        //cout<<mp.size()<<endl;
       for(int i=0;i<mp.size();i++)
        {
            if(mp[i]==n)
                {cout<<i+1<<endl;
                break;
                }
        }
return 0;
}


 Conforces_Solutions: 535 Tavas and Nafas

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


 Conforces_Solutions: 540 Combination Lock

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,sum=0;
    string str,str2;
    cin>>n;
    cin>>str>>str2;
    for(i=0;i<n;i++)
    {
        a=str[i]-48;
        b=str2[i]-48;
       // sum+=
       if(a>b)
        sum+=min(abs(a-b),(abs(9-max(a,b))+b+1));
        else sum+=min(abs(a-b),(abs(9-max(a,b))+a+1));

    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 75 Life Without Zeros

#include<bits/stdc++.h>
using namespace std;

long findval(long a)
{
    long k=0,st,a1=0;
    while(a!=0)
    {
        if(a%10==0)
            a=a/10;
        else
        {
            st=1;
            for(long i=1;i<=k;i++)
                st=st*10;
            a1=a1+(st)*(a%10);
            a=a/10;
            k++;
        }
    }
    return a1;
}

int main()
{
    long a,b;
    cin>>a>>b;
    if(findval(a)+findval(b)==findval(a+b))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 75 Life Without Zeros

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,a1,b1,c1,st,k,i;
    cin>>a>>b;
    c=a+b;
    k=0,a1=0,b1=0,c1=0,st=1;
    while(a!=0)
    {
        if(a%10==0)
            a=a/10;
        else
        {
            st=1;
            for(i=1;i<=k;i++)
                st=st*10;
            a1=a1+(st)*(a%10);
            a=a/10;
            k++;
        }
    }
    st=1,k=0;
      while(b!=0)
    {
        if(b%10==0)
            b=b/10;
        else
        {
            st=1;
            for(i=1;i<=k;i++)
                st=st*10;
            b1=b1+(st)*(b%10);
            b=b/10;
            k++;
        }
    }
    st=1,k=0;
      while(c!=0)
    {
        if(c%10==0)
            c=c/10;
        else
        {
            st=1;
            for(i=1;i<=k;i++)
                st=st*10;
            c1=c1+(st)*(c%10);
            c=c/10;
            k++;
        }
    }
    if(a1+b1==c1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}


 Conforces_Solutions: 448 Painting Fence

#include<bits/stdc++.h>
using namespace std;
long n,a[5050];
void get_value()
{

    scanf("%ld",&n);
    for(long i=1;i<=n;i++)
        scanf("%ld",&a[i]);
}
long segment(long l,long int r,long int sev)
{
    if(l>r) return 0;
    int low = *min_element(a+l,a+r+1);
    long s2=low-sev;
    long s1=r-l+1;
    long last=l;
    for(long i=l;i<=r;i++)
        if(a[i]==low)
        {
            s2+=segment(last,i-1,low);
            last=i+1;
        }
        s2+=segment(last,r,low);
        return min(s2,s1);
}

int main()
{
    get_value();
    cout<<segment(1,n,0)<<endl;
    return 0;
}













 Conforces_Solutions: 146 Lucky Mask

#include<bits/stdc++.h>
using namespace std;

int main()
{
long long st,st1,st2,b,k,ans,pos,ans2;
    cin>>st>>b;
    st=st+1;
    while(1)
    {
        st1=st;
        ans=0;k=0;ans2=1;
    while(st1!=0)
    {
        pos=st1%10;
        st1=st1/10;
        if(pos==4 || pos==7)
        {ans=(ans+pos*ans2);
        ans2=ans2*10;
         k++;
         }
    }

    if(ans==b)
        {
        cout<<st<<endl;
        //cout<<"uyuyu"<<endl;
        break;
        }
    else
        st=st+1;
        }
return 0;
}


 Conforces_Solutions: 538 Cutting Banner

#include<bits/stdc++.h>
using namespace std;
vector<string>str1,str2;
string str;
int i,j;
int main()
{
    cin>>str;

        for(i=1;i<=str.size();i++)
        str1.push_back(str.substr(0,i));
        for(i=1;i<=str.size();i++)
        str2.push_back(str.substr(str.size()-i,i));
        for(i=0;i<str1.size();i++)
        {
            for(j=0;j<str1.size();j++)
            {
                if(str1[i]=="CODEFORCES"||str2[j]=="CODEFORCES")
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(str1[i]+str2[j]=="CODEFORCES")
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;
}


 Conforces_Solutions: 538 Quasi Binary

#include<bits/stdc++.h>
using namespace std;
long long st,st2,cnt,p,i,j;
long long a[20][20];
int main()
{
    cin>>st;
    st2=st;
    while(st2!=0)
    {
        st2=st2/10;
        cnt++;
    }
    memset(a,0,sizeof(a));
    long long maxi=0;
    for(i=cnt;i>=1;i--)
    {
        p=st%10;
        maxi=max(p,maxi);
        st=st/10;
        for(j=1;j<=p;j++)
            a[j][i]=1;
    }
   cout<<maxi<<endl;
    for(i=1;i<=maxi;i++)
    {
        for(j=1;j<=cnt;j++)
        {
            if(a[i][j]==1)
            {
                for(st=j;st<=cnt;st++)
                    cout<<a[i][st];
                    break;
            }
        }
        cout<<" ";
    }

    //cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 538 Tourist's Notes

#include<bits/stdc++.h>
using namespace std;
long long n,m,d[100005],dh[100005],i,boro,maxi,st1,st2,st3;

int main()
{
    cin>>n>>m;

    for(i=1;i<=m;i++)
        cin>>d[i]>>dh[i];

        boro=-10000;
    for(i=1;i<m;i++)
    {
        st1=d[i+1]-d[i];
        st2=abs(dh[i+1]-dh[i]);
        if(st2>st1)
        {
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }
        maxi=max(dh[i],dh[i+1]);
        st3=d[i+1]-d[i]+1;
        st3=st3-2-abs(dh[i]-dh[i+1]);
        if(st3%2&&st3>0)
        maxi+=(st3/2)+1;

        if(st3%2==0)
            maxi+=(st3/2);

        if(maxi>boro)
            boro=maxi;
            //cout<<boro<<endl;
    }

    maxi=dh[1]+d[1]-1;
    if(maxi>boro)
            boro=maxi;

            maxi=(dh[m]+(n-d[m]));
            if(maxi>boro)
            boro=maxi;
    cout<<boro<<endl;
    return 0;
}



 Conforces_Solutions: 140 New Year Contest

#include<bits/stdc++.h>
using namespace std;
int sum=10,cnt,i,st[200],n,ans;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>st[i];
    sort(st+1,st+1+n);
    for(i=1;i<=n;i++)
    {
        sum+=st[i];
        if(sum<=720) cnt++;
    if(sum>360&&sum<=720)
    {
        ans+=(sum-360);
    }
    }
    if(sum<=360) cout<<n<<" "<<0<<endl;
    else cout<<cnt<<" " <<ans<<endl;

    return 0;




}


 Conforces_Solutions: 140 New Year Snowmen

#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int> >groups;
map<int,int>poky;
vector<int> snowmen;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int st;
        cin>>st;
        poky[st]++;
    }
    for(map<int ,int>::iterator it=poky.begin();it!=poky.end();it++)
    groups.push(make_pair(it->second,it->first));

    while(groups.size()>=3)
    {
        pair<int,int>p1=groups.top();groups.pop();
        pair<int,int>p2=groups.top();groups.pop();
        pair<int,int>p3=groups.top();groups.pop();
        snowmen.push_back(p1.second);p1.first--;
        snowmen.push_back(p2.second);p2.first--;
        snowmen.push_back(p3.second);p3.first--;
        if(p1.first>0) groups.push(p1);
        if(p2.first>0) groups.push(p2);
        if(p3.first>0) groups.push(p3);
      }
      cout<<snowmen.size()/3<<endl;
      for(int i=0;i<snowmen.size();i+=3)
      {
          sort(snowmen.begin()+i,snowmen.begin()+i+3);
          cout<<snowmen[i+2]<<" "<<snowmen[i+1]<<" "<<snowmen[i]<<endl;
      }


    return 0;
}

 Conforces_Solutions: 140 New Year Table

#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979
int main()
{
    float r,R,n;
    float PI=3.141592653;
    cin>>n>>R>>r;
    if(n==1.0)
    {
        if(r<=R)
        cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    else
        {
            float nn;
         nn=(PI/asin((float)r/(float)(R-r)));
        // cout<<nn<<endl;
        //long int nn1=(long int) nn;
        //cout<<nn<<" "<<n<<endl;
       if(nn>=n)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
        }

    return 0;
}


 Conforces_Solutions: 534 Polycarpus' Dice

#include<bits/stdc++.h>
using namespace std;
long long n,a,sum,i,d[200005];
int main()
{
    cin>>n>>a;
    for(i=1;i<=n;i++)
    {cin>>d[i];sum+=d[i];}
    for(i=1;i<=n;i++)
    {
    long long maximum=a-(n-1);
    if(d[i]<maximum) maximum=d[i];
    long long minimum=d[i]-(sum-a);
    if(minimum<1) minimum=1;
    cout<<minimum-1+d[i]-maximum<<" ";
    }
    return 0;
}




 Conforces_Solutions: 451 Predict Outcome of the Game

#include<bits/stdc++.h>
using namespace std;

bool check(long long played, long long d1, long long d2, long long remain)
{
	if((played - d1 - d2) % 3 != 0) return false;
	long long b = (played - d1 - d2) / 3;
	long long a = b + d1;
	long long c = b + d2;
	if(a < 0 || b < 0 || c < 0) return false;
	long long maximal = max(max(a, b), c);
	remain -= 3 * maximal - (a + b + c);
	if(remain < 0 || remain % 3 != 0)
		return false;
	return true;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long n, k, d1, d2;
		cin >> n >> k >> d1 >> d2;
		bool ans = false;
		if(check(k, d1, d2, n-k)) ans = true;
		if(check(k, -d1, d2, n-k)) ans = true;
		if(check(k, d1, -d2, n-k)) ans = true;
		if(check(k, -d1, -d2, n-k)) ans = true;
		if(ans)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}




 Conforces_Solutions: 448 Suffix Structures

#include<bits/stdc++.h>
using namespace std;
char str1[200],str2[200];
long a[200],b[200],i,cc,k,cn;
int main()
{
    scanf("%s%s",str1,str2);
    for(i=0;i<strlen(str1);i++)
    {
        a[str1[i]]++;
    }
    for(i=0;i<strlen(str2);i++)
        b[str2[i]]++;
        int cc=0;
    for(i=97;i<=97+25;i++)
    {
        if(a[i]!=b[i])
            cc=1;
    }
    if(cc==0)
    {
        cout<<"array"<<endl;
        return 0;
    }

    for(i=97;i<=97+25;i++)
    {
        if(a[i]<b[i])
        {
            cout<<"need tree"<<endl;
            return 0;
        }
    }
    k=0;
    for(i=0;i<strlen(str2);i++)
    {
      while(str2[i]!=str1[k])
      {
          k++;
          if(k==strlen(str1))
            break;

      }
      if(str2[i]==str1[k])
        {cn++;k++;}
      if(k==strlen(str1))
        break;

    }
    //cout<<cn<<"         "<<strlen(str2)<<endl;
    if(cn==strlen(str2))
        cout<<"automaton"<<endl;
    else
    cout<<"both"<<endl;
    return 0;
}




 Conforces_Solutions: 441 Valera and Tubes 

#include<bits/stdc++.h>
using namespace std;
long n,m,t,i,j,k=1,p,st,a[200000];
int main()
{
cin>>n>>m>>t;
for(i=1;i<=n;i++)
{
  if(i%2)
   {

    for(j=1;j<=m;j++)
    {
        a[k++]=i;
        a[k++]=j;
    }
   }
    else
        for(j=m;j;j--)
        {
            a[k++]=i;
            a[k++]=j;
        }
    }
     st=t-1;
     p=1;
     //for(i=1;i<=2*(n*m);i++)
    // cout<<a[i]<<" ";

     //cout<<endl<<endl;
     while(st--)
     {
         cout<<2<<" ";
         for(i=p;i<=p+3;i++)
         cout<<a[i]<<" ";
         cout<<endl;
         p=i;
     }
     cout<<(n*m)-(t-1)*2<<" ";
     for(k=p;k<=(2*n*m);k++)
        cout<<a[k]<<" ";
return 0;
}



 Conforces_Solutions: 441 Valera and Fruits

#include<bits/stdc++.h>
using namespace std;
long sum,maxi=-100,a[5000],i,j,v,t2,t1,n,tem;
map<int,int >aa;
map<int,int>::iterator it;
int main()
{

cin>>n>>v;
for(i=1;i<=n;i++)
{
    cin>>t1>>t2;
    aa[t1] +=t2;
    maxi=max(maxi,t1);
}
for(it=aa.begin();it!=aa.end();it++)
{
     t1=  it->first;
   t2=it->second;

    a[t1]+=t2;
    if(a[t1]>v)
    {
        tem=a[t1]-v;
        a[t1]=v;
        a[t1+1]+=tem;
        if(a[t1+1]>v)
            a[t1+1]=v;
            //cout<<a[t1]<<" "<<a[t1+1]
            }
}

for(i=1;i<=maxi+1;i++)
    {sum+=a[i];
   // cout<<a[i]<<" ";
   }
cout<<sum<<endl;
return 0;
}



 Conforces_Solutions: 454 Little Pony and Sort by Shift

#include<bits/stdc++.h>
using namespace std;
long n,i,a[100005],lima=100010,p,res,cnt,b[100005],k=1,pp;
int main()
{
    cin>>n;
    lima=n;
    for(i=1;i<=n;i++)
        cin>>a[i];
        while(a[n-1]<=a[n]&&(n-1)!=0)
        {
            cnt++;
            n--;
        }
        for(i=n;i<=n+cnt;i++)
        {
            b[k++]=a[i];
        }

        for(i=1;i<=n-1;i++)
        b[k++]=a[i];
        sort(a+1,a+k);
        for(i=1;i<k;i++)
        if(a[i]!=b[i])
            {
                cout<<-1<<endl;
                return 0;
            }

        if(cnt+1==lima)
        cout<<0<<endl;
        else cout<<cnt+1<<endl;

return 0;
}



 Conforces_Solutions: 439 Devu and Partitioning of the Array

#include<bits/stdc++.h>
using namespace std;
long long n,k,p,i,j,k2,cnt,a[100005],b[100005],t,k1,p2,kt,pos,pp,cc;
int main()
{
    cin>>n>>kt>>p;
    k=1,k1=1;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t%2==0)
            a[k++]=t;
        else b[k1++]=t;
    }
    pos=k-1;
    pp=1;
    while(b[pp])
   {
        a[k]=b[pp++];
        k++;
       // cout<<a[i]<<endl;
   }
   //for(j=1;j<k;j++)
    //cout<<a[j]<<" ";

    if((kt-p)<=(k1-1)&&((k1-1)-(kt-p))%2==0)
    {
        //cout<<"fdwesfdrefre"<<endl;
        if(p<=((((k1-1)-(kt-p))/2)+pos))
        {
            cout<<"YES"<<endl;
             if(p==0)
            {
                while(cnt!=kt-1)
                {
                    cout<<1<<" "<<a[n--]<<endl;
                    cnt++;
                }

                cout<<n<<" ";
                for(pp=n;pp>=1;pp--)
                {
                    cout<<a[pp]<<" ";
                }
                return 0;
            }
            else
            {
            for(j=1;j<=i-1;j++)
            {
                if(a[j]%2==0&&cnt<p-1)
                {
                    cout<<1<<" "<<a[j]<<endl;
                    cnt++;
                }
                else if(a[j]%2!=0&&cnt<p-1)
                {
                     cout<<2<<" "<<a[j]<<" "<<a[j+1]<<endl;
                     j++;
                    cnt++;
                }
                else if(cnt==p-1)
                {
                    p2=i-(kt-p+1);
                    cout<<p2-j+1<<" ";
                    for(k2=j;k2<=p2;k2++)
                    cout<<a[k2]<<" ";
                    cout<<endl;

                    j=p2;
                    cnt++;
                }
                else
                {
                    cout<<1<<" "<<a[j]<<endl;
                    cnt++;
                }

            }
            return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}



 Conforces_Solutions: 437 The Child and Toy

#include<bits/stdc++.h>
using namespace std;
long sum,a[4000],n,m,i,t1,t2;
 int main()
 {
     cin>>n>>m;
     for(i=1;i<=n;i++)
        cin>>a[i];
     for(i=1;i<=m;i++)
     {
         cin>>t1>>t2;
         sum+=min(a[t1],a[t2]);
     }
     cout<<sum<<endl;
     return 0;
 }


 Conforces_Solutions: 437 The Child and Set

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >a;
vector<int>ans;
long sum,limit,j,k=1,cnt;

int main()
{
    cin>>sum>>limit;
    for(int i=1;i<=limit;i++)
    {
        j=i;k=1,cnt=0;
        while(j%2==0)
        {
            j/=2;
            cnt++;
        }
        k=pow(2,cnt);
        //cout<<" "<<k;
        a.push_back(make_pair(k,i));
    }
    sort(a.begin(),a.end());
    //cout<<endl;
    while(!a.empty())
    {
        if(a.back().first<=sum)
        {
            sum-=a.back().first;
            ans.push_back(a.back().second);
        }
        a.pop_back();
    }
    if(sum!=0)
    cout<<-1<<endl;
    else
    {
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    //for(int i=0;i<a.size();i++)
    //cout<<a[i].first<<" "<<a[i].second<<endl;

    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > a;
vector<int> ans;

int main()
{
	//freopen("input.txt","r",stdin);
	int sum,limit,i,j,k;
	scanf("%d%d",&sum,&limit);
	for(i=1;i<=limit;i++)
        {
		j=i; k=1;
		while(j%2==0)
		{
			j/=2;
			k*=2;
		}
		a.push_back(make_pair(k,i));
	}
	sort(a.begin(),a.end());
	while(!a.empty())
	{
		if(sum>=a.back().first)
		{
			sum-=a.back().first;
			ans.push_back(a.back().second);
		}
		a.pop_back();
	}
	if(sum!=0) printf("-1");
	else
        {
		printf("%d\n",ans.size());
		for(i=0;i<ans.size();i++)
		printf("%d ",ans[i]);
	}
	return 0;
}
*/


 Conforces_Solutions: 437 The Child and Set

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >a;
vector<int>ans;
long sum,limit,j,k=1;

int main()
{
    cin>>sum>>limit;
    for(int i=1;i<=limit;i++)
    {
        j=i;k=1;
        while(j%2==0)
        {
            k*=2;
            j/=2;
        }
        a.push_back(make_pair(k,i));
    }
    sort(a.begin(),a.end());

    while(!a.empty())
    {
        if(a.back().first<=sum)
        {
            sum-=a.back().first;
            ans.push_back(a.back().second);
        }
        a.pop_back();
    }
    if(sum!=0)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    //for(int i=0;i<a.size();i++)
    //cout<<a[i].first<<" "<<a[i].second<<endl;

    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > a;
vector<int> ans;

int main()
{
	//freopen("input.txt","r",stdin);
	int sum,limit,i,j,k;
	scanf("%d%d",&sum,&limit);
	for(i=1;i<=limit;i++)
        {
		j=i; k=1;
		while(j%2==0)
		{
			j/=2;
			k*=2;
		}
		a.push_back(make_pair(k,i));
	}
	sort(a.begin(),a.end());
	while(!a.empty())
	{
		if(sum>=a.back().first)
		{
			sum-=a.back().first;
			ans.push_back(a.back().second);
		}
		a.pop_back();
	}
	if(sum!=0) printf("-1");
	else
        {
		printf("%d\n",ans.size());
		for(i=0;i<ans.size();i++)
		printf("%d ",ans[i]);
	}
	return 0;
}
*/


 Conforces_Solutions: 437 The Child and Set

#include<bits/stdc++.h>
using namespace std;
#define value(x) (x&-x)
long long sum,sum2,limit,i,t,ans[100004];
int main()
{
    cin>>sum>>limit;
    int sum2=0;
    for(i=limit;i;i--)
    {
        if(sum2+value(i)<=sum)
        {
            sum2+=value(i);
            ans[++t]=i;
        }
    }
    if(sum2!=sum) {cout<<-1<<endl;return 0;}
    else
    {
        cout<<t<<endl;
        for(i=1;i<=t;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

#include<cstdio>
#define L(x) (x&-x)
using namespace std;
int sum,P,now,i,n,ans[100005];
int main()
{
  scanf("%d%d",&sum,&P);

  now=0;

  for (i=P;i;i--)
    if (now+L(i)<=sum)
       {
        now+=L(i);
        ans[++n]=i;
        }

  if (now!=sum)
{puts("-1");return 0;}

  printf("%d\n",n);

  for (i=1;i<=n;i++)
  printf("%d ",ans[i]);

  return 0;
}
*/



 Conforces_Solutions: 527 Playing with Paper

#include<bits/stdc++.h>
using namespace std;
long long a,b,cnt=0,a1;
int main()
{
    cin>>a>>b;
    while(b!=0)
    {
        a1=b;
        cnt+=(a/b);
        b=a%b;
        a=a1;

    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 515 Drazil and Factorial

#include<bits/stdc++.h>
using namespace std;
int a[20]={0},i,n;
string str;
int main()
{
    cin>>n;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='2')
            a[2]++;
        else if(str[i]=='3')
            a[3]++;
        else if(str[i]=='4')
        {
            a[3]++;
            a[2]+=2;
        }
        else if(str[i]=='5')
            a[5]++;
        else if(str[i]=='6')
        {
            a[5]++;
            a[3]++;
        }
        else if(str[i]=='7')
            a[7]++;
        else if(str[i]=='8')
        {
            a[7]++;
            a[2]+=3;
        }
        else if(str[i]=='9')
        {
            a[7]++;
            a[3]+=2;
            a[2]++;
        }
    }
    for(i=7;i>=2;i--)
    {
        for(int j=1;j<=a[i];j++)
        cout<<i;
    }
    return 0;
}


 Conforces_Solutions: 499 Lecture

#include<bits/stdc++.h>
using namespace std;
string str1,str2,str;
map<string,string>mp;
int n,m,i,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>str1>>str2;
        if(str1.size()<=str2.size())
        {
            mp[str1]=str1;
        }else{mp[str1]=str2;}
    }
    for(i=1;i<=n;i++)
    {
        cin>>str;
        cout<<mp[str]<<" ";
    }
    return 0;
}


 Conforces_Solutions: 505 Mr. Kitayuta's Gift

#include<bits/stdc++.h>
using namespace std;
string str,st1,st2,str2,str3;
int l,i,j,cc,p;
int main()
{
    cin>>str;
    l=str.size();
    for(i=l-1;i>=0;i--)
    str2+=str[i];
    cc=0;
    for(i=0;i<l;i++)
    {
        if(str[i]!=str2[i])
        {
            st1=str[i];
            st2=str2[i];
            p=i;
            cc=1;
            break;
        }
    }
    if(cc==0)
    {
        if(l%2)
        {
            st1=str[l/2];
            str.insert((l/2+1),st1);
            cout<<str<<endl;
        }
        else
        {
            str.insert((l/2),"a");
            cout<<str<<endl;
        }
        }
        else
        {
            str.insert(p,st2);
            for(i=l;i>=0;i--)
            {
                str3+=str[i];
            }
            if(str==str3)
            {
                cout<<str<<endl;
                return 0;
            }
            else
            {
                str3.clear();
                str2.insert(p,st1);
                for(i=l;i>=0;i--)
                str3+=str2[i];
                if(str2==str3)
                    cout<<str2<<endl;
                else cout<<"NA"<<endl;

            }
        }
        return 0;
}


 Conforces_Solutions: 437 The Child and Homework

#include<bits/stdc++.h>
using namespace std;

int st[10],i,j,cnt,cnt2;
char ch;
string str;
int main()
{
    for(i=1;i<=4;i++)
    {
        cin>>str;
        st[i]=str.size()-2;
        str.clear();
    }

    for(i=1;i<=4;i++)
    {
            cnt=0;
        for(j=1;j<=4;j++)
        {
            if(i!=j)
            {
                if(2*st[i]<=st[j])
                    cnt++;
            }
        }
        if(cnt==3)
        {
            ch=64+i;
            break;
        }

    }

         for(i=1;i<=4;i++)
    {
            cnt2=0;
        for(j=1;j<=4;j++)
        {
            if(i!=j)
            {
                if(st[i]/2>=st[j])
                    cnt2++;
            }
        }
        if(cnt2==3)
        {
          ch= 64+i;
          break;

        }
    }
    if(cnt==3&&cnt2!=3)
        printf("%c\n",ch);
    else if(cnt2==3&&cnt!=3)
        printf("%c\n",ch);
   else
    cout<<"C"<<endl;
	return 0;
}


 Conforces_Solutions: 501 Misha and Changing Handles

#include<bits/stdc++.h>
using namespace std;
string str1[1005],str2[1005],st1,st2;
int n,i;
map<string,string>mymap;
map<string,string>::iterator it;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str1[i]>>str2[i];
    }
    for(i=0;i<n;i++)
    {
        if(str1[i]!="")
            st1=str1[i],st2=str2[i];
        for(int j=i+1;j<n;j++)
        {
             if(str1[i]!="")
            if(st2==str1[j])
            {
                st2=str2[j];
                str1[j].clear();
                str2[j].clear();

            }

        }
        mymap[st1]=st2;
    }
    cout<<mymap.size()<<endl;
    for(it=mymap.begin(); it!=mymap.end();it++)
        cout<< it->first     <<" "<<it->second<<endl;




    return 0;
}




  /*   // std::vector

int main ()
{
  std::vector<int> myvector;

  // set some values:
  for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9

  std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
/*
/*
int main()
{
    scanf("%s",s);
    int k=0;
    for(i=l-1;i>=0;i--)
        s2[k++]=s[i];
    }
    for(i=0;i<l;i++)
    {
        if(s[i]!=s2[i])
        {
            p=i-1;
        }
    }
  return 0;
}

*/
/*
// inserting into a string
#include <iostream>
#include <string>

int main ()
{
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  str.insert(6,str3,3,4);             // to be (not )the question
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  str.insert(10,"to be ");            // to be not (to be )that is the question
  str.insert(15,1,':');               // to be not to be(:) that is the question
  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  str.insert (it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';
  return 0;
}
*/





 Conforces_Solutions: 501 Contest

#include<bits/stdc++.h>
using namespace std;
long a,b,c,d,t1,t2;
int main()
{
    cin>>a>>b>>c>>d;
    t1=max((3*a/10),a-(a/250)*c);
     t2=max((3*b/10),b-(b/250)*d);
     if(t1>t2)
     {
         cout<<"Misha"<<endl;
     }
     else if(t1<t2)
        cout<<"Vasya"<<endl;
     else cout<<"Tie"<<endl;
    return 0;
}




  /*   // std::vector

int main ()
{
  std::vector<int> myvector;

  // set some values:
  for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9

  std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1

  // print out content:
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
/*
/*
int main()
{
    scanf("%s",s);
    int k=0;
    for(i=l-1;i>=0;i--)
        s2[k++]=s[i];
    }
    for(i=0;i<l;i++)
    {
        if(s[i]!=s2[i])
        {
            p=i-1;
        }
    }
  return 0;
}

*/
/*
// inserting into a string
#include <iostream>
#include <string>

int main ()
{
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  str.insert(6,str3,3,4);             // to be (not )the question
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  str.insert(10,"to be ");            // to be not (to be )that is the question
  str.insert(15,1,':');               // to be not to be(:) that is the question
  it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
  str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
  str.insert (it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';
  return 0;
}
*/





 Conforces_Solutions: 507 Amr and Pins

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,j,n1,n2,ans,r,x,x1,y,y1;
    cin>>r>>x>>y>>x1>>y1;
     n=(abs(x1-x))*(abs(x1-x))+(abs(y1-y))*(abs(y1-y));
    n2 =(long long )sqrt(n);
    if(n2*n2!=n)
        n2++;
        ans=n2/(2*r);
        if((n2%(2*r))!=0)
            ans++;
  cout<<ans<<endl;
  return 0;
}







 Conforces_Solutions: 507 Amr and Music

#include<bits/stdc++.h>
using namespace std;
long n,k,i,j,cnt,a[104],b[200],sum,t,p;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        a[i]=b[i];
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>k)
        {
            sum-=a[i];
            t=a[i-1];
            p=i-1;
            break;
        }
        else if(sum==k)
        {
            t=a[i];
            p=i;
            break;
        }
        }
        if(i==n+1)
        {
            cout<<i-1<<endl;
            for(j=1;j<=n;j++)
                cout<<j<<" ";
        }
        else
        {
            cout<<p<<endl;
            for(j=1;j<=p;j++)
            {
                for(i=1;i<=n;i++)
                {
                    if(b[i]==a[j])
                    {
                        b[i]=0;
                        cout<<i<<" ";
                        break ;

                    }
                }
            }
        }
        return 0;
}







 Conforces_Solutions: 508 Anton and currency you all know

#include<bits/stdc++.h>
using namespace std;

char str[200000];
long cnt,i,j,l,p,q;
int main()
{
    scanf("%s",str);
    long l= strlen(str);
    cnt=0,p=-1;
    for(i=0;i<l-1;i++)
    {
        if(((str[i]-'0')%2)==0)
        {
            if(str[i]<str[l-1])
            {
                swap(str[i],str[l-1]);
                printf("%s\n",str);
                cnt=1;
                break;
            }
            else
            p=i;
        }
    }
    if(p==-1&&cnt==0)
    cout<<-1<<endl;
    else if(cnt==0&&p>-1)
    {
        swap(str[p],str[l-1]);
        printf("%s",str);

    }
}



 Conforces_Solutions: 508 Pasha and Pixels

#include<bits/stdc++.h>
using namespace std;
long st[1005][1005]={0},n,m,k,i,a,b,ans,j;
int main()
{
    cin>>n>>m>>k;
    for(i=1;i<=k;i++)
    {
        cin>>a>>b;

        st[a][b]=1;

        if(st[a+1][b]==1&&st[a][b+1]==1&&st[a+1][b+1]==1)
        ans=i;
        else if(st[a+1][b]==1&&st[a+1][b-1]==1&&st[a][b-1]==1)
            ans=i;
        else if(st[a][b-1]==1&&st[a-1][b-1]==1&&st[a-1][b]==1)
            ans=i;
        else if(st[a-1][b]==1&&st[a-1][b+1]==1&&st[a][b+1]==1)
            ans=i;
        if(ans>0)
        {
            for(j=i+1;j<=k;j++)
            {
                cin>>a>>b;
            }
            cout<<ans<<endl;
            return 0;
        }

    }
     cout<<0<<endl;
     return 0;

}


 Conforces_Solutions: 518 Vitaly and Strings

#include<bits/stdc++.h>
using namespace std;

char s1[150],s2[150],ch;
int l,i,t,cc,k;
int main()
{
    scanf("%s%s",&s1,&s2);
   l= strlen(s1);
        k=l-1;
        while(s1[k]=='z')
        {

            s1[k]='a';
            k--;
        }
        s1[k]=s1[k]+1;

   if(strcmp(s1,s2)==0) cout<<"No such string"<<endl;
   else printf("%s",s1);
   return 0;
}

/*
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        myset.insert(a[i]);
        b[i]=a[i];
    }
sort(b+1,b+n+1);

for(i=2;i<=n;i++)
sum+=b[i]-b[i-1];

if(k<sum)
{
    cout<<"NO"<<endl;
}

else
{
    cout<<"YES"<<endl;

    for(j=1;j<=n;j++)
    {
        int t=1;

    for(i=1;i<=a[j];i++)
    {

        if(i<=b[1]+1)
            cout<<t<<" ";
            else
            {
                t++;
                cout<<t<<" ";
            }

    }
    cout<<endl;
    }

}


}





/*int main()
{
    long long n,ans,m,i,ans2,m2;
    cin>>n;

         ans=ans2=1;


    if(n>2)
    m=n+(n-2);
    else m=n;
    m2=m;

    for(i=1;i<=(m2/2);i++)
    {
        ans=ans*m;
        m--;
        }

    for(i=1;i<=(m2/2);i++)
        ans2=ans2*i;

    cout<<(ans/ans2)<<endl;

    return 0;


}


   /* while(cin>>s)
    {


    if(s>=80)
    printf("u get A+\nmy name is shivazi\n");

    else if(s>=70)
        printf("u get A");
    else if(s>=60)
     printf("u get A-\n");

       else if(s>=50)
     printf("u get B\n");
    else if(s>=40)
        printf("U get C");
    else
        printf("You are failed\n");
    }

    //printf("%d\n",c);
    return 0;
}




  /*while(cin>>n)
  {
    for(i=1;i<=n;i++)
    {
        cout<<(105>>i)<<" ";
    }
  }

}

int ans[777];
*/
/*
int main()
 {
  int n;
  long long m;
  cin >> n >> m;
  int l = 0, r = n - 1;
  for (int j = n - 1; j > 0; j--)
{
    if (m <= (1LL << (j - 1)))
      ans[l++] = n - j;

    else
    {
      ans[r--] = n - j;
      m -= (1LL << (j - 1));
    }
  }
  ans[l] = n;

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}
*/


 Conforces_Solutions: 509 Painting Pebbles

#include<bits/stdc++.h>
using namespace std;
int a[200],b[200],i,j,k,n,cc,l;
long sum;
set<int> myset;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        myset.insert(a[i]);
        b[i]=a[i];
    }
sort(b+1,b+n+1);

for(i=2;i<=n;i++)
sum+=b[i]-b[i-1];

if(k<sum)
{
    cout<<"NO"<<endl;
}

else
{
    cout<<"YES"<<endl;

    for(j=1;j<=n;j++)
    {
        int t=1;

    for(i=1;i<=a[j];i++)
    {

        if(i<=b[1]+1)
            cout<<t<<" ";
            else
            {
                t++;
                cout<<t<<" ";
            }

    }
    cout<<endl;
    }

}


}





/*int main()
{
    long long n,ans,m,i,ans2,m2;
    cin>>n;

         ans=ans2=1;


    if(n>2)
    m=n+(n-2);
    else m=n;
    m2=m;

    for(i=1;i<=(m2/2);i++)
    {
        ans=ans*m;
        m--;
        }

    for(i=1;i<=(m2/2);i++)
        ans2=ans2*i;

    cout<<(ans/ans2)<<endl;

    return 0;


}


   /* while(cin>>s)
    {


    if(s>=80)
    printf("u get A+\nmy name is shivazi\n");

    else if(s>=70)
        printf("u get A");
    else if(s>=60)
     printf("u get A-\n");

       else if(s>=50)
     printf("u get B\n");
    else if(s>=40)
        printf("U get C");
    else
        printf("You are failed\n");
    }

    //printf("%d\n",c);
    return 0;
}




  /*while(cin>>n)
  {
    for(i=1;i<=n;i++)
    {
        cout<<(105>>i)<<" ";
    }
  }

}

int ans[777];
*/
/*
int main()
 {
  int n;
  long long m;
  cin >> n >> m;
  int l = 0, r = n - 1;
  for (int j = n - 1; j > 0; j--)
{
    if (m <= (1LL << (j - 1)))
      ans[l++] = n - j;

    else
    {
      ans[r--] = n - j;
      m -= (1LL << (j - 1));
    }
  }
  ans[l] = n;

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}
*/


 Conforces_Solutions: 509 Maximum in Table

#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,ans,m,i,ans2,m2;
    cin>>n;

         ans=ans2=1;


    if(n>2)
    m=n+(n-2);
    else m=n;
    m2=m;

    for(i=1;i<=(m2/2);i++)
    {
        ans=ans*m;
        m--;
        }

    for(i=1;i<=(m2/2);i++)
        ans2=ans2*i;

    cout<<(ans/ans2)<<endl;

    return 0;


}


   /* while(cin>>s)
    {


    if(s>=80)
    printf("u get A+\nmy name is shivazi\n");

    else if(s>=70)
        printf("u get A");
    else if(s>=60)
     printf("u get A-\n");

       else if(s>=50)
     printf("u get B\n");
    else if(s>=40)
        printf("U get C");
    else
        printf("You are failed\n");
    }

    //printf("%d\n",c);
    return 0;
}




  /*while(cin>>n)
  {
    for(i=1;i<=n;i++)
    {
        cout<<(105>>i)<<" ";
    }
  }

}

int ans[777];
*/
/*
int main()
 {
  int n;
  long long m;
  cin >> n >> m;
  int l = 0, r = n - 1;
  for (int j = n - 1; j > 0; j--)
{
    if (m <= (1LL << (j - 1)))
      ans[l++] = n - j;

    else
    {
      ans[r--] = n - j;
      m -= (1LL << (j - 1));
    }
  }
  ans[l] = n;

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}
*/


 Conforces_Solutions: 513 Permutations

#include<bits/stdc++.h>
using namespace std;
long  n,m,cnt;
long myints[] = {0,1,2,3,4,5,6,7,8},maxi,sum;
int main ()
{
    cin>>n>>m;



   maxi=(n*(n+1)*(n+2))/6;

cnt=0;

  do {
        sum=0;
        for(long i=1;i<=n;i++)
        {
            for(long int j=i;j<=n;j++)
            {
                long int st=*min_element(myints+i,myints+j+1);
                // cout<<st<<" ";
                sum+=st;


            }
            //cout<<endl;
        }
       // cout<<sum<<endl;
        if(sum==maxi)
            cnt++;

        if(cnt==m)
        {
             for(long int i=1;i<=n;i++)
             cout<<myints[i]<<" ";
             cout<<endl;
            break;
        }


    //cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while (next_permutation(myints+1,myints+n+1) );

 return 0;
}




 Conforces_Solutions: 513 Game

#include<bits/stdc++.h>
using namespace std;
long n1,n2,k1,k2;
int main()
   {
cin>>n1>>n2>>k1>>k2;
if(n1==n2)
    cout<<"Second"<<endl;
else if(n1>n2)
    cout<<"First"<<endl;
else
    cout<<"Second"<<endl;
return 0;
}







 Conforces_Solutions: 520 Two Buttons

#include<bits/stdc++.h>
using namespace std;
char S[200];
long n,m,cnt,l1,l2;
int main()
{
    cin>>n>>m;
    if(n>=m)
       {
           cout<<n-m<<endl;
           return 0;

       }
       else
       {
           while(m>n)
           {
               if(m%2)
                m++;
               else
                m=(m/2);

                 cnt++;

                if(n>m)
                {
                    cnt+=abs(n-m);
                    n=m=0;
                }


           }
           cout<<cnt<<endl;
       }


}







 Conforces_Solutions: 520 Pangram

#include<bits/stdc++.h>
using namespace std;
char S[200];
int st[220],i,cc,n;
int main()
{
    cin>>n;
    scanf("%s",S);
    cc=0;
    for(i=0;i<n;i++)
    {
        st[S[i]]++;
    }
    for(i=65;i<=65+25;i++)
    {
        if(st[i]>0||st[i+32]>0)
            continue;
        else
        {

            cout<<"NO"<<endl;
              cc=1;
            break;

        }
    }
    if(cc==0)
        cout<<"YES"<<endl;
    return 0;
}






 Conforces_Solutions: 514 Han Solo and Lazer Gun

#include<bits/stdc++.h>
using namespace std;

//double f;

set<double>myset;

int main()
{
    long n,x,y,x1,y1,i;
    cin>>n>>x>>y;
  // double f= double(x)/(y);
   //printf("%lf",f);

    for(i=1;i<=n;i++)
    {
        cin>>x1>>y1;
        if((x1-x)==0)
        {
             myset.insert(40000);
             continue;
        }


       double f= (double)(y1-y)/(x1-x);
       myset.insert(f);

    }
    cout<<myset.size()<<endl;


    return 0;

}


 Conforces_Solutions: 514 Chewbaсca and Number

#include<bits/stdc++.h>
using namespace std;

char S[200];
int l,i;
int main()
{
   scanf("%s",S);
   l=strlen(S);
   for(i=0;i<l;i++)
   {
       if(i==0&&(9-(S[i]-48))==0)
        continue;
       else
       {
           if((9-(S[i]-48))<(S[i]-48))
            S[i]=(9-(S[i]-48))+48;

       }
   }
   printf("%s",S);


    return 0;

}


 Conforces_Solutions: 519 A and B and Team Training

#include<bits/stdc++.h>
using namespace std;
long long n,m,t,cnt,mina,cnt2,cnt3;

int main()
{
    cin>>n>>m;

    while(n!=0&&m!=0)
    {
        if(n==1&&m==1)
            break;
        if(n>m)
        {
            n-=2;
            m--;
            cnt++;
        }
        else
        {
            m-=2;
            n--;
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;

}


 Conforces_Solutions: 519 A and B and Compilation Errors

#include<bits/stdc++.h>
using namespace std;
long st1[100005],st2[100005],st3[100005],i,n,cc;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st1[i];
    }
    sort(st1,st1+n+1);

     for(i=1;i<=n-1;i++)
    {
        cin>>st2[i];
    }
     sort(st2,st2+n);

        for(i=1;i<=n-2;i++)
    {
        cin>>st3[i];
    }
     sort(st3,st3+n-1);

     for(i=1;i<=n-1;i++)
     {
         if(st1[i]!=st2[i])
         {
             cout<<st1[i]<<endl;
             cc=1;
             break;

         }

     }
     if(cc==0)
        cout<<st1[n]<<endl;

     int cc=0;

     for(i=1;i<=n-2;i++)
     {
         if(st2[i]!=st3[i])
         {
             cout<<st2[i]<<endl;
             cc=1;
             break;

         }

     }
     if(cc==0)
        cout<<st2[n-1]<<endl;

    }


 Conforces_Solutions: 519 A and B and Chess

#include<bits/stdc++.h>
using namespace std;

int st[200],i,j,cnt,cnt2;
char str[20];
int main()
{
    for(i=65;i<=97+25;i++)
    {
        if(i=='q'||i=='Q')
            st[i]=9;
            else if(i=='r'||i=='R')
                st[i]=5;
            else if(i=='b'||i=='B'||i=='n'||i=='N')
                st[i]=3;
            else if(i=='p'||i=='P')
                st[i]=1;


    }

    for(i=1;i<=8;i++)
    {
        scanf("%s",str);
        for(j=0;j<8;j++)
        {
            if(str[j]>=65&&str[j]<=65+25)
            {
                cnt+=st[str[j]];
            }
            else if(str[j]>=97&&str[j]<=97+25)
            {
                cnt2+=st[str[j]];
            }

        }
    }
    if(cnt==cnt2)
        cout<<"Draw"<<endl;
    else if(cnt>cnt2)
        cout<<"White"<<endl;
    else cout<<"Black"<<endl;
    return 0;
}


 Conforces_Solutions: 518 Vitaly and Strings

#include<bits/stdc++.h>
using namespace std;
char s1[150],s2[150],ch;
int l,i,t,cc,k;
int main()
{
    scanf("%s%s",&s1,&s2);
   l= strlen(s1);
//scanf("%c",ch);
    for(i=0;i<l-1;i++)
    {
        if(s1[i]!=s2[i])
        {
            cc=1;
        }
    }
    if(cc==0&&s2[l-1]==s1[l-1]+1)
    {
        cout<<"No such string"<<endl;
    }
    else
    {
        k=l-1;
        while(s1[k]=='z')
        {

            s1[k]='a';
            k--;
        }
        s1[k]=s1[k]+1;

   if(strcmp(s1,s2)==0)
   {
     cout<<"No such string"<<endl;
   }
   else

        printf("%s",s1);
    }


    return 0;
}


 Conforces_Solutions: 518 Tanya and Postcard

#include<bits/stdc++.h>
using namespace std;
char s1[200005],s2[200005],ch;
int l,i,t,cc,k,cnt,l1,l2,st[200],st2[200],t2;
int main()
{
    scanf("%s%s",&s1,&s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        st[s1[i]]++;
    }
      for(i=0;i<l2;i++)
    {
        st2[s2[i]]++;
    }
    for(i=65;i<=122;i++)
    {
        t=min(st[i],st2[i]);
        st[i]-=t;
        st2[i]-=t;
        cnt+=t;
    }
    l1-=cnt;
    for(i=65;i<=65+25;i++)
    {
        t2+=min(st[i],st2[i+32]);
    }
     for(i=65;i<=65+25;i++)
    {
        t2+=min(st[i+32],st2[i]);
    }

    if(t2>=l1)
        t2=l1;

    cout<<cnt<<" "<<t2<<endl;
    return 0;
}


 Conforces_Solutions: 515 Drazil and His Happy Friends

#include<bits/stdc++.h>
using namespace std;
 long a,b,s,t,A[1000000]={0},B[1000000]={0},n,m,i,k,g,st,vnt,cnt,j;

int main()
{

    cin>>n>>m;
    cin>>b;
    for(i=1;i<=b;i++)
    {
     scanf("%ld",&st);
        A[st]=1;
    }

    cin>>g;
    for(i=1;i<=g;i++)
    {
         scanf("%ld",&st);
        B[st]=1;
    }
    cnt=b+g;
    i=0;j=0;
    for(;;)
    {
            if(A[i]==0&&B[j]==1)
            {
                cnt++;
                A[i]=1;
            }
            if(A[i]==1&&B[j]==0)
            {
                cnt++;B[j]=1;
            }

        if(i==n-1)
            i=-1;
        if(j==m-1)
            j=-1;
        i++;
        j++;
        vnt++;
        if(cnt==n+m)
        {
        cout<<"Yes"<<endl;
        break;
        }
        else if(vnt==10000)
        {
            cout<<"No"<<endl;
            break;
        }

    }
    return 0;
}




 Conforces_Solutions: 515 Drazil and His Happy Friends

#include<bits/stdc++.h>
using namespace std;
 long a,b,s,t,A[1000000]={0},B[1000000]={0},n,m,i,k,g,st,vnt,cnt,j;

int main()
{

    cin>>n>>m;
    cin>>b;
    for(i=1;i<=b;i++)
    {
     scanf("%ld",&st);
        A[st]=1;
    }

    cin>>g;
    for(i=1;i<=g;i++)
    {
         scanf("%ld",&st);
        B[st]=1;
    }
    cnt=b+g;
    i=0;j=0;
    for(;;)
    {
            if(A[i]==0&&B[j]==1)
            {
                cnt++;
                A[i]=1;
            }
            if(A[i]==1&&B[j]==0)
            {
                cnt++;B[j]=1;
            }

        if(i==n-1)
            i=-1;
        if(j==m-1)
            j=-1;
        i++;
        j++;
        vnt++;
        if(cnt==n+m)
        {
        cout<<"Yes"<<endl;
        break;
        }
        else if(vnt==999999)
        {
            cout<<"No"<<endl;
            break;
        }

    }
    return 0;
}




 Conforces_Solutions: 515 Drazil and Date

#include<bits/stdc++.h>
using namespace std;
long long a,b,s,t;
int main()
{
    cin>>a>>b>>s;
    t=abs(a)+abs(b);
    if(s>=t)
    {
        if(s%2==0&& t%2==0)
       {

        cout<<"Yes"<<endl;
        return 0;
    }
        else if(s%2!=0&& t%2!=0)
        {
         cout<<"Yes"<<endl;
         return 0;
        }

    }
        cout<<"No"<<endl;


    return 0;
}


 Conforces_Solutions: 510 Fox And Snake

#include<bits/stdc++.h>
using namespace std;
long n,i,j,m;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(i%2)
        {
            for(j=1;j<=m;j++)
                cout<<"#";
        }
        else
        {
            if((i/2)%2)
            {
                for(j=1;j<=m-1;j++)
                    cout<<".";
                cout<<"#";
            }
            else
            {
                cout<<"#";
                for(j=1;j<=m-1;j++)
                    cout<<".";


            }
        }
        cout<<endl;
    }
}


 Conforces_Solutions: 499 Watching a movie

/*#include<bits/stdc++.h>
using namespace std;
long long x,x2,b,i,j,a[100005],sum,p,k;
int main()
{
int p=1;
for( i=0;i<=4;i++)
{
    for(j=0;j<=4;j++)
    {
        for(k=0;k<=4;k++)
        {
           a[p]= pow(2,k)*pow(3,j)*pow(5,i);
           cout<<a[p]<<endl;
           p++;
        }
    }
}
//cout<<p<<endl;
//sort(a+1,a+p);
//for( i=1;i<p;i++)
   // cout<<a[i]<<" ";
    return 0;
    }*/
#include<bits/stdc++.h>
using namespace std;
long n,x,i,a,b,t,cnt;

int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        t=a-b-1;
        cnt+=(t/x);
        cin>>b;
    }
    cout<<b-cnt*x<<endl;

    return 0;
    }


 Conforces_Solutions: 454 Little Pony and Sort by Shift

#include<bits/stdc++.h>
using namespace std;
long n,p,i,j,a[100005],b[100005];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    int p=1;
    for(j=n;j>=1;j--)
        if(a[j-1]>a[j])  p=j;
        int k=1;
    for(i=p;i<=n;i++)
        b[k++]=a[i];
    for(i=1;i<=p-1;i++)
        b[k++]=a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    if(n-p+1==n)
        cout<<0<<endl;
    else cout<<n-p+1<<endl;
    return 0;



}


 Conforces_Solutions: 157 Game Outcome

#include<bits/stdc++.h>
using namespace std;
int n,k,i,j,sum,sum2,a[50][50],cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=sum2=0;
            for(k=1;k<=n;k++)
                sum+=a[k][j];
            for(k=1;k<=n;k++)
            sum2+=a[i][k];
            if(sum>sum2)
                cnt++;
        }
    }
    cout<<cnt<<endl;
}


 Conforces_Solutions: 495 Digital Counter

#include<bits/stdc++.h>
using namespace std;
long long int n;
int a[]={2,7,2,3,3,4,2,5,1,2};
int main()
{
    cin>>n;
    cout<<a[n/10]*a[n%10]<<endl;
    return 0;
}


 Conforces_Solutions: 486 Calculating Function

#include<bits/stdc++.h>
using namespace std;

long long int n;
int main()
{
    cin>>n;
    if(n%2==0) cout<<n/2<<endl;
    else
        cout<<-1*(n/2+1)<<endl;
    return 0;
}


 Conforces_Solutions: 496 Minimum Difficulty

#include<bits/stdc++.h>
using namespace std;
int a[304],i,n,t,maxi,mina;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
        int mina=20000;

    for(i=2;i<=n-1;i++)
    {
        maxi=-1;
        for(int j=2;j<=n;j++)
        {
            if(i==j)
            {
                t=a[j+1]-a[j-1];
                j++;
            }
            else t=a[j]-a[j-1];
            maxi=max(maxi,t);
        }
      mina= min(mina,maxi);
    }
    cout<<mina<<endl;
    return 0;
}


 Conforces_Solutions: 500 New Year Transportation

#include<bits/stdc++.h>
using namespace std;
int a[30004],i,n,t;
int main()
{
    cin>>n>>t;
    for(i=1;i<=n-1;i++)
        cin>>a[i];
        i=1;
    while(i<=n-1)
    {
        i=i+a[i];
        if(i==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 43 Football

#include<bits/stdc++.h>
using namespace std;
int cnt=1,cnt2,n,i;
string str,str1,str2;
int main()
{
    cin>>n;
       cin>>str;
        str1=str;
    for(i=2;i<=n;i++)
    {
        cin>>str;
        if(str==str1)
            cnt++;
        else
        {
            cnt2++;
            str2=str;
        }

    }
    if(cnt>cnt2) cout<<str1<<endl;
    else cout<<str2<<endl;
    return 0;
}


 Conforces_Solutions: 242 Big Segment

#include<bits/stdc++.h>
using namespace std;
long maxi=-10;
long mini=1000000009,i,a[100005],b[100005],n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]<=mini)
        mini=a[i];

        if(b[i]>=maxi)
            maxi=b[i];

    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==mini && b[i]==maxi)
            {cout<<i<<endl;
        return 0;}
    }
    cout<<-1<<endl;
    return 0;
}


 Conforces_Solutions: 259 Little Elephant and Magic Square

#include<bits/stdc++.h>
using namespace std;
int a[20][20],i,j,n,x,y,z,p;
char ch;
int main()
{

    for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
        cin>>a[i][j];

        x=(a[3][2]+a[3][1]);
        y=a[1][2]+a[3][2];
        z=a[1][3]+a[1][2];
        p=(x-(y-z))/2;
        a[3][3]=p+y-x;
        a[1][1]=p+y-z;
        a[2][2]=p;
        for(i=1;i<=3;i++)
        {
            for(j=1;j<=3;j++)
            cout<<a[i][j]<<" ";

            cout<<endl;
        }
        return 0;

}


 Conforces_Solutions: 373 Collecting Beats is Fun

#include<bits/stdc++.h>
using namespace std;
int a[20],i,j,n;
char ch;
int main()
{
    cin>>n;
    scanf("%c",&ch);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%c",&ch);
            a[ch-48]++;

        }
        scanf("%c",&ch);
    }
    //cout<<a[1]<<endl;
    for(i=1;i<=9;i++)
    {
        if(a[i]!=0&& a[i]>2*n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


 Conforces_Solutions: 492 Vanya and Exams

#include<bits/stdc++.h>
using namespace std;
long long res,i,st1,st2,n,r,avr,t,ans;

pair<int,int>a[100005];
int main()
{
    cin>>n>>r>>avr;
    for(i=0;i<n;i++)
    {
        cin>>st1>>st2;
        res+=st1;
        a[i].first=st2;
        a[i].second=st1;
    }
    sort(a,a+n);
    if(res>=(n*avr))
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        n=n*avr-res;
        i=0;
        while(n!=0)
        {
            t=r-a[i].second;
            if(t<=n)
            {
                ans+=t*a[i].first;
                n-=t;
            }
            else
            {
                ans+=n*a[i].first;
                n=0;
            }
            i++;
        }
        cout<<ans<<endl;
    }


   return 0;
   }


 Conforces_Solutions: 492 Vanya and Cubes

#include<bits/stdc++.h>
using namespace std;
long a[10005],n,cnt,sum,i;
int main()
{
    cin>>n;
    for(i=1;i<=1000;i++)
    {
        a[i]=((i)*(i+1))/2;
    }
    for(i=1;i<=1000;i++)
    {
        sum+=a[i];
        if(sum<=n)
        cnt++;
        else break;

    }
    cout<<cnt<<endl;

   return 0;
   }


 Conforces_Solutions: 492 Vanya and Lanterns

#include<bits/stdc++.h>
using namespace std;
long a[1005],l,i,maxi,t,n;
int main()
{
    cin>>n>>l;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    sort(a+1,a+n+1);
    maxi=-10;
    for(i=1;i<n;i++)
    {
        t=a[i+1]-a[i];
        if(t>maxi)
            maxi=t;
    }
   t=max(a[1]-0,l-a[n]);
   double tk=(double)t;
   double tt=(double)(maxi/2.00000);
   // printf("%lf",tk);
   //printf("%lf",tt);
   if((double)tk>tt)
   printf("%lf",tk);
   else  printf("%lf",tt);
   return 0;
   }


 Conforces_Solutions: 381 Sereja and Stairs

#include<bits/stdc++.h>
using namespace std;
int n,a[11000],res[11000],i,st,ptr;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st;
        a[st]++;
    }
    int k=1;
    for(i=1;i<=5000;i++)
    {
        if(a[i]!=0)
        {
            res[k++]=i;
            ptr=i;
        }
    }
    for(i=ptr-1;i>=1;i--)
    {
        if(a[i]>1)
            res[k++]=i;
    }
    cout<<k-1<<endl;

    for(i=1;i<k;i++)
    cout<<res[i]<<" ";
    return 0;
}


 Conforces_Solutions: 104 Blackjack

#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    if(n<11)
        cout<<0<<endl;
    else if(n<=19)
        cout<<4<<endl;
    else if(n==20)
        cout<<15<<endl;
        else if(n==21)
            cout<<4<<endl;
    else cout<<0<<endl;
    return 0;
}


 Conforces_Solutions: 433 Kitahara Haruki's Gift

#include<bits/stdc++.h>
using namespace std;
int n,i,st,sum,cnt2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st;
        if(st==200) cnt2++;
        sum+=st;
    }

    if(n==1)
    {cout<<"NO"<<endl;
    return 0;
    }
    if(n==cnt2&&n%2==1)
         {cout<<"NO"<<endl;
    return 0;
    }
    if((sum/2) %100)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}


 Conforces_Solutions: 2 Winner

/*// map::begin/end
#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  // show content:
  for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
map<string,int> mymap,pp;
int maxi=-10000005,n,st[2000],i;

string str[2000],ans;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        scanf("%d",&st[i]);

        mymap[str[i]]+=st[i];
    }

    for(i=0;i<n;i++)
    {
        if(mymap[str[i]]>maxi)
            maxi=mymap[str[i]];
    }

      //cout<<maxi<<endl;
    for(i=0;i<n;i++)
    {

         pp[str[i]]+=st[i];
        if(pp[str[i]]>=maxi&&mymap[str[i]]==maxi)
        {
          cout<<str[i]<<endl;
          break;
        }
    }

return 0;
}


 Conforces_Solutions: 379 New Year Ratings Change

#include<bits/stdc++.h>
using namespace std;
const int mx=300000+10;
pair<int,int>a[mx];
int res[mx],n,i,st,cnt;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>st;
        a[i].first=st;
        a[i].second=i;
    }
    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        cnt=max(a[i].first,cnt+1);
        res[a[i].second]=cnt;
    }
    for(i=0;i<n;i++)
    cout<<res[i]<<" ";
    cout<<endl;
    return 0;
}


 Conforces_Solutions: 455 Boredom

#include<bits/stdc++.h>
using namespace std;
const int mx=100005;
long long n,fac[mx],a[mx];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        {cin>>a[i];
        fac[a[i]]++;
        }
        for(int i=1;i<=mx;i++)
        {
            fac[i]=i*fac[i];
            if(i!=1)
            {
                fac[i]+=fac[i-2];
                if(fac[i]<fac[i-1])
                    fac[i]=fac[i-1];
            }
        }
        cout<<fac[mx-1]<<endl;

}


 Conforces_Solutions: 490 Team Olympiad

#include<bits/stdc++.h>
using namespace std;
int a[5005],b[5050],c[5050];
int i,n,st[5050],ans,k,r;
int main()
{
    cin>>n;
    int p=k=r=1;
    for(i=1;i<=n;i++)
        {
        cin>>st[i];
        if(st[i]==1)
            a[p++]=i;
        else if(st[i]==2)
            b[k++]=i;
        else c[r++]=i;

        }
        ans=min(min(p-1,k-1),r-1);
        cout<<ans<<endl;
        for(i=1;i<=ans;i++)
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;

    return 0;
}


 Conforces_Solutions: 488 Candy Boxes

#include<bits/stdc++.h>
using namespace std;
int a[10],i,n,sum,c,d;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i],sum+=a[i];
    sort(a+1,a+n+1);

    if(n==0)
    cout<<"YES"<<endl<<1<<endl<<2<<endl<<2<<endl<<3<<endl;
    if(n==1)
    cout<<"YES"<<endl<<2*a[1]<<endl<<2*a[1]<<endl<<3*a[1]<<endl;



    if(n==2)
    {
        c=(4*a[1]-a[2]);
        d=3*a[1];
        if(c>0)
        cout<<"YES"<<endl<<c<<endl<<d<<endl;
        else cout<<"NO"<<endl;
    }


    if(n==3)
    {
     int d1=a[2]+a[3]-a[1];
      int d2=a[1]+a[3]-a[2];
     int  d3=a[1]+a[2]-a[3];
        int max1=max(max(d1,max(a[1],a[2])),a[3]);
        int min1=min(min(d1,min(a[1],a[2])),a[3]);
        int max2=max(max(d2,max(a[1],a[2])),a[3]);
         int min2=min(min(d2,min(a[1],a[2])),a[3]);
      int max3=max(max(d3,max(a[1],a[2])),a[3]);
     int  min3=min(min(d3,min(a[1],a[2])),a[3]);

     if(((a[2]+a[3])/2)==(max1-min1))
     cout<<"YES"<<endl<<d1<<endl;
     else if(((a[1]+a[3])/2)==(max2-min2))
        cout<<"YES"<<endl<<d2<<endl;
        else if(((a[1]+a[2])/2)==(max3-min3))
        cout<<"YES"<<endl<<d3<<endl;
        else
            cout<<"NO"<<endl;
    }


    if(n==4)
    {
        if((a[4]-a[1])==(sum/4)&&(sum/4)==((a[2]+a[3])/2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


 Conforces_Solutions: 488 Candy Boxes

#include<bits/stdc++.h>
using namespace std;
int a[10],i,n,sum,c,d;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a+1,a+n+1);

    if(n==0)
    {
        cout<<"YES"<<endl;
        cout<<1<<endl<<2<<endl<<2<<endl<<3<<endl;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<2*a[1]<<endl<<2*a[1]<<endl<<2*a[1]+a[1]<<endl;

    }

    if(n==2)
    {

        c=(4*a[1]-a[2]);
         d=3*a[1];
         //cout<<c<<" "<<d<<endl;
        if(c>0&&d>0)
        {
            cout<<"YES"<<endl;
            cout<<c<<endl<<d<<endl;
        }

        else
            cout<<"NO"<<endl;
        }


    if(n==3)
    {
     int d1=a[2]+a[3]-a[1];
      int d2=a[1]+a[3]-a[2];
     int  d3=a[1]+a[2]-a[3];
     //cout<<d2<<endl;
        int max1=max(max(d1,max(a[1],a[2])),a[3]);
        int min1=min(min(d1,min(a[1],a[2])),a[3]);
        int max2=max(max(d2,max(a[1],a[2])),a[3]);
         int min2=min(min(d2,min(a[1],a[2])),a[3]);
      int max3=max(max(d3,max(a[1],a[2])),a[3]);
     int  min3=min(min(d3,min(a[1],a[2])),a[3]);

     if(((sum+d1)/4)==((a[2]+a[3])/2)&&((a[2]+a[3])/2)==abs(max1-min1))
     cout<<"YES"<<endl<<d1<<endl;
     else if(((sum+d2)/4)==((a[1]+a[3])/2)&&((a[1]+a[3])/2)==abs(max2-min2))
        cout<<"YES"<<endl<<d2<<endl;
        else if(((sum+d3)/4)==((a[1]+a[2])/2)&&((a[1]+a[2])/2)==abs(max3-min3))
        cout<<"YES"<<endl<<d3<<endl;
        else
            cout<<"NO"<<endl;
    }


    if(n==4)
    {
        if((a[4]-a[1])==(sum/4)&&(sum/4)==((a[2]+a[3])/2))
            cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
        }

    return 0;
}


 Conforces_Solutions: 489 SwapSort

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
long a[3005],i,n,j,x;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        x=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[x])
            x=j;
        if(i!=x)
            v.push_back(make_pair(i,x));
            swap(a[i],a[x]);
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}


 Conforces_Solutions: 489 Given Length and Sum of Digits...

#include<bits/stdc++.h>
using namespace std;

long a[205],b[205],ss,s,i,m;
int main()
{
    cin>>m>>s;
    if(m==1&&s==0)
    {
        cout<<0<<" "<<0<<endl;
        return 0;
    }

    if(s==0||s>m*9)
    {
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    ss=s;
    s--;
    a[1]=1;
    for(i=m;i>=1;i--)
    {
        if(s>=9)
            {a[i]=9;
            s=s-9;
            }
            else
                {a[i]+=s;
                s=0;
                }
}
for(i=1;i<=m;i++)
{
    if(ss>=9)
    {
        b[i]=9;
        ss=ss-9;
    }
    else
    {
        b[i]=ss;
        ss=0;
    }

}

for(i=1;i<=m;i++)
cout<<a[i];
cout<<" ";

for(i=1;i<=m;i++)
    cout<<b[i];

return 0;
}


 Conforces_Solutions: 489 BerSU Ball

#include<bits/stdc++.h>
using namespace std;
int a[200],b[200],m,n,i,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
        cin>>b[i];
    sort(a+1,a+n+1);
sort(b+1,b+m+1);
int cnt=0;
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        if(b[j]==a[i]||abs(b[j]-a[i])==1)
        {
            b[j]=-1000000;
            cnt++;
            break;
        }
    }
}
cout<<cnt<<endl;
}


 Conforces_Solutions: 485 Valuable Resources

#include<bits/stdc++.h>
using namespace std;
long long a[2000],b[2000],l,n,i;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
  l= max(abs(a[0]-a[n-1]),abs(b[0]-b[n-1]));
  cout<<l*l<<endl;



}


 Conforces_Solutions: 347 Difference Row

#include<bits/stdc++.h>
using namespace std;
int n,a[200],i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    swap(a[1],a[n]);
    for(i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}


 Conforces_Solutions: 239 Two Bags of Potatoes

#include<bits/stdc++.h>
using namespace std;
long y,x,n,k;
int main()
{
    cin>>y>>k>>n;
    //if(y%k==0) {cout<<-1<<endl;return 0;}
     x=k-(y%k);
    int c=0;
    while(1)
    {
        if(x+y<=n&&(x+y)%k==0)
        {
            cout<<x<<" ";
            x=x+k;
            c=1;
        }
        else
        break;
    }
    if(c==0) {cout<<-1<<endl;return 0;}
}


 Conforces_Solutions: 215 Bicycle Chain

#include<bits/stdc++.h>
using namespace std;
long int n,i,j,m,a[100],b[100],x[10005],p,maxi;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    maxi=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((b[i]%a[j])==0)
            {
                p=b[i]/a[j];
                if(p>maxi)
                    maxi=p;
                //cout<<p<<" ";
                x[p]++;
            }
        }
    }

    //sort(x,x+10001);
    cout<<x[maxi]<<endl;
    return 0;
}


 Conforces_Solutions: 288 Polo the Penguin and Strings

#include<bits/stdc++.h>
using namespace std;
long int n,k,i,p;
int main()
{
    cin>>n>>k;
    if(k>n)
        {cout<<-1<<endl;return 0;}
    else if(k==n)
        {for(i=97;i<97+n;i++)
        printf("%c",i);
        return 0;
        }
        else
        {
          if(k==1)
                {cout<<-1<<endl;
            return 0;}
            cout<<"ab";
             p=n-k;
            k=k-2;

            for(i=1;i<=p;i++)
            {
                if(i&1) cout<<"a";
                else cout<<"b";
            }
            for(i=1;i<=k;i++)
            printf("%c",98+i);
            cout<<endl;

        }

    return 0;
}


 Conforces_Solutions: 3 Shortest path of the king

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


 Conforces_Solutions: 199 Hexadecimal's theorem

#include<bits/stdc++.h>
using namespace std;
long n;
int main()
{
    cin>>n;
    cout<<0<<" "<<0<<" "<<n<<endl;
    return 0;
}


 Conforces_Solutions: 426 Sereja and Mugs

#include<bits/stdc++.h>
using namespace std;
long n,s,a[2000],st[2000],sum,i;

int main()
{
    cin>>n>>s;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        st[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if((sum-a[i])<=s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;

}


 Conforces_Solutions: 80 Panoramix's Prediction

#include<bits/stdc++.h>
using namespace std;
int n,m,i;
int st[]={0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int main()
{
    cin>>n>>m;
    for(i=1;i<=20;i++)
    if(st[i]==n&&st[i+1]==m)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    cout<<"NO"<<endl;
    return 0;

}


 Conforces_Solutions: 447 DZY Loves Strings

#include<bits/stdc++.h>
using namespace std;

long a[200],b[201],sum,t,k,i,j;

char str[10000];
int main()
{

    scanf("%s",str);
    int l=strlen(str);
    cin>>k;
    for(i=97;i<=97+25;i++)
       {
           cin>>a[i];
           b[i]=a[i];
       }
    sort(a,a+200);
    t=a[199];
    int p=1;
    for(i=0;i<l;i++)
    sum+=b[str[i]]*p++;
    for(j=p;j<p+k;j++)
        sum+=t*j;
    cout<<sum<<endl;
    return 0;


}


 Conforces_Solutions: 452 Eevee

#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int main()
{
    string A;
    string str[10];
     str[0]="jolteon";
     str[1]="flareon";
     str[2]="umbreon";
     str[3]="leafeon";
     str[4]="glaceon";
     str[5]="sylveon";

    cin>>n;
    cin>>A;
    if(n==6)
        {cout<<"espeon"<<endl;
        return 0;}
        else if(n==8) {cout<<"vaporeon"<<endl;}
        else
        {
            for(i=0;i<=5;i++)
            {
                int c=1;
                for(j=0;j<=3;j++)
                {
                    if(str[i][j]!=A[j]&&A[j]!='.')
                    {
                        c=0;
                        break;
                    }
                }
                if(c==1)
                {
                    cout<<str[i]<<endl;
                    break;
                }
            }
        }
        return 0;
}


 Conforces_Solutions: 285 Building Permutation

#include<bits/stdc++.h>
using namespace std;
long long n,i,a[300005],sum;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    sum+=abs(a[i]-i);
    cout<<sum<<endl;


}


 Conforces_Solutions: 287 IQ Test

#include<bits/stdc++.h>
using namespace std;
char str[10][10];
int cnt,cnt2,i,j;
int main()
{
    for(i=0;i<4;i++)
    scanf("%s",str[i]);
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            if(str[i][j]=='.')
                cnt++;
            else  if(str[i][j]=='#')
                    cnt2++;

             if(str[i][j+1]=='.')
                cnt++;
              else  if(str[i][j+1]=='#')
                    cnt2++;

             if(str[i+1][j]=='.')
                cnt++;
             else  if(str[i+1][j]=='#')
                    cnt2++;

             if(str[i+1][j+1]=='.')
                cnt++;
              else  if(str[i+1][j+1]=='#')
                    cnt2++;

                    if(cnt>=3||cnt2>=3)

            {cout<<"YES"<<endl;
            return 0;
        }
        cnt=0,cnt2=0;
        }

    }
    cout<<"NO"<<endl;
}


 Conforces_Solutions: 415 Mashmokh and Lights

#include<bits/stdc++.h>
using namespace std;
int n,m,i,a[200],t,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>t;
        for(j=t;j<=n;j++)
        if(a[j]==0)
            a[j]=t;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}


 Conforces_Solutions: 139 Petr and Book

#include<bits/stdc++.h>
using namespace std;
long sum,i,a[10],n;
int main()
{
    cin>>n;
    for(i=1;i<=7;i++)
        cin>>a[i];
    for(;;)
    {
        int ans=0;
        for(i=1;i<=7;i++)
        {
            sum+=a[i];
            if(sum>=n)
            {
                ans=i;
                break;
            }
        }
        if(ans)
        {
            cout<<ans<<endl;
            break;
        }
    }
}


 Conforces_Solutions: 462 Appleman and Card Game

#include<bits/stdc++.h>
using namespace std;
long long int sum,m,n,i,a[100];
char str[100005];

int main()
{
    cin>>n>>m;
    scanf("%s",str);
    for(i=0;i<n;i++)
        a[str[i]]++;
    sort(a,a+100);
    i=99;
    while(1)
    {
        if(a[i]>=m)
        {
            sum+=m*m;
            break;
        }
        else
        {
            sum+=a[i]*a[i];
            m-=a[i];
        }
        i--;
    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 152 Marks

#include<bits/stdc++.h>
using namespace std;
char str[105][105];
int n,m,i,j,k,b[105];
int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
        int p=0;
    for(j=0;j<m;j++)
    {
       int maxi=0;
        for(k=0;k<n;k++)
            maxi=max(str[k][j]-48,maxi);
            b[p++]=maxi;
    }
    int ans=0;
    for(j=0;j<n;j++)
    {
        int cnt=0;
        for(k=0;k<m;k++)
            if(str[j][k]-48==b[k])
            cnt++;
        if(cnt>0) ans++;
    }
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 168 Wizards and Demonstration

#include<bits/stdc++.h>
using namespace std;
long t,n,y,x;
int main()
{
    cin>>n>>x>>y;
    t=(n*y)/100;
    if((n*y)%100) t++;
    if(t<=x) cout<<0<<endl;
    else cout<<t-x<<endl;
    return 0;
}


 Conforces_Solutions: 313 Ilya and Queries

#include<bits/stdc++.h>
using namespace std;
long t,st,a[100005],n,i,l,r;
char str[100005];
int main()
{
    scanf("%s",str);
    n=strlen(str);
    long k=1;
    for(i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
            t++;
        a[i+1]=t;
       // cout<<a[i+1]<<endl;
    }
    a[n]=t;
    //for(i=0;i<)
    cin>>st;
    while(st--)
    {
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}


 Conforces_Solutions: 291 Spyke Talks

#include<bits/stdc++.h>
using namespace std;
long long cnt,i,n,a[10000];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n-1;i++)
    {
        if(a[i]==a[i+1]&&a[i]!=0)
            cnt++;
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+1]!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 427 Prison Transfer

#include<bits/stdc++.h>
using namespace std;
long n,t,c,i,a[200005],st,cnt;
int main()
{
    cin>>n>>t>>c;
    for(i=1;i<=n;i++)
    cin>>a[i];
   long  k=1;
   for(i=1;i<c;i++)
    if(a[i]>t) st+=-1;
  for(i= c;i<=n;i++)
  {

      if(a[i]>t) st+=-1;
       if(st==0) cnt++;
      if(a[k++]>t) st+=1;

  }
cout<<cnt<<endl;
return 0;
}


 Conforces_Solutions: 447 DZY Loves Hash

#include<bits/stdc++.h>
using namespace std;
long k=-1,b[400],a[400],i=1,c,p,n;
int main()
{
    cin>>p>>n;
    while(n--)
    {
        cin>>a[i];
        a[i]=a[i]%p;
        b[a[i]]++;
        if(b[a[i]]==2&&c==0)
        {
            k=i;
            c=1;
        }
        i++;

    }
    cout<<k<<endl;
}


 Conforces_Solutions: 350 TL

#include<bits/stdc++.h>
using namespace std;
int i=1,k=1,n,m,a[200],b[200],ans;
int main()
{
    cin>>n>>m;
    while(n--) cin>>a[i++];
    while(m--) cin>>b[k++];
    sort(a+1,a+i);
    sort(b+1,b+k);
    ans=a[i-1];
    ans=max(a[1]*2,a[i-1]);
    if(b[1]>ans)
        cout<<ans<<endl;
    else cout<<-1<<endl;
}


 Conforces_Solutions: 4 Registration System

#include<bits/stdc++.h>
using namespace std;
map< string,int>mymap;
long n,nn;
string str[100005];
int main()
{

    cin>>n;
    nn=n;
    int i=0;

    while(n--)
    {
        cin>>str[i];
        mymap[str[i]]++;

        if(mymap[str[i]]==1)
        cout<<"OK"<<endl;
        else
        cout<<str[i]<<mymap[str[i]]-1<<endl;
        i++;
    }
    return 0;
    }


 Conforces_Solutions: 160 Unlucky Ticket

#include<bits/stdc++.h>
using namespace std;
char str[200];
int l,n,cnt,cnt2,i;
int main()
{
    cin>>n;
    scanf("%s",str);
    //int l=strlen(str);
    sort(str,str+n);
    sort(str+n,str+2*n);
     for(i=0;i<n;i++)
     {
         if(str[i]>str[i+n])
            cnt++;
         else if(str[i]<str[i+n]) cnt2++;
     }
     if(cnt==n||cnt2==n) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    //printf("%s",str);
    return 0;
}


 Conforces_Solutions: 129 Cookies

#include<bits/stdc++.h>
using namespace std;
int a[105],n,i,sum,cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=1;i<=n;i++)
    if((sum-a[i])%2==0)
            cnt++;

    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 451 Sort the Array

#include<bits/stdc++.h>
using namespace std;
long start,endd,i,a[100005],b[100005],c[100005],n,kk;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    sort(b+1,b+n+1);
    for(i=n;i>=2;i--)
    {
        if(a[i-1]>a[i])
        {
            endd=i;
            while(a[i-1]>a[i])
                i--;
            start=i;
            break;
        }
    }
    if(!start&&!endd)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    kk=endd;
    for(i=start;i<=endd;i++)
    c[i]=a[kk--];


    //sort(c+1,c+n+1);

    for(i=1;i<=n;i++)
    {
        if(b[i]!=c[i])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    cout<<start<<" "<<endd<<endl;
    return 0;
}


 Conforces_Solutions: 165 Supercentral Point

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
vector<PII>shivazi;
int cnt,i,n,a,b,j;
int main()
{
    int flag1,flag2,flag3,flag4;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        shivazi.push_back(make_pair(a,b));
    }
    for(i=0;i<n;i++)
    {
         flag1=flag2=flag3=flag4=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(shivazi[i].first==shivazi[j].first&&shivazi[i].second>shivazi[j].second)
                flag1=1;
                else if(shivazi[i].first==shivazi[j].first&&shivazi[i].second<shivazi[j].second)
                    flag2=1;
                    else if(shivazi[i].first>shivazi[j].first&&shivazi[i].second==shivazi[j].second)
                    flag3=1;
                    else if(shivazi[i].first<shivazi[j].first&&shivazi[i].second==shivazi[j].second)
                    flag4=1;

            }
        }
        if(flag1&&flag2&&flag3&&flag4)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 465 Inbox (100500)

#include<bits/stdc++.h>
using namespace std;
int cnt,i,b[1005],a[1005],k=1,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {cnt++;
        b[k++]=i;
        }
    }
    for(i=2;i<=k-1;i++)
    if(b[i]-b[i-1]>1)
            cnt++;
        cout<<cnt<<endl;

}


 Conforces_Solutions: 439 Devu, the Dumb Guy

#include<bits/stdc++.h>
using namespace std;
long long n,x,i,sum,a[100005];
int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
        if(x==1)
            sum+=a[i];
            else
            {
                sum+=a[i]*x;
                x--;
            }
    }
    cout<<sum<<endl;
}


 Conforces_Solutions: 404 Valera and X

#include<bits/stdc++.h>
using namespace std;
string str[305];
int n,i,j;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    cin>>str[i];

    //string st1=str[0][0];
    //string  st2=str[1][0];

    if(str[0][0]!=str[1][0])
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

                if(i==j&&str[i][j]!=str[0][0])
                {

                    cout<<"NO";
                    return 0;
                }
              else  if((i+j)==(n-1)&&str[i][j]!=str[0][0])
                {
                    //cout<<"Shivazi";
                    cout<<"NO";
                    return 0;
                }
                else if(i!=j&&(i+j)!=n-1&&str[i][j]!=str[1][0])
                {
                    cout<<"NO";
                    return 0;
                }


        }

       }
       cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
       return 0;
       }


 Conforces_Solutions: 479 Expression

#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a==1||b==1||c==1)
    {
        cout<<max(a*(b+c),max((a+b+c),(a+b)*c))<<endl;
        return 0;
    }
    cout<<a*b*c<<endl;

        return 0;

}


 Conforces_Solutions: 38 Army

#include<bits/stdc++.h>
using namespace std;
long aa[500],a,b,i,st,n;
int main()
{
    cin>>n;
    for(i=2;i<=n;i++)
    {
        cin>>st;
        aa[i]+=aa[i-1]+st;
    }
    cin>>a>>b;
    cout<<aa[b]-aa[a]<<endl;
}


 Conforces_Solutions: 158 Ice Sculptures

#include<bits/stdc++.h>
using namespace std;

long long n,i,t,a[20005],maxi=-200000000000,j,k;

int main()
{
    long long sum;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    int l=n/3;
    if(n==4) l=1;
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                sum=0;
                for(k=j;k<=n;k+=i)
                {
                    sum+=a[k];
                }
                //cout<<sum<<endl;
                if(sum>maxi)
                    maxi=sum;
            }
        }
    }
   cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 456 Laptops

#include<bits/stdc++.h>
using namespace std;
typedef pair<long,long>PII;
vector<PII>shivazi;
long n,i,a,b;
int main()
{
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a>>b;
    shivazi.push_back(make_pair(a,b));
}
sort(shivazi.begin(),shivazi.end());
  for(i=0;i<n-1;i++)
  {
      if(shivazi[i].second>shivazi[i+1].second)
      {
          cout<<"Happy Alex"<<endl;
          return 0;
      }
  }
  cout<<"Poor Alex"<<endl;

return 0;
}


 Conforces_Solutions: 246 Increase and Decrease

#include<bits/stdc++.h>
using namespace std;
long long n,sum,i,t,a;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {
    cin>>t;
    sum+=t;
    }
    if(sum<0)
        sum=sum*-1;

    if(sum%n==0) cout<<n<<endl;
    else cout<<n-1<<endl;
    return 0;
}


 Conforces_Solutions: 146 Lucky Ticket

#include<bits/stdc++.h>
using namespace std;
int n,sum,sum2;
string str;
int main()
{
    cin>>n;
    cin>>str;

    for(int i=0;i<str.size()/2;i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
           sum+=str[i]-48;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    for(int i=str.size()/2;i<str.size();i++)
    {
        if(str[i]=='4'||str[i]=='7')
        {
           sum2+=str[i]-48;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    if(sum==sum2)
    cout<<"YES";
    else cout<<"NO";
    //cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 476 Dreamoon and Stairs

#include<bits/stdc++.h>
using namespace std;
long i,n,cnt,q,p,m;
int main()
{
    cin>>n>>m;
    cnt=n/2;
    q=cnt;

    if(n%2) cnt++;

    for(int i=1;i<=10000;i++)
    {
        p=m*i;
        if(p>=cnt&&p<=cnt+q)
        {
            cout<<p<<endl;
            break;
        }
        if(p>cnt+q)
        {
            cout<<-1<<endl;
            break;
        }
    }
    return 0;
}


 Conforces_Solutions: 483 Diverse Permutation

#include<bits/stdc++.h>
using namespace std;
long long n,p,k,cnt,nn,i;

int main()
{
    cin>>n>>k;
    nn=n;
    if(k%2==0)
    {

        cnt=k/2;
        long p=n-cnt;
        long pp=cnt;
        long g=1;
        for(i=1;i<=n;i++)
        {
            if(i%2==0&&cnt!=0)
            {
                cout<<nn<<" ";
                nn--;
                cnt--;
                continue;
            }
            if(i<pp*2)
               {
                   cout<<g<<" ";
                   g++;
                   continue;
               }
            cout<<p<<" ";
            p--;
        }
    }
    else
    {
         cnt=k/2;
        long p=1;

        for(i=1;i<=n;i++)
        {
            if(i%2==0&&cnt!=0)
            {
                cout<<nn<<" ";
                nn--;
                cnt--;
                continue;
            }
            cout<<p<<" ";
            p++;
        }
    }


    return 0;

}



 Conforces_Solutions: 483 Counterexample 

#include<bits/stdc++.h>
using namespace std;
long long l,r;

int main()
{
   cin>>l>>r;
   if(l+2==r)
   {
       if(l%2==0)
       {
           cout<<l<<" "<<l+1<<" "<<l+2<<endl;
           return 0;
       }
       else cout<<-1<<endl;

   }
   else if(l+2>r)
   {
       cout<<-1<<endl;
       return 0;
   }

   else
   {
       if(l%2)
       {
           cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
           return 0;
       }
       else
       {
           cout<<l<<" "<<l+1<<" "<<l+2<<endl;
           return 0;
       }
   }
   // cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    return 0;

}



 Conforces_Solutions: 379 New Year Present

#include<bits/stdc++.h>
using namespace std;
int a,n,i,j;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i) cout<<"R";
        cin>>a;
        for(j=0;j<a;j++)
        {
            cout<<"P";
            if(i) cout<<"LR";
            else cout<<"RL";
        }
    }
    return 0;

}



 Conforces_Solutions: 216 Tiling with Hexagons

#include<bits/stdc++.h>
using namespace std;
long a,b,c;
int main()
{
    cin>>a>>b>>c;
    cout<<(a*b+b*c+c*a-a-b-c+1)<<endl;
    return 0;
}


 Conforces_Solutions: 401 Sereja and Contests

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,cnt[4004],a,b,c=0;
    while(cin>>n>>k)
    {
        c=0;
        memset(cnt,0,sizeof(cnt));
        while(k--)
        {
        cin>>m;
        if(m==1)
        {
            cin>>a>>b;
            cnt[a]++;
            cnt[b]++;
            c+=2;
        }
        else
        {
            cin>>a;
            cnt[a]++;
            c++;
        }
        }
        int cmin=0;
        for(int i=1;i<n;i++)
        {
            if(!cnt[i]){
            if(!cnt[i] && !cnt[i+1])
                i++;
            cmin++;
            }
        }
        cout<<cmin<<' '<<n-c-1<<endl;
    }
    return 0;
}


 Conforces_Solutions: 462 Appleman and Easy Task

#include<bits/stdc++.h>
using namespace std;
char a[105][105],ch;
int n,i,j;

int main()
{
    cin>>n;
      scanf("%c",&ch);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        cin>>a[i][j];
        scanf("%c",&ch);

    }
      if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }


      for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)

        {
        int cnt=0;


            if(a[i-1][j]=='o')
                cnt++;
            if(a[i+1][j]=='o')
            cnt++;
             if(a[i][j-1]=='o')
             cnt++;
             if(a[i][j+1]=='o')
             cnt++;
             if(cnt%2)
             {
                cout<<"NO"<<endl;
                return 0;
             }

        }
    }
    cout<<"YES"<<endl;

}


 Conforces_Solutions: 151 Soft Drinking

#include<bits/stdc++.h>
using namespace std;
int n,k,l,c,d,p,nl,np,x,y,z;
int main()
{
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l/nl;
    y=c*d;
    z=p/np;
  cout<<min(min(x,y),z)/n<<endl;
}


 Conforces_Solutions: 478 Random Teams

#include<bits/stdc++.h>
using namespace std;
long long n,m;
int main()
{
    cin>>n>>m;
   cout<< (m-(n%m))*((n/m)*((n/m)-1))/2+(n%m)*((n/m)*((n/m)+1))/2<<" "<<(n-m)*(n-m+1)/2;
   return 0;
}



 Conforces_Solutions: 478 Initial Bet

#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e;
int main()
{
    cin>>a>>b>>c>>d>>e;
    if(a+b+c+d+e==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if((a+b+c+d+e)%5==0)
        cout<<(a+b+c+d+e)/5<<endl;
    else
        cout<<-1<<endl;
    return 0;
}


 Conforces_Solutions: 474 Worms

#include<bits/stdc++.h>
using namespace std;
long p[1000005],a[100005],x[100005],st,sum[100005],n,m,i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {cin>>st;
          sum[i]=st+sum[i-1];
        }
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>x[i];
            a[i]=x[i];
        }
        sort(a+1,a+m+1);

        long k=1;

        for(i=1;i<=m;i++)
        {
            while(a[i]>sum[k])
             k++;
            p[a[i]]=k;
        }

        for(i=1;i<=m;i++)
        cout<<p[x[i]]<<endl;
return 0;
}


 Conforces_Solutions: 474 Keyboard

#include<bits/stdc++.h>
using namespace std;
int found1,found2,found3,i,l;
char st,ch;

string str1("qwertyuiop");
    string str2("asdfghjkl;");
    string str3("zxcvbnm,./");
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
        found2=str2.find(str4[i]);
        found3=str3.find(str4[i]);


       if(found1>0)
            cout<<str1[found1-1];


        found2=str2.find(str4[i]);

        if(found2>0)
            cout<<str2[found2-1];


     found3=str3.find(str4[i]);


         if(found3>0)
            cout<<str3[found3-1];



       // cout<<found1<<" "<<found2<<" "<<found3<<endl;


    }
    }
    else
    {
        for(i=0;i<l;i++)
    {
        found1=str1.find(str4[i]);

         if(found1>=0)
            cout<<str1[found1+1];


        found2=str2.find(str4[i]);

         if(found2>=0)
            cout<<str2[found2+1];


     found3=str3.find(str4[i]);

         if(found3>=0)
            cout<<str3[found3+1];


        //cout<<found1<<" "<<found2<<" "<<found3<<endl;

    }
    }
    return 0;
}


 Conforces_Solutions: 474 Keyboard

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


 Conforces_Solutions: 344 Simple Molecules

#include<bits/stdc++.h>
using namespace std;
long a,b,c;
int main()
{
    cin>>a>>b>>c;
    if((a+b-c)%2==0&&((a+b-c)/2)>-1&&(a+c-b)%2==0&&((a+c-b)/2)>-1&&(c+b-a)%2==0&&((c+b-a)/2)>-1)
    cout<<(a+b-c)/2<<" "<<(b+c-a)/2<<" "<<(a+c-b)/2<<endl;
    else
        cout<<"Impossible"<<endl;


}


 Conforces_Solutions: 475 Bayan Bus

#include<bits/stdc++.h>
using namespace std;
char str[50][50];

int i,j,n;

int main()
{
    cin>>n;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=15;j++)
        {
            if(i==1||i==6)
            {

                if(j==1||j==15)
                str[i][j]='1';
                else
                str[i][j]='2';

                    if(j==13||j==14)
                    str[i][j]='9';

            }
            if(i>=2&&i<=5)
            {
                if(j==1||j==15)
                {
                    str[i][j]='3';

            }
                if(j==13)
                {

                    if(i==4)
                    {
                        str[i][j]='4';

                       // printf(".");
                    }
                    else
                        str[i][j]='3';
                }

            }


            if(i==2&&j==14)
            {
                str[i][j]='5';
            }
            if(i>=3&&i<=5)
            {
                if(j==14)
                {
                    str[i][j]='4';

                }
            }
        }

    }

    int cnt=0;
    for(j=2;j<=12;j++)
    {
        for(i=2;i<=5;i++)
        {

                      if(i==4)
                    {
                        if(n>=3&&j==2)
                           {
                               str[i][j]='6';
                               cnt++;
                           }
                        else
                        {
                            if(j>2)
                            str[i][j]='8';
                        }


                    }

                    if(str[i][j]=='1')
                      ;
            else if(str[i][j]=='2')
                ;
            else if(str[i][j]=='3')
                ;
                else if(str[i][j]=='4')
                ;
                else if(str[i][j]=='5')
                ;
                else if(str[i][j]=='6')
                    ;

                    else if(str[i][j]=='8')
                        ;
                    else if(str[i][j]=='9')
                        ;
                    else
                    {

                    if(cnt<n&&i>=2&&i<=5)
                    {
                        str[i][j]='6';
                        cnt++;
                    }
                    //else
                        //str[i][j]='7';

                    }

                }




    }

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=15;j++)
    {

        if(str[i][j]=='1')
                printf("+");
            else if(str[i][j]=='2')
                printf("--");
            else if(str[i][j]=='3')
                printf("|");
                else if(str[i][j]=='4')
                printf(".");
                else if(str[i][j]=='5')
                printf("D");
                else if(str[i][j]=='6')
                    printf("O.");

                    else if(str[i][j]=='8')
                        printf("..");
                    else if(str[i][j]=='9')
                        printf("-");
                    else
                    printf("#.");

                 if(i==2||i==5)
                    if(j==15)
                    printf(")");

    }
    printf("\n");
    }
    return 0;
}



 Conforces_Solutions: 463 Caisa and Sugar


#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
vector<PII>shivazi;
int n,s,i,a,b;
int main()
{
    cin>>n>>s;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        shivazi.push_back(make_pair(a,b));

    }
    sort(shivazi.begin(),shivazi.end());
    int maxa=-1;
    for(i=n-1;i>=0;i--)
    {
              if(shivazi[i].first==s && shivazi[i].second==0)
         {
             maxa=max(0,maxa);
         }

        if(shivazi[i].first<s)
        {

             if(shivazi[i].second==0)
                {
            maxa=max(0,maxa);
            }
            else
            {
                maxa=max(100-shivazi[i].second,maxa);
            }
        }
    }
    cout<<maxa<<endl;
}


 Conforces_Solutions: 445 DZY Loves Chessboard

#include<bits/stdc++.h>
using namespace std;
int n,m,i,j;

char a[200][200],ch;
int main()
{
    cin>>n>>m;
    scanf("%c",&ch);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {

            scanf("%c",&a[i][j]);

        if(a[i][j]=='-')
        printf("%c",a[i][j]);
        else
        {
          if((i+j)%2)
            printf("W");
          else printf("B");
    }
}

printf("\n");
scanf("%c",&ch);
    }
    return 0;
}


 Conforces_Solutions: 465 inc ARG

#include<bits/stdc++.h>
using namespace std;
char str[200];
int cnt,i,n;
int main()
{
    cin>>n;
    cin>>str;

        if(str[0]=='0')
        {
            cout<<1<<endl;
            return 0;
        }
        else
        {
            while(str[i]=='1')
            {
                i++;
                cnt++;
            }
            if(cnt<n)
                cnt++;
        }
        cout<<cnt<<endl;
}


 Conforces_Solutions: 432 Choosing Teams

#include<bits/stdc++.h>
using namespace std;
int a[2005],n,k,i,cnt;
int main()
{
    cin>>n>>k;
    if(n<3)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=1;i<=n;i++)
       {
    cin>>a[i];
    a[i]+=k;
    }
    sort(a+1,a+n+1);
    for(i=1;i<=n-3+1;i+=3)
    {

        if(a[i]<=5&& a[i+1]<=5 &&a[i+2]<=5 )
            cnt++;
        else
            break;
    }
    //cout<<i<<endl;
    cout<<cnt<<endl;
}


 Conforces_Solutions: 472 Design Tutorial Make It Nondeterministic

#include<bits/stdc++.h>
using namespace std;
typedef pair<string,string>PII;
vector<PII>shivazi;
long n,i,t[100005],tt;
string str1,str2;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str1>>str2;
        shivazi.push_back(make_pair(str1,str2));
    }
    for(i=0;i<n;i++)
    cin>>t[i];
    tt=t[0];

    string tem,mina,maxa;

    tem=min(shivazi[tt-1].first,shivazi[tt-1].second);
    //cout<<tem<<endl;

    for(i=1;i<n;i++)
    {
       mina= min(shivazi[t[i]-1].first,shivazi[t[i]-1].second);
      maxa= max(shivazi[t[i]-1].first,shivazi[t[i]-1].second);


        if(mina<tem&&maxa<tem)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(tem<mina&&tem<maxa)
            tem=mina;
        else tem=maxa;

        //tem=min(shivazi[t[i]-1].first,shivazi[t[i]-1].second);
        //cout<<tem<<endl;
    }
    cout<<"YES"<<endl;

    return 0;

}


 Conforces_Solutions: 381 Sereja and Dima

#include<bits/stdc++.h>
using namespace std;
long n,i,cnt,a[1005],sum,sum2,j;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    i=1;j=n;
    while(i!=j)
    {
        cnt++;
        if(cnt%2)
        {
            if(a[i]>a[j])
            {
                sum+=a[i];
                i++;
            }
            else {sum+=a[j];
            j--;
            }
        }
                if(cnt%2==0)
        {
            if(a[i]>a[j])
            {
                sum2+=a[i];
                i++;
            }
            else {sum2+=a[j];
            j--;
            }
        }
    }
    if(n%2)
        sum+=a[j];
        else sum2+=a[j];
    cout<<sum<<" "<<sum2<<endl;
    return 0;
}


 Conforces_Solutions: 385 Bear and Raspberry

#include<bits/stdc++.h>
using namespace std;
int n,c,i,a[200],tem,maxa;
int main()
{
    cin>>n>>c;
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=1;i<=n-1;i++)
    {
        if(a[i]>a[i+1])
            tem=a[i]-a[i+1]-c;
        if(tem>maxa)
            maxa=tem;
    }
    cout<<maxa<<endl;
}



 Conforces_Solutions: 25 IQ test

#include<bits/stdc++.h>
using namespace std;
long int cnt,cnt2,i,a[304],n;
int main()
{
    cin>>n;
    int p,p1;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2)
        {
            cnt++;
             p=i;
        }
        else
        {
            cnt2++;
            p1=i;
        }
    }
   if(cnt==1)
    cout<<p<<endl;
   else cout<<p1<<endl;
    return 0;
}


 Conforces_Solutions: 450 Jzzhu and Children

#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>PII;
vector<PII>shivazi;
int n,m,i,t,ans;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        ans=(t/m);
        if(t%m)
        ans++;
        shivazi.push_back(make_pair(ans,i));
    }
    sort(shivazi.begin(),shivazi.end());
    cout<<shivazi[n-1].second<<endl;
}


 Conforces_Solutions: 441 Valera and Antique Items

#include<bits/stdc++.h>
using namespace std;
long a,n,price,maxa,j,i,t,cnt[100];
int main()
{
    int k=1;
    cin>>n>>price;
    for(i=1;i<=n;i++)
    {
        cin>>a;
       int c=0;
        for(j=1;j<=a;j++)
           {
               cin>>t;
            if(t<price)
                c=1;
                }
            if(c==1)
            cnt[k++]=i;
    }
    cout<<k-1<<endl;
    for(i=1;i<=k-1;i++)
    cout<<cnt[i]<<" ";
    cout<<endl;
    return 0;
}


 Conforces_Solutions: 472 Design Tutorial Learn from Life

#include<bits/stdc++.h>
using namespace std;
long long sum,a[2005],b[2005],n,k,i,sum2;

int main()
{
    int t;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+n+1);

    for(i=n;i>=1;i-=k)
      sum+=(a[i]-1)*2;

        cout<<sum<<endl;
        return 0;
        }


 Conforces_Solutions: 472 Design Tutorial Learn from Math

#include<bits/stdc++.h>
using namespace std;
long long a,b,n,i,j,c,c1,cnt,cnt2;
int main()
{
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        cnt=cnt2=0;
        c=c1=0;
        a=i;
        b=n-i;
        for(j=2;j<=sqrt(a);j++)
        {
            if(a%j==0)
            {
                cnt=a;
                c=1;
                break;
            }
        }
         for(j=2;j<=sqrt(b);j++)
        {
            if(b%j==0)
            {
                cnt2=b;
                c1=1;
                break;
            }
        }
        if(c==1&&c1==1)
           {

            cout<<cnt<<" "<<cnt2<<endl;
            break;
            }



    }

}


 Conforces_Solutions: 459 Pashmak and Flowers

#include<bits/stdc++.h>
using namespace std;
long long a[200005],i,n,cnt1,cnt2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    int i=1;
    while(a[i]==a[1])
    {
        cnt1++;
        i++;
    }
    i=n;
    while(a[i]==a[n])
    {
        cnt2++;
        i--;
    }
    if(cnt1==n||cnt2==n)
    cout<<"0 "<<(cnt1*(cnt1-1))/2<<endl;
    else cout<<a[n]-a[1]<<" "<<cnt1*cnt2<<endl;

    return 0;
}


 Conforces_Solutions: 459 Pashmak and Garden

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;

    cin>>x1>>y1>>x2>>y2;
    if(abs(x1-x2)==abs(y1-y2)&&y1-y2!=0)
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    else if(abs(x1-x2)==0)
    cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x1+abs(y1-y2)<<" "<<y2<<endl;
    else if(abs(y1-y2)==0)
        cout<<min(x1,x2)<<" "<<y1+abs(x1-x2)<<" "<<max(x1,x2)<<" "<<y1+abs(x1-x2)<<endl;
    else cout<<-1<<endl;
    return 0;
}


 Conforces_Solutions: 454 Little Pony and Crystal Mine

#include<bits/stdc++.h>
using namespace std;

char a[200][200];
int n,i,j;
int main()
{
    cin>>n;
    int l=n/2;
    for(i=1;i<=l;i++)
    for(j=1;j<=l+1-i;j++)
            a[i][j]='*';

        for(i=1;i<=n/2;i++)
        for(j=(n/2)+i+1;j<=n;j++)
            a[i][j]='*';

    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=n;j++)
        {
        if(a[i][j]=='*')
        printf("%c",a[i][j]);
        else
        printf("D");
    }
    //cout<<endl;
    printf("\n");
    }

    for(i=1;i<=n;i++)
        cout<<"D";
    cout<<endl;
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=n;j++)
            if(a[i][j]!='*')
            cout<<"D";
        else cout<<"*";
        cout<<endl;
    }

return 0;
}


 Conforces_Solutions: 471 MUH and Sticks

#include<bits/stdc++.h>
using namespace std;
int i,a[10],j,k,t;
int main()
{
    for(i=1;i<=6;i++)
    cin>>a[i];
    sort(a+1,a+7);
    int cc=0;
    for(i=1;i<=3;i++)
    {
        if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i+2]==a[i+3])
        {
            a[i]=a[i+1]=a[i+2]=a[i+3]=0;
            t=a[i];
            for(j=1;j<=6;j++)
            {
                if(a[j]!=0)
                {
                    int c=0;
                    for(k=j+1;k<=6;k++)
                    {
                        if(a[k]==a[j])
                           {
                        cout<<"Elephant"<<endl;
                        c=1;
                        }
                    }
                    if(c==0)
                    {
                        cout<<"Bear"<<endl;

                    }
                    break;

                }

            }
            cc=1;
            break;
        }
    }
    if(cc==0)
        cout<<"Alien"<<endl;
        return 0;


}


 Conforces_Solutions: 471 MUH and Important Things

#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;
vector<PII>shivazi;
int cnt=0,i,kk;
int main()
{
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
     int a[i];
    cin>>a[i];
    shivazi.push_back(make_pair(a[i],i));
    }

    sort(shivazi.begin(),shivazi.end());

   // for(i=0;i<n;i++)
   // cout<<shivazi[i].first<<" "<<shivazi[i].second+1<<endl;

 for(i=0;i<n;i++)
 if(shivazi[i].first==shivazi[i+1].first)
 cnt++;

    if(cnt<2)
        {
    cout<<"NO"<<endl;
    return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
            cout<<shivazi[i].second+1<<" ";
            cout<<endl;
       for(i=0;i<n;i++)
       {
           if(shivazi[i].first==shivazi[i+1].first)
           {
               swap(shivazi[i].second,shivazi[i+1].second);
               kk=i;
               break;
           }
       }

        for(i=0;i<n;i++)
        cout<<shivazi[i].second+1<<" ";
        cout<<endl;

           for(i=0;i<n;i++)
       {
           if(shivazi[i].first==shivazi[i+1].first&&i!=kk)
           {
               swap(shivazi[i].second,shivazi[i+1].second);
               break;
           }
       }
         for(i=0;i<n;i++)
        cout<<shivazi[i].second+1<<" ";

    }
return 0;
}


 Conforces_Solutions: 461 Appleman and Toastman

#include<bits/stdc++.h>
using namespace std;
long long n,a[300005],sum,sum2,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {cin>>a[i];
        sum2+=a[i];}
    sort(a+1,a+n+1);
    if(n==1)
        cout<<a[1]<<endl;
    else if(n==2)
        cout<<2*(a[1]+a[2])<<endl;
    else
    {

    long k=1;
    for(i=2;i<=n-1;i++)
    sum+=a[i]*k++;

    sum+=2*sum2+a[n]*(k-1);

    cout<<sum<<endl;
    }
}


 Conforces_Solutions: 221 Little Elephant and Function

#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    cout<<n<<" ";
    for(int i=1;i<=n-1;i++)
        cout<<i<<" ";
    return 0;
}


 Conforces_Solutions: 450 Jzzhu and Sequences

#include<bits/stdc++.h>
using namespace std;
long long x,y,n,t;
int main()
{
    cin>>x>>y;
    cin>>n;
    if(n==1)
    {
       t=x;
       t=t%1000000007;
       if(t<0)
           t= t+1000000007;
       cout<<t<<endl;
    }
   else if(n==2)
    {
        t=y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
        cout<<t<<endl;
    }
    else
    {
        if(n%3==0&&(n/3)%2==1)
           {
            t=y-x;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
           else if(n%3==0&&(n/3)%2==0)
           {
            t=x-y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==1&&(n/3)%2==1)
           {
            t=-x;
            t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==1&&(n/3)%2==0)
           {
            t=x;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==2&&(n/3)%2==1)
           {
            t=-y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
            else if(n%3==2&&(n/3)%2==0)
           {
            t=y;
        t=t%1000000007;
        if(t<0)
        t=t+1000000007;
           }
           cout<<t<<endl;

    }
    return 0;
}


 Conforces_Solutions: 131 Opposites Attract

#include<bits/stdc++.h>
using namespace std;
long long n,i,t,cnt,sum,a[20],b[20];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t==0)
            cnt++;
        else if(t<0)
            b[t*-1]++;
        else a[t]++;
    }
    for(i=1;i<=10;i++)
    sum+= a[i]*b[i];
    sum+=(cnt*(cnt-1))/2;
    cout<<sum<<endl;

}


 Conforces_Solutions: 347 Fixed Points

#include<bits/stdc++.h>
using namespace std;

long a[100005],i,n,c,cnt;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
      {
          cin>>a[i];
         if(a[i]==i)
                cnt++;
      }
        for(i=0;i<n;i++)
        {
           if(a[i]!=i)
            if(a[a[i]]==i)
                c=1;
        }
        //cout<<cnt<<endl;

        if(cnt==n)
            cout<<cnt<<endl;
            else if(c==1)
            cout<<cnt+2<<endl;
        else cout<<cnt+1<<endl;
        return 0;

}


 Conforces_Solutions: 389 Fox and Number Game

#include<bits/stdc++.h>
using namespace std;
int a[200],n,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=2;i<=n;i++)
    a[i]=__gcd(a[i-1],a[i]);
    cout<<n*a[n]<<endl;

}


 Conforces_Solutions: 224 Parallelepiped

#include<bits/stdc++.h>
using namespace std;
int a,b,c,t,t1,t2;
int main()
{
    cin>>a>>b>>c;
   int t= sqrt((a*c)/b)+sqrt((b*a)/c)+sqrt((c*b)/a);
   cout<<t*4<<endl;
    return 0;
}


 Conforces_Solutions: 460 Little Dima and Equation

#include<bits/stdc++.h>
using namespace std;

long a,b,c,i,j,cnt,tt,k;
long ans[500];
long long sum2;

int main()
{
    cin>>a>>b>>c;
    for(i=1;i<=81;i++)
    {
        tt=0;
        long long sum=1;
        for(j=1;j<=a;j++)
        sum=sum*i;
        sum=b*sum+c;
        sum2=sum;
           while(sum2!=0)
           {
               tt+=sum2%10;
               sum2/=10;
           }

        if(sum>=1&&sum<=999999999&&tt==i)
        {

            cnt++;
            ans[k++]=sum;
        }

    }
    cout<<cnt<<endl;
    for(i=0;i<cnt;i++)
    cout<<ans[i]<<" ";
    return 0;
}


 Conforces_Solutions: 84 Toy Army

#include<bits/stdc++.h>
using namespace std;
long n;
int main()
{
    cin>>n;
    cout<<(n*3)/2<<endl;
}


 Conforces_Solutions: 92 Chips

#include<bits/stdc++.h>
using namespace std;
long n,m,s,t;
int main()
{
    cin>>n>>m;
    s=n*(n+1)/2;
    if(m>s)
      m= m- (m/s)*s;
    t=(sqrt(m*8+1)-1)/2;
    cout<<m-(t*(t+1))/2<<endl;
}


 Conforces_Solutions: 463 Caisa and Pylons

#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,i,test,ans,eng;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        test=a[i]-a[i+1];
        if(test+eng<0)
        {
            ans+=(test+eng)*-1;
            eng=0;
        }
        else eng=eng+test;

    }

        cout<<ans+a[1]<<endl;

}


 Conforces_Solutions: 272 Dima and Friends

#include<bits/stdc++.h>
using namespace std;
int n,i,sum,cnt,t;
int main()
{
    cin>>n;
for(i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
    }
    for(int i=1;i<=5;i++)
    if((sum+i)%(n+1)!=1)
            cnt++;
        cout<<cnt<<endl;

}


 Conforces_Solutions: 340 The Wall

#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,cnt;

int main()
{
    cin>>x>>y>>a>>b;
    long grab=__gcd(x,y);
    grab=(x*y)/grab;

   cnt= a/grab;
   if(a%grab==0) cnt--;
    cout<<(b/grab)-cnt<<endl;
    return 0;
}


 Conforces_Solutions: 336 Vasily the Bear and Triangle

#include<bits/stdc++.h>
using namespace std;
long x,y;
int main()
{
    cin>>x>>y;
    if(x>0&&y>0)
        cout<<"0 "<<x+y<<" "<<x+y<<" "<<0<<endl;
    else if(x<0&&y>0)
        cout<<x+y*-1<<" 0 0 "<<x*-1+y<<endl;
    else if(x<0&&y<0)
        cout<<x+y<<" 0 0 "<<x+y<<endl;
    else cout<<"0 "<<x*-1+y<<" "<<x+y*-1<<" 0"<<endl;
    return 0;
}


 Conforces_Solutions: 114 Cifera

#include<bits/stdc++.h>
using namespace std;
long long k,l,test,cnt;
int main()
{
    cin>>k>>l;
    test=k;
    if(k==l)
    {
        cout<<"YES"<<endl<<0<<endl;
        return 0;
    }
    for(;;)
    {
        cnt++;
        test*=k;
        if(test==l)
        {
            cout<<"YES"<<endl<<cnt<<endl;
            break;
        }
        if(test>l)
            {cout<<"NO"<<endl;
            break;
            }
    }

        return 0;
}


 Conforces_Solutions: 466 Number of Ways

#include<bits/stdc++.h>
using namespace std;
long long a[1000000],cnt,cnt2,i,n,j,t,t2,sum2,cnt3;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        a[i]=a[i-1]+t;
        if(a[i]==0)
            cnt3++;
        //cout<<a[i]<<" ";
    }
    if(a[n]==0)
    {
        cout<<(cnt3-2)*(cnt3-1)/2<<endl;
        return 0;
    }
    if(a[n]%3!=0)
    {cout<<0<<endl;
    return 0;
    }
    else
    {
        t=a[n]/3;
        t2=2*t;
    }
    for(i=n-1;i>=1;i--)
    {
        if(a[i]==t2)
            cnt++;
        if(a[i]==t &&t2!=0)
            sum2+=cnt;
    }

    cout<<sum2<<endl;
    return 0;

}


 Conforces_Solutions: 466 Cheap Travel

#include<bits/stdc++.h>
using namespace std;
int sum,a,b,m,n,c;
int main()
{
    cin>>n>>m>>a>>b;
    if(float(b/m)<a*1.0)
        sum+=b*(n/m);
    else
        {
    sum+=a*n;
   // cout<<sum<<endl;
    c=1;
    }
    if(!c)
    {
        if(b>a*(n%m))
            sum+=a*(n%m);
        else sum+=b;
    }
    cout<<sum<<endl;
    return 0;
}


 Conforces_Solutions: 468 24 Game

#include<bits/stdc++.h>
using namespace std;
long n,i;
int main()
{
    cin>>n;
    if(n<=3)
        cout<<"NO"<<endl;
    else if(n==4)
    {
        cout<<"YES"<<endl;
        cout<<"1 * 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
    else if(n==5)
    {
        cout<<"YES"<<endl;
        cout<<"5 - 1 = 4"<<endl;
        cout<<"4 - 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
   else if(n==6)
    {
        cout<<"YES"<<endl;
        cout<<"6 - 5 = 1"<<endl;
        cout<<"1 - 1 = 0"<<endl;
        cout<<"2 + 0 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
    else if(n==7)
    {
        cout<<"YES"<<endl;
        cout<<"7 - 6 = 1"<<endl;
        cout<<"5 - 1 = 4"<<endl;
        cout<<"4 * 1 = 4"<<endl;
         cout<<"4 - 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<n<<" - "<<n-1<<" = "<<1<<endl;
        cout<<n-2<<" - "<<1<<" = "<<n-3<<endl;
        cout<<n-3<<" - "<<n-3<<" = "<<0<<endl;

        for(i=n-4;i>=5;i--)
        cout<<i<<" * 0 = 0"<<endl;

        cout<<"1 + 0 = 1"<<endl;
          cout<<"1 * 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;



    }

    return 0;
}


 Conforces_Solutions: 469 Chat Online

#include<bits/stdc++.h>
using namespace std;
int p,q,l,r,i,ans[2050],ans2[2050],cnt,a,b,j;

int main()
{
    cin>>p>>q>>l>>r;
    while(p--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
            ans[i]++;
    }
    while(q--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
        ans2[i]++;
    }
    for(i=l;i<=r;i++)
    {
        for(j=0;j<=1000;j++)
        {
            if(ans2[j])
            {
                if(ans[j+i])
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
}


 Conforces_Solutions: 469 I Wanna Be the Guy

#include<bits/stdc++.h>
using namespace std;
set< int >myset;
int p,q,t,n;
int main()
{
    cin>>n;
    cin>>p;
    while(p--)
    {
        cin>>t;
        myset.insert(t);
    }
    cin>>q;
    while(q--)
    {
        cin>>t;
        myset.insert(t);
    }
   if(myset.size()==n)
    cout<<"I become the guy."<<endl;
   else cout<<"Oh, my keyboard!"<<endl;
   return 0;
}


 Conforces_Solutions: 467 George and Job

#include<bits/stdc++.h>
using namespace std;
long long fact[5005][5005],n,m,k,i,a[5005],b[5005],j;

int main()
{
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
        b[m]+=a[i];

        for(i=m+1;i<=n;i++)
        b[i]=b[i-1]+a[i-1]-a[i-1-m];

        for(i=0;i<=n;i++)
        for(j=0;j<=k;j++)
        fact[i][j]=-1000000000000000000LL;

        for(i=0;i<=n;i++)
            fact[i][0]=0;


    for(i=m;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
           fact[i][j]= fact[i-1][j];
           fact[i][j]=max(fact[i][j],fact[i-m][j-1]+b[i]);
        }
    }
    cout<<fact[n][k]<<endl;
}


 Conforces_Solutions: 467 George and Job

#include<bits/stdc++.h>
using namespace std;
long long a[5010], b[5010], f[5010][5010];

int main()
{
    int n, m, k;
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
    cin >> a[i];

	for (int i = 0; i < m; i++)
    b[m] += a[i];

	for (int i = m+1; i <= n; i++)
    b[i] = b[i-1]+a[i-1]-a[i-1-m];

	for (int i = 0; i <= n; i++)
    for (int j = 0; j <= k; j++)
    f[i][j] = -1000000000000000000LL;


	for (int i = 0; i <= n; i++)
        f[i][0] = 0;

	    for (int i = m; i <= n; i++)
		for (int j = 1; j <= k; j++)
            {

			//if (i > 0)
            f[i][j] = f[i-1][j];

			f[i][j] = max(f[i][j], f[i-m][j-1]+b[i]);
		}
	    cout << f[n][k] << endl;

	return 0;
}


 Conforces_Solutions: 467 Fedor and New Game

#include<bits/stdc++.h>
using namespace std;

long n,m,k,cnt2,i,j,a[2000];
int main()
{
    long cnt,nn;
    cin>>n>>m>>k;
    for(i=1;i<=m+1;i++)
        cin>>a[i];
    for(i=1;i<=m;i++)
    {
        nn=a[m+1];
        cnt=0;
        for(j=1;j<=n;j++)
        {
            if(a[i]%2==0&&nn%2!=0)
            cnt++;
            else  if(a[i]%2!=0&&nn%2==0)
                cnt++;
            a[i]=a[i]/2;
            nn=nn/2;
        }
        if(cnt<=k)
            cnt2++;
    }
    cout<<cnt2<<endl;
    return 0;
}



 Conforces_Solutions: 467 George and Accommodation

#include<bits/stdc++.h>
using namespace std;
int a,b,n,cnt;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(b-a>=2)
            cnt++;
    }
    cout<<cnt<<endl;
}


 Conforces_Solutions: 1 Spreadsheet

#include<bits/stdc++.h>
using namespace std;

long bb[]={1,26,676,17576,456976};
int aa[200],alpha[50],t[50],test;

int main()
{
    int p=1,B=65;


    for(int i=65;i<=97;i++)
    aa[i]=p++;
    for(int i=1;i<=26;i++)
    alpha[i]=B++;

    cin>>test;

    while(test--)
    {
         string str,a,b,c;
         memset(t,0,sizeof(t));

     long cc=0,papo=1,kit=0;
     long sum=0,inta,ka,xx;
      int i=0;

    cin>>str;
    int l=str.size();


    for(i=0;i<l;i++)
    {
        if( str[i]>='A' && str[i] <='Z' )
        a+=str[i];

        else
        {
          for(int j=i;j<l;j++)
            b+=str[j];
            break;
        }
    }

  int k= b.find('C');
  if(k==-1)
  {
      cout<<"R"<<b;

       int kk=0;
       int pp=a.size()-1;
      for(i=pp;i>=0;i--)
      {sum+=aa[a[pp--]]*bb[kk];
      kk++;
      }

      cout<<"C"<<sum<<endl;
      }
  else
  {

      for(i=k+2;i<l;i++)
        c+=str[i];
      //stringstream(c) >> inta;
      inta = atol(c.c_str());

      while(inta!=0)
      {
          if(inta%26==0)
          {
              t[kit++]=26;
              inta=inta-26;
              inta=inta/26;
          }
          else
          {
              t[kit++]=inta%26;
              inta=inta-(inta%26);
              inta=inta/26;
          }
      }



          for(i=kit-1;i>=0;i--)
          printf("%c",alpha[t[i]]);




                                for(i=1;i<=k;i++)
                                cout<<str[i];
                                 cout<<endl;


                          }


            }

    return 0;
}


 Conforces_Solutions: 141 Hopscotch

#include<bits/stdc++.h>
using namespace std;
long a,x,y,xx;

int main()
{
    cin>>a>>x>>y;

    if(y%a==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    else
    {
        xx=(y/a)+1;
        if(xx%2==0)
        {
            if((float)x<float(a/2.0)&&(float)x>float (-a/2.0))
            {
                cout<<(2+((xx/2)-1)*3);
                return 0;
            }
            else
            {
                cout<<-1<<endl;
                return 0;
                }
    }
    else
    {
        if(xx==1)
        {
            if((float)x<float(a/2.0)&&(float)x>float (-a/2.0))
            {
                cout<<1<<endl;
                return 0;
            }
            else cout<<-1<<endl;

        }
        else
        {
            if(x>0&&x<a)
            {
                cout<<(4+((xx/2)-1)*3);
                return  0;
            }
            else if(x>-a&&x<0)
            {
                cout<<(3+((xx/2)-1)*3);
                return  0;

            }
            else
                cout<<-1<<endl;
        }


    }

}
return 0;
}


 Conforces_Solutions: 233 Perfect Permutation

#include<bits/stdc++.h>
using namespace std;

using namespace std;
int n,i;
int main()
{
    cin>>n;
    if(n%2)
        cout<<-1<<endl;
    else
    {
        for(i=2;i<=n;i+=2)
        {
            cout<<" "<<i<<" "<<i-1;

        }
    }
    return 0;
}


 Conforces_Solutions: 200 Drinks

#include<bits/stdc++.h>
using namespace std;
int n,a,sum,i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    float ans=float(sum/(n*100.000));
    printf("%f\n",ans*100.00);
    return 0;
}


 Conforces_Solutions: 460 Vasya and Socks

#include<bits/stdc++.h>
using namespace std;

int sum,n,m,nn;
int main()
{
    cin>>n>>m;
    nn=n/m;
    sum=n+nn;
    nn=nn+n%m;
    if(n)

    while(nn/m!=0)
    {

        sum=sum+nn/m;
        nn=nn/m+nn%m;
    }
    cout<<sum<<endl;
    }


 Conforces_Solutions: 439 Devu, the Singer and Churu, the Joker

#include<bits/stdc++.h>
using namespace std;
long n,d,i,sum,t;
int main()
{
    cin>>n>>d;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
    }
    if(sum+(n-1)*10>d)
        cout<<-1<<endl;
    else
    {
        d=d-sum;
        cout<<d/5<<endl;
    }
    return 0;
}


 Conforces_Solutions: 456 Fedya and Maths

#include<bits/stdc++.h>
using namespace std;
char str[1000005];
long long l,x;
int main()
{
    cin>>str;
    l=strlen(str);
    if(l==1)
    {
        if((str[0]-48)%4==0)
            cout<<4<<endl;
        else cout<<0<<endl;

    }
    else
    {
       x= (str[l-2]-48)*10+(str[l-1]-48);
       if(x%4==0)
        cout<<4<<endl;
       else cout<<0<<endl;
    }
    return 0;

}


 Conforces_Solutions: 276 Lunch Rush

#include<bits/stdc++.h>
using namespace std;
long long n,k,i,maxi=-10000000000,f,t;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>f>>t;
        if(t>k)
            f=f-(t-k);
            if(maxi<f)
                maxi=f;
    }
    cout<<maxi<<endl;
}


 Conforces_Solutions: 59 Word

#
#include<bits/stdc++.h>
using namespace std;
string str;
int cnt,i,cnt1;
int main()
{
    cin>>str;
    for(i=0;i<str.size();i++)
        if(str[i]>='a'&&str[i]<='z')
        cnt++;
        else cnt1++;
        if(cnt1>cnt)
         transform(str.begin(),str.end(),str.begin(),::toupper);
         else transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
}


 Conforces_Solutions: 352 Jeff and Digits

#include<bits/stdc++.h>
using namespace std;
int n,i,cnt,cnt1,x,a;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a==5) cnt++;
        else cnt1++;
    }
    x=cnt/9;
    x*=9;
    if(cnt1==0)
    {cout<<-1<<endl;
    return 0;
    }
    for(i=1;i<=x;i++)
        cout<<5;
    if(x==0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
        for(i=1;i<=cnt1;i++)
        cout<<0;
    return 0;
}


 Conforces_Solutions: 431 Black Square

#include<bits/stdc++.h>
using namespace std;
long long sum,a,b,c,d,i;
char str[100050];
int main()
{
    cin>>a>>b>>c>>d;
    cin>>str;
    long l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='1')
            sum+=a;
        else if(str[i]=='2')
            sum+=b;
        else if(str[i]=='3')
            sum+=c;
        else sum+=d;
    }
    cout<<sum<<endl;

}


 Conforces_Solutions: 214 System of Equations

#include<bits/stdc++.h>
using namespace std;

int n,m,a,b,cnt,x;

int main()
{
    cin>>n>>m;
    for(a=0;a<=100;a++)
    {
        for(b=0;b<=100;b++)
        {
            if(a*a+b==n&& b*b+a==m)
               {
                   cnt++;
                   //cout<<a<<b;

               }
            else if(x>(n+m))
                break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 37 Towers

#include<bits/stdc++.h>
using namespace std;
int a[1050],aa[1050],ans,n,i,k,maxi=-1;

set<int>myset;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        aa[a[i]]++;
        myset.insert(a[i]);
    }

    for(i=0;i<=1000;i++)
    {
        if(aa[i]>maxi)
            maxi=aa[i];
}

cout<<maxi<<" ";
cout<<myset.size()<<endl;

    return 0;

}



 Conforces_Solutions: 401 Vanya and Cards

#include<bits/stdc++.h>
using namespace std;
int  n,x,i,sum,ans,a;
int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum<0) sum*=-1;
    ans=sum/x;
    if(sum%x)
        ans++;
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 443 Anton and Letters

#include<bits/stdc++.h>
using namespace std;
char input[1050];
set<char>myset;
int main()
{

cin.getline(input,1050);
for(int i=0;i<=1050;i++)
    if(input[i]>='a' && input[i]<='z')
    myset.insert(input[i]);

   cout<<myset.size()<<endl;
return 0;

}


 Conforces_Solutions: 124 The number of positions

#include<bits/stdc++.h>
using namespace std;
int n,a,b,i,cnt;
int main()
{
    cin>>n>>a>>b;
    for(i=0;i<=n;i++)
    if(i>a&&(n-i)<=b)
            cnt++;
        cout<<cnt<<endl;
        return 0;


}


 Conforces_Solutions: 448 Rewards

#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,b1,b2,b3,sum1,sum2,ans,ans1,n;
int main()
{
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    cin>>n;
    sum1=a1+a2+a3;
    sum2=b1+b2+b3;

    ans=sum1/5;
    if(sum1%5)
    ans++;
    ans1=sum2/10;
    if(sum2%10) ans1++;
    if((ans+ans1)<=n)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;


}


 Conforces_Solutions: 405 Gravity Flip

#include<bits/stdc++.h>
using namespace std;
int n,i,a[500];
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}


 Conforces_Solutions: 451 Game With Sticks

#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    if(min(n,m)%2)
        cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
    return 0;
}


 Conforces_Solutions: 427 Police Recruits

#include<bits/stdc++.h>
using namespace std;
long a[100005],n,i,police,cnt,m;
int main()
{
    cin>>n;
    m=n;
    while(m--)
    cin>>a[i++];
    for(i=0;i<n;i++)
    {
        if(a[i]<0&&police==0)
            cnt++;
        else if(a[i]<0&&police>0)
            police--;
        else police+=a[i];
    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 313 Ilya and Bank Account

#include<bits/stdc++.h>
using namespace std;
long n,a,b;
int main()
{
    cin>>n;
    if(n>=10)
    {
        cout<<n<<endl;
        return 0;
    }
    else
    {
        n=n*-1;
        a=n/10;
        b=(n/100)*10+(n%10);
        if(a<b)
            cout<<(a*-1)<<endl;
        else cout<<(b*-1)<<endl;
    }
    return 0;
}


 Conforces_Solutions: 118 Present from Lena

#include<bits/stdc++.h>
using namespace std;
int i,n,j,k;
int main()
{
    cin>>n;
    k=n*2;

    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<=k;j++)
            cout<<" ";

            k-=2;

    for(j=0;j<i;j++)
    {
        if(j==0)
        printf("%d",j);
        else printf(" %d",j);
    }
    for(j=i-2;j>=0;j--)
        printf(" %d",j);

    cout<<endl;
    }
      k=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
            printf(" ");
            k+=2;

            for(j=0;j<=n-i;j++)
                if(j==0)
                cout<<j;
            else printf(" %d",j);

            for(j=n-(i+1);j>=0;j--)
                printf(" %d",j);
        cout<<endl;
    }
    return 0;
}


 Conforces_Solutions: 149 Business trip

#include<bits/stdc++.h>
using namespace std;

int k,i,cnt,a[200],sum,n;

int main()
{
    cin>>k;
    for(i=1;i<=12;i++)
        cin>>a[i];

        if(k==0)
        {
            cout<<0<<endl;
            return 0;
        }

    sort(a+1,a+1+12);

    for(i=12;i>=1;i--)
    {
        sum+=a[i];
        if(sum<k)
            cnt++;
        else
            break;
    }
    if(i==0)
        cout<<-1<<endl;
    else
    cout<<cnt+1<<endl;
    return 0;
}


 Conforces_Solutions: 337 Puzzles

#include<bits/stdc++.h>
using namespace std;
int n,m,i,test,mini=2000,a[100];
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>a[i];
    sort(a+1,a+m+1);

    for(i=1;i<=m-n+1;i++)
    {
        test=a[i+(n-1)]-a[i];
        if(mini>test)
            mini=test;
    }
    cout<<mini<<endl;
    return 0;
}


 Conforces_Solutions: 237 Free Cash

#include<bits/stdc++.h>
using namespace std;
long n,a,b,maxi=1,test,minute,cnt;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        minute=a*60+b;
        if(test==minute)
        {
            cnt++;
            if(maxi<cnt)
                maxi=cnt;
        }
        else
        {
            test=minute;
            cnt=1;
        }
    }
    cout<<maxi<<endl;
    return 0;
}


 Conforces_Solutions: 155 I_love_%username%

#include<bits/stdc++.h>
using namespace std;
long a[1050],cnt,i,mini,maxi,n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
    {
        mini=a[1];
        maxi=a[1];
        for(i=2;i<=n;i++)
        {
            if(a[i]>maxi)
            {
                cnt++;
                maxi=a[i];
            }
            if(a[i]<mini)
            {
                cnt++;
                mini=a[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}


 Conforces_Solutions: 69 Young Physicist

#include<bits/stdc++.h>
using namespace std;
int n,i,a,b,c,sum,sum1,sum2;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        sum+=a;
        sum1+=b;
        sum2+=c;
    }
    if(sum==0&&sum1==0&&sum2==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 41 Translation

#include<bits/stdc++.h>
using namespace std;
string str,str1;

int main()
{
    cin>>str>>str1;
    reverse(str1.begin(),str1.end());
    if(str==str1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}


 Conforces_Solutions: 61 Ultra-Fast Mathematician

#include<bits/stdc++.h>
using  namespace std;
string str,str1;
int main()
{
    cin>>str>>str1;
    for(int i=0;i<str.size();i++)
        if(str[i]==str1[i])
        cout<<"0";
    else cout<<"1";
    cout<<endl;
    return 0;
}


 Conforces_Solutions: 58 Chat room

#include<bits/stdc++.h>
using namespace std;
char str[200];
int i,j,k,k1,k2,cc,l;

int main()
{
    cin>>str;
    int l=strlen(str);

    for(i=0;i<l;i++)
    {
        if(str[i]=='h')
        {
            for(j=i+1;j<l;j++)
            {
                if(str[j]=='e')
                {
                     for(k=j+1;k<l;k++)
                    if(str[k]=='l')
                    {
                        for(k1=k+1;k1<l;k1++)
                        {
                            if(str[k1]=='l')
                            {
                                for(k2=k1+1;k2<l;k2++)
                                {
                                    if(str[k2]=='o')
                                    {
                                        cout<<"YES"<<endl;
                                        cc=1;
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }

                  break;
                }



            }
            break;
        }
    }
    if(cc==0)
        cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 122 Lucky Division

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%744==0||n%774==0||n%747==0||n%477==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


 Conforces_Solutions: 144 Arrival of the General

#include<bits/stdc++.h>
using namespace std;

int n,a[250],i,ans,x,xx,y,yy,b[250];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        {cin>>a[i];
        b[i]=a[i];
        }
    sort(a+1,a+n+1);

    for(i=1;i<=n;i++)
        if(b[i]==a[1])
        x=i;


    for(i=1;i<=n;i++)
        if(b[i]==a[n])
    {
        y=i;break;
    }
   // cout<<y<<endl;

    if(x<y)
    ans=-1;

    xx=n-x;
    yy=y-1;
    ans=ans+xx+yy;
    cout<<ans<<endl;


    return 0;
}


 Conforces_Solutions: 136 Presents

#include<bits/stdc++.h>
using namespace std;
int n,a[200],aa[200];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {cin>>a[i];
    aa[a[i]]=i;}
    for(int i=1;i<=n;i++)
        cout<<aa[i]<<" ";
    return 0;


}


 Conforces_Solutions: 228 Is your horseshoe on the other hoof

#include<bits/stdc++.h>
using namespace std;
set<int>myset;
long a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    myset.insert(a);myset.insert(b);myset.insert(c);myset.insert(d);
    cout<<4-myset.size()<<endl;
    return 0;

}


 Conforces_Solutions: 236 Boy or Girl

#include<bits/stdc++.h>
using namespace std;
char str[200];
set<char>myset;
int main()
{
    cin>>str;
    for(int i=0;i<strlen(str);i++)
    myset.insert(str[i]);
    if(myset.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}


 Conforces_Solutions: 160 Twins

#include<bits/stdc++.h>
using namespace std;
long n,i,a[200],cnt;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
      a[0]=0;
      sort(a,a+n+1);
      for(i=1;i<=n;i++)
        a[i]=a[i-1]+a[i];
      for(i=n-1;i>=0;i--)
      {
          cnt++;
          if(a[n]-a[i]>a[i])
            break;
      }
      cout<<cnt<<endl;

      return 0;
}


 Conforces_Solutions: 148 Insomnia cure

#include<bits/stdc++.h>
using namespace std;
long a,b,c,d,e,i,cnt;
int main()
{
    cin>>a>>b>>c>>d>>e;
    for(i=1;i<=e;i++)
    {
        if(i%a==0||i%b==0||i%c==0||i%d==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}


 Conforces_Solutions: 119 Epic Game

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,x;
    cin>>a>>b>>n;
    while(1)
    {
        x=__gcd(a,n);
        n=n-x;
        if(n<0) {cout<<"1"<<endl; break;}
        x=__gcd(b,n);
        n=n-x;
        if(n<0) {cout<<"0"<<endl;break;}
    }
    return 0;
}


 Conforces_Solutions: 133 HQ9+

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2,str;
    int l1,l2,l3,l4;
    cin>>str;
    l1=str.find("H");
    l2=str.find("Q");
    l3=str.find("9");
    if((l1>=0||l1<str.size())||(l2>=0||l2<str.size())||(l3>=0||l3<str.size()))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;


}


 Conforces_Solutions: 112 Petya and Strings

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2,str;
    cin>>st1>>st2;
   transform(st1.begin(), st1.end(),st1.begin(), ::toupper);
  transform(st2.begin(), st2.end(),st2.begin(), ::toupper);
  if(st1>st2) cout<<"1"<<endl;
  else if(st1<st2) cout<<"-1"<<endl;
  else cout<<"0"<<endl;


}


 Conforces_Solutions: 96 Football

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2,str;
    int l1,l2;
    cin>>str;

    st1="0000000";
    st2="1111111";
    l1=str.find(st1);
    l2=str.find(st2);
    if((l1>=0&&l1<str.size())||(l2>=0&&l2<str.size()))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}


 Conforces_Solutions: 82 Double Cola

#include<bits/stdc++.h>
using namespace std;
long cnt,n,ans;
int main()
{
    cin>>n;
    int a=5;
    while(n-a>0)
    {
        n=n-a;
        a=a*2;
        cnt++;
    }
    long l=pow(2,cnt);
    ans=n/l;
    if(n%l) ans++;
    if(ans==1)
    cout<<"Sheldon"<<endl;
    else if(ans==2)
    cout<<"Leonard"<<endl;
    else if(ans==3)
    cout<<"Penny"<<endl;
    else if(ans==4)
    cout<<"Rajesh"<<endl;
    else cout<<"Howard"<<endl;
    return 0;


}


 Conforces_Solutions: 435 Pasha Maximizes

#include<bits/stdc++.h>
using namespace std;
int m,k,k1,l,j;

int main()
{
    string s;
    cin>>s>>m;
    l=s.size();

    for(k1=0;k1<l;k1++)
    {
        k=k1;
        for(j=k1;j<l&&j<=k1+m;j++)
        if(s[j]>s[k])
        k=j;

        for(j=k;j>k1;j--)
        swap(s[j],s[j-1]);

        m=m-(k-k1);
        if(m==0)
        break;
    }
    cout<<s<<endl;
    return 0;
}


 Conforces_Solutions: 435 Queue on Bus Stop

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0,ans,i,st[200],stt,j;
    cin>>n>>m;

    for(i=1;i<=n;i++)
    cin>>st[i];

    for(i=1;i<=n;i++)
    {

        cnt++;
        stt=m-st[i];
        //cout<<stt<<endl;
        for( j=i+1;j<=n;j++)
        {
            if(st[j]>stt)
            break;
            else
            {stt=stt-st[j];
            //cout<<stt<<endl;
            }

        }
        i=j-1;
    }
    cout<<cnt<<endl;




}


 Conforces_Solutions: 131 cAPS lOCK

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    char str[1000];
    cin>>str;



    for(int i=1;i<strlen(str);i++)
    {

       if(str[i]>=65&&str[i]<=92)
       cnt++;
    }

    if(cnt==strlen(str)-1)
    {



        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>=65&&str[i]<=92)
            printf("%c",str[i]+32);
             else printf("%c",str[i]-32);
        }



    }
    else cout<<str<<endl;

    return 0;
}


 Conforces_Solutions: 50 Domino piling

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ans;


    cin>>a>>b;
    cout<<(a*b)/2<<endl;
    return 0;
}


 Conforces_Solutions: 387 George and Sleep

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ans;

    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);

    int s=a*60+b;
    int t=c*60+d;

    ans=s-t;

    if(ans<0)
    ans+=1440;
    printf("%02d:%02d",ans/60,ans%60);
    return 0;
}


 Conforces_Solutions: 385 Bear and Strings

#include<bits/stdc++.h>
using namespace std;
char str[50000];
int res,l,i,j,res2;

int main()
{
    cin>>str;
    l=strlen(str);

    for(i=0;i<l-3;i++)
    if(str[i]=='b' && str[i+1]=='e'&& str[i+2]=='a' &&str[i+3]=='r')
    res+=(((i+1)-j)*(l-(i+3))),j=(i+1);
    cout<<res<<endl;
}


 Conforces_Solutions: 384 Coder

#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int main()
{
    cin>>n;
    if(n*n%2)
        cout<<n*n/2+1<<endl;
    else
    cout<<n*n/2<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)%2==0)
                cout<<"C";
               else cout<<".";
        }
        cout<<endl;
    }
}


 Conforces_Solutions: 382 Ksenia and Pan Scales

#include<bits/stdc++.h>
using namespace std;
string str,str1;
int l,l1,l2,l3,ll,i;
int main ()
{
    cin>>str;
    cin>>str1;

    for(i=0;i<str.size();i++)
    {
        if(str[i]=='|')
           {
        l1=i;
        break;
        }
    }
    l2=str.size()-1-l1;
    l3=str1.size();
    ll=abs(l1-l2);

    if(l3<ll)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(l3>ll)
    {
        if((l3-ll)%2)
        {
            cout<<"Impossible"<<endl;
            return 0;
        }
    }
    l=l1+l2+l3;
    l=l/2;

    if(l1<l)
    {
        for(i=0;i<l-l1;i++)
        {
            cout<<str1[i];
        }
    }
    for(i=0;i<=l1+l2;i++)
        cout<<str[i];

        if(l2<l)
    {
        int k=l3-1;
        for(i=0;i<l-l2;i++)
        {
            cout<<str1[k--];
        }
    }


        return 0;


}


 Conforces_Solutions: 246 Buggy Sorting

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n==1||n==2)
        {cout<<-1<<endl;
        return 0;}
        for(i=n;i>=1;i--)
            cout<<i<<" ";
        return 0;

}


 Conforces_Solutions: 253 Boys and Girls

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cnt=0,mm,nn;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    nn=n;mm=m;

     if(n>m)
    {

        for(;;)
        {
            if(n>0)
           {

           printf("B");
           cnt++;
            n--;
           }
           if(m>0)
           {
               printf("G");
               cnt++;
               m--;
           }


           if(cnt==nn+mm)
            break;

        }
    }
    if(n<=m)
    {

        for(;;)
        {
            if(m>0)
           {

           printf("G");
            m--;
            cnt++;
           }
           if(n>0)
           {
               printf("B");
               n--;
               cnt++;
           }


           if(cnt==nn+mm)
            break;

        }
    }
   return 0;

}


 Conforces_Solutions: 257 Playing Cubes

#include<bits/stdc++.h>
using namespace std;

long n,m,k,i,res1,res2,l,l1,popo;

int main()
{
    cin>>n>>m;
    l=max(n,m);
    l1=min(n,m);
    cout<<l-1<<" "<<l1<<endl;


    return 0;
}







 Conforces_Solutions: 257 Sockets

#include<bits/stdc++.h>
using namespace std;

int n,m,k,i,a[100],cnt;

int main()
{

    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];

        sort(a+1,a+n+1);


        if(m<=k)
        {
            cout<<0<<endl;
            return 0;
        }
        m=m-k+1;
        for(i=n;i>=1;i--)
        {


            m=m-a[i]+1;
            if(m<=1)
            {
                cnt++;
                break;

            }
            else cnt++;

        }
        if(m>1)
            cout<<-1<<endl;
        else cout<<cnt<<endl;


return 0;
}







 Conforces_Solutions: 263 Squares

#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,a[100];
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
 sort(a+1,a+n+1);



 if(m>n)
    cout<<-1<<endl;
 else cout<<a[n-m+1]<<" "<<a[n-m+1]<<endl;
 return 0;


}



 Conforces_Solutions: 263 Beautiful Matrix

#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,t;
int main()
{
    for(i=1;i<=5;i++)
    {
for(j=1;j<=5;j++)
{
    cin>>t;
    if(t==1)
        m=i,n=j;
}
    }
    cout<<abs(m-3)+abs(n-3)<<endl;
}


 Conforces_Solutions: 268 Beautiful Sets of Points

#include<bits/stdc++.h>
using namespace std;
int n,m,i;
int main()
{
    cin>>n>>m;
    if(m<n)
    n=m;
    cout<<n+1<<endl;

    for(i=0;i<=n;i++)
        cout<<i<<" "<<n-i<<endl;
    return 0;
}


 Conforces_Solutions: 268 Buttons

#include<iostream>
using namespace std;
int i,j,sum,n,a[100],b[100];

int main()
{
    cin>>n;
    for(i=1;i<n;i++)
        {sum+=i*(n-i);}
    cout<<sum+n;
return 0;
}



 Conforces_Solutions: 268 Games

#include<iostream>
using namespace std;
int i,j,cnt,n,a[100],b[100];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i]==b[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;

    }



 Conforces_Solutions: 270 Multithreading

#include<iostream>
using namespace std;

main()
{
int n,i,a[100005],cnt=0;
cin>>n;
for(i=1;i<=n; i++)
    cin>>a[i];

    for(i=n;i>=2;i--)
    {
        if(a[i]>a[i-1])
            cnt++;
        else break;
        }
        cout<<n-cnt-1<<endl;

}


 Conforces_Solutions: 270 Fancy Fence

#include<bits/stdc++.h>
using namespace std;

long long t,tt,i,j,cc=0;
int main()
{
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>tt;
           if(360%(180-tt)==0)
            cout<<"YES"<<endl;
           else cout<<"NO"<<endl;


    }
    return 0;
}


 Conforces_Solutions: 379 New Year Candles

#include<bits/stdc++.h>
using namespace std;

 long  a,b,sum;
int main()
{

    cin>>a>>b;

    while(a>=b)
    {
        a=a-b+1;
        sum+=b;
    }
    cout<<sum+a<<endl;
    return 0;
}


 Conforces_Solutions: 378 Semifinals

#include<bits/stdc++.h>
using namespace std;

long long a[100005],b[100005],l=1,r=1,n,i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i]>>b[i];

     for(i=1;i<=n;i++)
         if(a[l]<b[r])
        a[l]=1,l++;
        else
        b[r]=1,r++;

         for(i=1;i<=n;i++)
            if(i>n/2&&a[i]!=1)
            cout<<0; else cout<<1;
            cout<<endl;

            for(i=1;i<=n;i++)
            if(i>n/2&&b[i]!=1)
            cout<<0; else cout<<1;
            return 0;
    }


 Conforces_Solutions: 378 Playing with Dice

#include<bits/stdc++.h>
using namespace std;
int a,b,aa,bb,cc,i;
int main()
{

    cin>>a>>b;
    for(i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
         aa++;
        else if(abs(a-i)>abs(b-i))
            bb++;
        else cc++;
    }
    cout<<aa<<" "<<cc<<" "<<bb;
}


 Conforces_Solutions: 271 Prime Matrix

#include<bits/stdc++.h>
using namespace std;

long long res[250050],a[100050],sum,aa[600][600],pp,i,k,n,m,nn,j;

int N = 100050;
bool status[100052];
long prime[80000];
void StorPrime()
{
    long i, j, sqrtN,k=0;
    for( i = 2; i <= N; i++ )
    status[i] = 0;
    prime[0]=2;
    k=1;
    sqrtN = long( sqrt((double)N) ); // have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == 0 )
        {
            prime[k]=i;
            k++;
            for( j = i * i; j <= N; j += i + i )
            status[j] = 1; // status of the multiple is 1
        }
    }
    for(;i<100050;i+=2)
    if( status[i] == 0 )
    {
        prime[k]=i;
        k++;
    }

    // printf("%ld\n",k);
}

int main()
{
        StorPrime();

    pp=0;
    for(i=1;i<=100000;i++)
    {
        for(k=pp;k<=10000;k++)
        {
            if(prime[k]>=i)
            {
             a[i]= prime[k]-i;
             pp=k;
             break;
            }

        }
        }

      //  for(i=1;i<100;i++)
           // cout<<a[i]<<" ";



        cin>>n>>m;
        nn=0;

         for(i=1;i<=n;i++)
         {
             sum=0;
             for(j=1;j<=m;j++)
             {
                 cin>>aa[i][j];
                  //cout<<a[aa[i][j]]<<" ";
                 sum+=a[aa[i][j]];


             }

             res[nn++]=sum;
            }

             for(i=1;i<=m;i++)
         {
             sum=0;
             for(j=1;j<=n;j++)
             {

              sum+=a[aa[j][i]];

             }

             res[nn++]=sum;

             }
             //for(i=0;i<=nn;i++)
               // cout<<res[i]<<" ";

             sort(res,res+nn);
             cout<<res[0]<<endl;


  return 0;
}


 Conforces_Solutions: 271 Beautiful Year

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int st;
    cin>>st;
    for(;;)
    {
        st++;
  stringstream ss;
  ss << st;
  string str = ss.str();
  if(str[0]==str[1]||str[0]==str[2]||str[0]==str[3])
    ;
  else if(str[1]==str[0]||str[1]==str[2]||str[1]==str[3])
    ;
  else if(str[2]==str[0]||str[2]==str[1]||str[2]==str[3])
    ;
  else if(str[3]==str[0]||str[3]==str[1]||str[3]==str[2])
    ;
   else {cout<<str<<endl;
            break;}


    }
}


 Conforces_Solutions: 275 k-Multiple Free Set

#include<bits/stdc++.h>
using namespace std;

long long a[100500],i,cnt,n,k;
map<long long,int>m;


int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    cin>>a[i],m[a[i]]=1;

    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
     if(m[a[i]]==1)
        {m[k*a[i]]=0;
          cnt++;
          }
          cout<<cnt<<endl;
        return 0;
}


 Conforces_Solutions: 275 Lights Out

#include<bits/stdc++.h>
using namespace std;
int i,j,a[10][10],b[10][10];
int main()
{
for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
{
    cin>>a[i][j];
    a[i][j]=a[i][j]%2;
}

for(i=1;i<=3;i++)
    for(j=1;j<=3;j++)
    b[i][j]=1;

if(a[1][1]==1)
{
    if(b[1][1]==1)
    b[1][1]=0;
    else b[1][1]=1;

    if(b[1][2]==0)
        b[1][2]=1;
        else b[1][2]=0;

        if(b[2][1]==0)
        b[2][1]=1;
        else b[2][1]=0;
}
if(a[1][2]==1)
{
    if(b[1][2]==0)
    b[1][2]=1;
    else b[1][2]=0;

    if(b[1][1]==0)
        b[1][1]=1;
    else b[1][1]=0;

    if(b[1][3]==0)
        b[1][3]=1;
    else b[1][3]=0;

    if(b[2][2]==0)
        b[2][2]=1;
    else b[2][2]=0;

}

if(a[1][3]==1)
{
     if(b[1][3]==0)
    b[1][3]=1;
    else b[1][3]=0;

     if(b[1][2]==0)
        b[1][2]=1;
        else b[1][2]=0;

        if(b[2][3]==0)
        b[2][3]=1;
        else b[2][3]=0;

}

if(a[2][1]==1)
{
     if(b[2][1]==0)
    b[2][1]=1;
    else b[2][1]=0;

    if(b[1][1]==0)
        b[1][1]=1;
    else b[1][1]=0;

    if(b[3][1]==0)
        b[3][1]=1;
    else b[3][1]=0;

    if(b[2][2]==0)
        b[2][2]=1;
    else b[2][2]=0;
}

if(a[2][2]==1)
{
    if(b[2][2]==0)
    b[2][2]=1;
    else b[2][2]=0;

     if(b[1][2]==0)
        b[1][2]=1;
    else b[1][2]=0;

    if(b[3][2]==0)
        b[3][2]=1;
    else b[3][2]=0;

    if(b[2][1]==0)
        b[2][1]=1;
    else b[2][1]=0;

    if(b[2][3]==0)
        b[2][3]=1;
    else b[2][3]=0;
    }

    if(a[2][3]==1)
    {
        if(b[2][3]==0)
    b[2][3]=1;
    else b[2][3]=0;

         if(b[1][3]==0)
        b[1][3]=1;
    else b[1][3]=0;

    if(b[3][3]==0)
        b[3][3]=1;
    else b[3][3]=0;

    if(b[2][2]==0)
        b[2][2]=1;
    else b[2][2]=0;
  }

if(a[3][1]==1)
{
    if(b[3][1]==0)
    b[3][1]=1;
    else b[3][1]=0;

    if(b[2][1]==0)
        b[2][1]=1;
    else b[2][1]=0;

    if(b[3][2]==0)
        b[3][2]=1;
    else b[3][2]=0;


}

if(a[3][2]==1)
{
    if(b[3][2]==0)
    b[3][2]=1;
    else b[3][2]=0;

      if(b[3][1]==0)
        b[3][1]=1;
    else b[3][1]=0;

    if(b[3][3]==0)
        b[3][3]=1;
    else b[3][3]=0;

    if(b[2][2]==0)
        b[2][2]=1;
    else b[2][2]=0;

}

if(a[3][3]==1)
{
     if(b[3][3]==0)
    b[3][3]=1;
    else b[3][3]=0;

  if(b[2][3]==0)
        b[2][3]=1;
    else b[2][3]=0;

    if(b[3][2]==0)
        b[3][2]=1;
    else b[3][2]=0;

}

for(i=1;i<=3;i++)
    {for(j=1;j<=3;j++)
    {
        cout<<b[i][j];
    }
    cout<<endl;
}
return 0;
}







 Conforces_Solutions: 376 I.O.U.

#include<bits/stdc++.h>
using namespace std;
long long n,m,i,sum,a,b,c,aa[200];
int main()
{
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        aa[a]+=c;
        aa[b]=aa[b]-c;
        }
        for(i=1;i<=n;i++)
        {
            if(aa[i]<0)
                sum+=aa[i]*-1;
        }
        cout<<sum<<endl;
}


 Conforces_Solutions: 376 Lever

#include<bits/stdc++.h>
using namespace std;
long long sum=0,sum1=0,i,k,pp;
string str;
int main()
{
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='^')
        {
            pp=i;
            for(k=pp+1;k<str.size();k++)
            {
                if(str[k]>='1'&&str[k]<='9')
                sum+=(str[k]-48)*(k-pp);
            }
            for(k=pp-1;k>=0;k--)
            {
                if(str[k]>='1'&&str[k]<='9')
                sum1+=(str[k]-48)*(pp-k);

            }

        }
    }
    if(sum==sum1)
        cout<<"balance"<<endl;
    else if(sum>sum1)
        cout<<"right"<<endl;
    else
        cout<<"left"<<endl;
}


 Conforces_Solutions: 278 New Problem


#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string stt;
int n,i,j,k=0,k1,a1[200],a,b,cc=0;
vector<string>sr;

int main ()
{

  cin>>n;
 for(i=1;i<=n;i++)
  {
      cin>>stt;
      for(int p=0;p<stt.size();p++)
        a1[stt[p]]++;

      for(k1=0;k1<stt.size()-1;k1++)
      sr.push_back(stt.substr (k1,2));

    }

     for(i=97;i<=122;i++)
      if(a1[i]==0)
       {
           printf("%c\n",i);
            return 0;
       }

       sort(sr.begin(),sr.end());


      for(a='a';a<='z';a++)
      {

        for(b='a';b<='z';b++)
       {
           for(i=0;i<sr.size();i++)
               if(a==sr[i][0]&&b==sr[i][1])
                break;

               if(sr.size()==i)
              {
                  printf("%c%c\n",a,b);
                 cc=1; break;
              }
       }
       if(cc==1)
        break;
}
return 0;
}


 Conforces_Solutions: 278 Circle Line

#include<bits/stdc++.h>
using namespace std;
long st[200],sum,sum1,i,n,n1,m1,n2,m2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>st[i];
        sum+=st[i];
    }
    cin>>n1>>m1;
    if(n1<m1)
        n2=n1;
    else
        n2=m1;
    m2=max(n1,m1);
    for(i=n2;i<m2;i++)
        sum1+=st[i];

if(sum1<sum-sum1)
    cout<<sum1<<endl;
else
    cout<<sum-sum1<<endl;

}


 Conforces_Solutions: 374 Inna and Pink Pony

#include <iostream>
#include <sstream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <stdio.h>

using namespace std;

#define fo(i,n) for(int i=0; i<(int)n; i++)
#define rep(it,s) for(__typeof((s).begin()) it=(s).begin();it!=(s).end();it++)
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define pii pair<int,int>


int main()
{

      int n,m,i,j,a,b;
    cin>>n>>m>>i>>j>>a>>b;

    int k = 100000000;

    int x,y;

    x = i-1;
    y = j-1;
    if (x%a==0 && y%b==0)
        {
        if (x/a==y/b)
        k = min(k, x/a);
        else
            {
            x /= a;
            y /= b;
            if (x>y && (x-y)%2==0 && m>b)
              k = min(k, x);
            if (x<y && (y-x)%2==0 && n>a)
             k = min(k, y);
        }
    }

    x = i-1;
    y = m-j;
    if (x%a==0 && y%b==0)
     {
        if (x/a==y/b)
            k = min(k, x/a);
        else {
            x /= a;
            y /= b;
            if (x>y && (x-y)%2==0 && m>b)
             k = min(k, x);
            if (x<y && (y-x)%2==0 && n>a)
            k = min(k, y);
        }
    }
    x = n-i;
    y = j-1;
    if (x%a==0 && y%b==0) {
        if (x/a==y/b) k = min(k, x/a);
        else {
            x /= a;
            y /= b;
            if (x>y && (x-y)%2==0 && m>b)  k = min(k, x);
            if (x<y && (y-x)%2==0 && n>a)  k = min(k, y);
        }
    }
    x = n-i;
    y = m-j;
    if (x%a==0 && y%b==0) {
        if (x/a==y/b) k = min(k, x/a);
        else {
            x /= a;
            y /= b;
            if (x>y && (x-y)%2==0 && m>b)  k = min(k, x);
            if (x<y && (y-x)%2==0 && n>a)  k = min(k, y);
        }
    }

    if (k==100000000) cout<< "Poor Inna and pony!"<<endl;
    else cout<<k<<endl;

    return 0;

}


 Conforces_Solutions: 131 The World is a Theatre

//DER.......
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define LPI(i,n) for(int i=0;i<(n);i++)
#define LPI1(i,a,b) for(int i=(a);i<=(b);i++)
#define LPIL(i,x) for(int i=0;x[i];i++)
#define LPD(i,n) for(int i=(n)-1;i>=0;i--)
#define LPD1(i,a,b) for(int i=(a);i>=(b);i--)
#define I(x) scanf("%d",&x)
#define RI(x) int x;I(x)
#define II(x,y) scanf("%d%d",&x,&y)
#define RII(x,y) int x,y;II(x,y)
#define III(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIII(x,y,z) int x,y,z;III(x,y,z)
#define RS(x) scanf("%s",x)
#define PI(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define F first
#define S second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
#define MAX 32
#define MaxVal 100007

vector<long long> ncr[MAX];

void Genarate_ncr()
{
    int i,j,s;
    ncr[0].push_back(1);
    for(i=1;i<MAX;i++)
    {
        ncr[i].push_back(1);
        for(j=1;j<i;j++)
        {
            s=ncr[i-1][j]+ncr[i-1][j-1];
            ncr[i].push_back(s);
        }
        ncr[i].push_back(1);
    }
}
long long result,x,t,n,m,i;
int main()
{
    Genarate_ncr();

    cin>>n>>m>>t;
    for(i=4;i<=n;i++)
    {
        x=t-i;
        if(x>=1&&x<=m)
        {
           // cout<<n<<" "<<i<<" "<<m<<" "<<x<<endl;
            result+=(ncr[n][i])*ncr[m][x];
        }


    }

   cout<<result<<endl;

  return 0;
}


 Conforces_Solutions: 166 Tetrahedron

/*#include<cstdio>
#define MOD 1000000007

int main()
{
long long n,a,b;
scanf("%I64d",&n);
a=1,b=0;
while(n--)
    {
int temp=a;
a=b*3;
a%=MOD;
b=b*2+temp;
b%=MOD;
}
printf("%I64d\n",a);
return 0;
}*/

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long n,a,b,temp;

int main()
{
    cin>>n;
      a=1,b=0;

    while(n--)
    temp=a, a=(3*b)%mod,b=(b*2+temp)%mod;
    cout<<a<<endl;

 return 0;
}



 Conforces_Solutions: 189 Cut Ribbon

/*#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,a,b,c,ans=0;
	cin >> n >> a >> b >> c;
	for (int i=0;i*a<=n;i++)
		for (int j=0;j*b+i*a<=n;j++)
			if ((n-i*a-j*b)%c==0)
				ans=max(ans,i+j+(n-i*a-j*b)/c);
	cout << ans << endl;
}

#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int n,a,b,c; scanf("%d%d%d%d",&n,&a,&b,&c);

	int ans=0;
	for(int i=0;a*i<=n;i++) for(int j=0;a*i+b*j<=n;j++) {
		int m=n-a*i-b*j;
		if(m%c==0) ans=max(ans,i+j+m/c);
	}
	printf("%d\n",ans);

	return 0;
}

 if(k%a[2]==0)
        {
            coun--;
            coun+=(k/a[2]);
            break;

        }

*/


#include<bits/stdc++.h>
using namespace std;
int n,a[5],k,x,y,z,cc=0,xx,yy,zz,maxa=0;

int main()
{

cin>>n>>a[0]>>a[1]>>a[2];
sort(a,a+3);

for(z=0;z<=40;z++)
{
    for(y=0;y<=4000;y++)
    {
        for(x=0;x<=4000;x++)
        {
            if(a[0]*x+a[1]*y==n-a[2]*z)
            {
                if(x+y+z>maxa)
                {
                    maxa=x+y+z;
                    xx=x;yy=y;zz=z;
                }
                //cc=1;
                //break;
            }
            if(a[0]*x+a[1]*y>n-a[2]*z)
                break;
        }
        if(cc)
        {
            cc=1;
            break;
        }
    }
    if(cc)
    {
        cc=1;
        break;
    }
}
cout<<xx+yy+zz<<endl;

}


 Conforces_Solutions: 332 Maximum Absurdity

#include<bits/stdc++.h>
using namespace std;

long long a[205000],b[205000],b1[200005],n,k,i,sum,maxi,tk,tk1,cc=0,maxa=0,tt;
long long t[200005];
int main()
{
    cin>>n>>k;
    sum=0;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
        if(t[i]>maxa)
            {maxa=t[i];
             tt=i;}
        sum+=t[i];
      a[i]=sum;
    }
    b[k]=a[k];b1[k]=a[k]; maxi=b[k];
    int long long j=1;
    for(i=k+1;i<=n;i++)
    {
        b[i]=a[i]-a[j++];
        b1[i]=b[i];
        if(b[i]>maxi)
        {
            maxi=b[i];
            tk=i;
            cc=1;
        }
        if(b[i]<b[i-1])
            b[i]=b[i-1];
    }

    if(cc==0)
        tk=k;


    //for(i=k;i<=n;i++)
        //cout<<b[i]<<" "<<b1[i]<<" ";




    //cout<<tk<<endl;
    if(k==1)
    {
    tk=tt;
    t[tt]=0,maxa=0;
    for(i=1;i<=n;i++)
    {
        if(t[i]>maxa)
            {maxa=t[i];
             tt=i;}
    }
    tk1=tt;




    }
    else

{
    maxi=0;
  long long   int l,bb=1;
    for(i=n;i>=2*k;i--)
    {
      if(b1[i]+b[i-k]>=maxi)
      {
          maxi=b1[i]+b[i-k];
          l=i-k;

          tk=i;
          tk1=l;

      }

    }
     j=l;
        for(;;)
          {
              if(b[j-1]!=b[l])
              break;
              j--;
        }
        tk1=j;

}

    //cout<<tk<<" "<<tk1<<endl;

    if((tk-k+1)<(tk1-k+1))
        cout<<tk-k+1<<" "<<tk1-k+1<<endl;
    else
cout<<tk1-k+1<<" "<<tk-k+1<<endl;

    return 0;


}



 Conforces_Solutions: 332 Down the Hatch!

#include<bits/stdc++.h>
using namespace std;
char str[10000];
int coun=0,t,i;
int main()
{
    cin>>t;
    cin>>str;

    for(i=t;i<strlen(str);i+=t)
    {
       if((str[i-1]==str[i-2])&&(str[i-2]==str[i-3]))
        coun++;
       }
       cout<<coun<<endl;
}


 Conforces_Solutions: 369 Valera and Contest

#include<bits/stdc++.h>
using namespace std;

long long n,k,l,r,sall,ak,t,t1,i,sk,tt,kk,l1,kk1;

int main()
{

cin>>n>>k>>l>>r>>sall>>sk;
l=sk/k;
kk=sk%k;
for(i=1;i<=k;i++)
{
    if(i<=kk)
        cout<<l+1<<" ";
    else cout<<l<<" ";
}
if(n-k>0)
{

l1=(sall-sk)/(n-k);
kk1=(sall-sk)%(n-k);
}
else
{
    l1=(sall-sk)/k;
    kk1=(sall-sk)%k;
}


for(i=1;i<=n-k;i++)
{
    if(i<=kk1)
        cout<<l1+1<<" ";
    else cout<<l1<<" ";

}






return 0;
}


 Conforces_Solutions: 369 Valera and Plates

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,a,c1=0,c2=0,ans=0,i;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
      {

    cin>>a;
    if(a==1) c1++;
    else c2++;
      }
      if(c1>m)
        ans=c1-m;
      else if(c1<m)
        k+=m-c1;

      //cout<<c2<<endl;

      if(c2>k)
      ans+=c2-k;

      cout<<ans<<endl;



            return 0;
}


 Conforces_Solutions: 276 Little Girl and Game

#include<bits/stdc++.h>
using namespace std;
char str[10000];
int a[200],i,coun=0;

int main()
{
    cin>>str;
        for(i=0;str[i];i++)
        a[str[i]]++;

           for(i=97;i<=124;i++)
            if(a[i]%2)
                  coun++;

            if(coun%2==0&&coun>0)
            cout<<"Second"<<endl;
            else cout<<"First"<<endl;

            return 0;
}


 Conforces_Solutions: 366 Dima and To-do List

#include<bits/stdc++.h>
using namespace std;


long n,k,i,mina,a[105000],ans,j;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<=k;i++)
    for(j=i+k;j<=n;j+=k)
    a[i]+=a[j];

    mina=a[1];
    ans=1;
    for(i=2;i<=k;i++)
    {
        if(a[i]<mina)
        {
            mina=a[i];
            ans=i;
        }
    }
    cout<<ans<<endl;



return 0;
}


 Conforces_Solutions: 368 Sereja and Suffixes

#include<bits/stdc++.h>
using namespace std;
long n,m,coun,a[105000],A[105000],B[105000],i,k,j,l1;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];

    for(i=n;i>=1;i--)
    {
        A[a[i]]++;
        if(A[a[i]]==1)
     {
        B[i]++;
        B[i]+=B[i+1];
    }
    else B[i]=B[i+1];

    }
    for(i=1;i<=m;i++)
    {
        cin>>l1;
        cout<<B[l1]<<endl;
    }

return 0;
}


 Conforces_Solutions: 368 Sereja and Coat Rack

#include<bits/stdc++.h>
using namespace std;
int n,d,a[200],m,sum=0,i;
int main()
{
    cin>>n>>d;

    for(i=0;i<n;i++)
    cin>>a[i];

        sort(a,a+n);
        cin>>m;
        if(m<=n)
           {

           for(i=0;i<m;i++)
            sum+=a[i];
            cout<<sum<<endl;
           }
           else
           {
               for(i=0;i<n;i++)
                sum+=a[i];
               cout<<sum-(m-n)*d<<endl;
           }



    return 0;
}


 Conforces_Solutions: 366 Dima and Guards

#include<bits/stdc++.h>
using namespace std;
long A[10][10],n,i,j;

int main()
{

    cin>>n;
    for(i=1;i<=4;i++)
    {

        for(j=1;j<=4;j++)
        {
            cin>>A[i][j];
        }
    }
   // int cc=0;
    for(i=1;i<=4;i++)
    {
        if((A[i][1]+A[i][3])<=n)
        {
            cout<<i<<" "<<A[i][1]<<" "<<n-A[i][1]<<endl;
            return 0;
        }
        else if((A[i][2]+A[i][4])<=n)
        {

         cout<<i<<" "<<A[i][2]<<" "<<n-A[i][2]<<endl;
            return 0;
        }
        else if((A[i][2]+A[i][3])<=n)
        {

         cout<<i<<" "<<A[i][2]<<" "<<n-A[i][2]<<endl;
            return 0;
        }
        else if((A[i][1]+A[i][4])<=n)
        {

         cout<<i<<" "<<A[i][1]<<" "<<n-A[i][1]<<endl;
            return 0;
        }



    }
    cout<<-1<<endl;
    return 0;
}


 Conforces_Solutions: 365 The Fibonacci Segment

#include<bits/stdc++.h>
using namespace std;

long A[1000000],B[1000000],N,i;
int main()
{
    cin>>N;
      if(N==1)
      {
          cout<<1<<endl;
          return 0;
      }

    for(i=0;i<N;i++)
    {
        cin>>A[i];
        if(i>1)
        {
            if(A[i]==A[i-1]+A[i-2])
            {
               B[i]= B[i-1]+1;
            }
        }
    }
sort(B,B+N);
cout<<B[N-1]+2<<endl;

}


 Conforces_Solutions: 365 Good Number

#include<bits/stdc++.h>
using namespace std;

long N,K,i,j;

int main()
{
    cin>>N>>K;
    int coun=0;
    for(i=1;i<=N;i++)
    {
        int cc=0;
        char str[50];
        int A[100];

        for(int p=48;p<=60;p++)
            A[p]=0;

        cin>>str;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]-48<=K)
            {
                A[str[j]]++;
            }
            //else cout<<0<<endl;
        }
        //cout<<A[49];
        for(int k=48;k<=K+48;k++)
        {
            if(A[k]==0)
            {
                cc=1;

             //cout<<0<<endl;
             }

        }
        if(cc==0)
        {
            coun++;
        }

    }

    cout<<coun<<endl;
    return 0;
}


 Conforces_Solutions: 362 Two Semiknights Meet

#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> PII;





int main()
{
	vector< PII > V;
	int T, i, j;
	char grid[55][55];

	scanf("%d", &T);
	while(T--)
	{
		for(i = 0; i < 8; i++)
        scanf("%s", grid[i]);

		V.clear();
		for(i=0;i<8;i++)
            for(j=0;j<8;j++)
             if(grid[i][j] == 'K')
			V.push_back( PII(i, j) );

			if(abs(V[0].first-V[1].first)==4&&abs(V[0].second-V[1].second)==0)
                {printf("YES\n");
                continue;}
            else if(abs(V[0].first-V[1].first)==0&&abs(V[0].second-V[1].second)==4)
                {printf("YES\n");
                continue;}
                 else if(abs(V[0].first-V[1].first)==4&&abs(V[0].second-V[1].second)==4)
                {printf("YES\n");
                continue;
                }


		printf("NO\n");
	}

	return 0;
}


 Conforces_Solutions: 362 Petya and Staircases

#include<bits/stdc++.h>
using namespace std;
long A[1000000],m,n,i,c,t,k=0,kk=0;
int main()
{
    cin>>n>>m;
    for(i=0;i<m;i++)
        {cin>>t;
        if(t==1||t==n)
        {
            kk=1;
        }
        if(t>0)

        A[k++]=t;}
        if(kk==1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    sort(A,A+m);
    if(k<3)
        cout<<"YES"<<endl;
    else
    {


    for(i=0;i<m-2;i++)
    {


       if(A[i]==A[i+1]-1&&A[i+1]-1==A[i+2]-2)
           {
            cout<<"NO"<<endl;
        c=1;
        break;
        }
    }
    if(c==0)
        cout<<"YES"<<endl;
    }
}


 Conforces_Solutions: 359 Permutation

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,k,i;
    cin>>n>>k;
    for(i=1;i<=2*k;i++)
        cout<<i<<" ";
    for(i=2*n;i>2*k;i--)
        cout<<i<<" ";
        cout<<endl;
        return 0;
}


 Conforces_Solutions: 363 Fixing Typos

#include<bits/stdc++.h>
using namespace std;

char str[200050],A[200050],B[200050];
long i,j,coun=0,k=0;


int main()
{
    cin>>str;
long    l=strlen(str)-2;
    for(i=0;i<l;i++)
    {
        if(str[i]==str[i+1]&&str[i+1]==str[i+2])
        ;
        else
        {
            A[k++]=str[i];

        }
    }
    A[k]=str[l];
    A[k+1]=str[l+1];
    A[k+2]=0;




if(strlen(str)==1)
   {cout<<str<<endl;
return 0;}

int k1=0;

    for(i=0;i<=k;i++)
    {
        if(A[i]==A[i+1])
        {

                B[k1++]=A[i];
                B[k1++]=A[i+1];
                i++;

                if(A[i+1]==A[i+2])
                {
                B[k1++]=A[i+1];
                i+=2;
                }


           }
        else B[k1++]=A[i];
        }




        if(A[k]!=A[k+1])
        B[k1++]=A[k+1];

           B[k1]=0;


           cout<<B<<endl;





    return 0;
}


/*#include <cstdio>
#include <cstring>
using namespace std;

char s[200005];

int main()
{
    gets(s);
    int n=0;
    for(int i=0;s[i];i++)
        {
        if(n>=2 && s[n-2]==s[n-1] && s[n-1]==s[i]) continue;
        if(n>=3 && s[n-3]==s[n-2] && s[n-1]==s[i]) continue;
        s[n++]=s[i];
    }
    s[n]=0;
    puts(s);
}*/


 Conforces_Solutions: 363 Fence

#include<bits/stdc++.h>
using namespace std;
long n,k,sum=0,i,mina,tt,t,A[1000000];
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        sum+=t;
        A[i]=sum;
    }
    mina=A[k];
    tt=1;
    for(i=k+1;i<=n;i++)
    {
        if((A[i]-A[i-k])<mina)
           {mina=(A[i]-A[i-k]);
            tt=i-k+1;}

    }
    cout<<tt<<endl;



}


 Conforces_Solutions: 363 Soroban

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,t;
    cin>>n;
    if(n==0)
    {
        cout<<"O-|-OOOO"<<endl;
        return 0;
    }
    while(n)
    {
        t=n%10;
        n=n/10;
        if(t==0)
            cout<<"O-|-OOOO"<<endl;
        else if(t==1)
         cout<<"O-|O-OOO"<<endl;
        else if(t==2)
             cout<<"O-|OO-OO"<<endl;
        else if(t==3)
         cout<<"O-|OOO-O"<<endl;
         else if(t==4)
             cout<<"O-|OOOO-"<<endl;
             if(t==5)
            cout<<"-O|-OOOO"<<endl;
        else if(t==6)
         cout<<"-O|O-OOO"<<endl;
        else if(t==7)
             cout<<"-O|OO-OO"<<endl;
        else if(t==8)
         cout<<"-O|OOO-O"<<endl;
         else if(t==9)
             cout<<"-O|OOOO-"<<endl;




    }

}


 Conforces_Solutions: 361 Levko and Permutation

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n,k,i,j;
    cin>>n>>k;
    if((n-1)>=k)
    {
         if((n-1)==k)
         {
             for(i=1;i<=n;i++)
            cout<<i<<" ";
         }
            else
            {

                if(k==0)
                {
                       for(j=1;j<=n-1;j++)
                        cout<<j+1<<" ";
                        cout<<1<<" ";
                }
                else
                {
                     cout<<k+2<<" ";

                for(i=2;i<=k+1;i++)
                    cout<<i<<" ";
                    for(j=k+2;j<=n-1;j++)
                        cout<<j+1<<" ";

                         cout<<1<<" ";
                }

            }
    }
    else
    cout<<-1<<endl;
    return 0;

}


 Conforces_Solutions: 361 Levko and Table

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    {
        if(i==j)
            cout<<" "<<k;
        else
            cout<<" "<<0;
    }
    cout<<endl;
}
    return 0;
}


 Conforces_Solutions: 359 Table

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int flag=0,n,m,i,j,A;

int main()
{

    cin>>n>>m;
    for(i=1;i<=n;i++)
    {

    for(j=1;j<=m;j++)
    {
        cin>>A;
        if(A==1)
        {
        if(i==1||i==n)
        flag=1;
        else if(j==1||j==m)
        flag=1;
        }
    }
    }
    if(flag)
    cout<<2<<endl;
    else
    cout<<4<<endl;

    return 0;
}


 Conforces_Solutions: 358 Dima and Text Messages

#include<bits/stdc++.h>
using namespace std;
string S,tp,Q;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        S+="<3";
        cin>>tp;
        S+=tp;
    }
    S+="<3";

    cin>>Q;
    int id=0;
    for(i=0;i<Q.size();i++)
    {
        if(S[id]==Q[i])
            id++;
    }
    if(id==S.size())
        cout<<"yes\n";
    else cout<<"no\n";

}


 Conforces_Solutions: 358 Dima and Continuous Line

#include<bits/stdc++.h>
using namespace std;

int A1[10000],N,i,j,A,B,C,D;
int main()
{
    int flag=0;
    cin>>N;
    for(i=1;i<=N;i++)
    cin>>A1[i];

    for(i=1;i<N;i++)
    {
        for(j=i+1;j<N;j++)
    {
        A=min(A1[i],A1[i+1]); B=max(A1[i],A1[i+1]);
        C=min(A1[j],A1[j+1]); D=max(A1[j],A1[j+1]);
        if(A>C&&A<D&&D<B)
            {flag=1;
             break;
             }
        else if(B>C&&B<D&&C>A)
        {
            flag=1;
            break;
        }
        //cout<<"ok"<<endl;
    }
    if(flag==1)
        break;
    }
    puts(flag? "yes":"no");
    return 0;
}


 Conforces_Solutions: 355 Vasya and Public Transport

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c1,c2,c3,c4,c=0,i,m,n,ans=0,t;
    cin>>c1>>c2>>c3>>c4;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        c+=min(c1*t,c2);
    }
    ans+=min(c,c3);
    c=0;
    for(i=1;i<=m;i++)
    {
        cin>>t;
      c+= min(t*c1,c2);
    }
    ans+=min(c,c3);
    ans=min(ans,c4);
    cout<<ans<<endl;
    return 0;
}


 Conforces_Solutions: 355 Vasya and Digital Root

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long k,d,i;
    cin>>k>>d;
    if(d==0&&k>1)
    {
        cout<<"No solution"<<endl;
        return 0;
    }
    if(k>=d)
       {

        for(i=1;i<=d;i++)
        cout<<1;
    for(i=d+1;i<=k;i++)
        cout<<0;
    cout<<endl;
       }
       else
       {
           for(i=1;i<=(d%k);i++)
            cout<<(d/k)+1;
           for(i=(d%k)+1;i<=k;i++)
            cout<<(d/k);
           cout<<endl;
       }
    return 0;
}


 Conforces_Solutions: 357 Flag Day

 #include<bits/stdc++.h>
 using namespace std;
 long arry[100400];


 int main()
{
    long n,m,a,b,c,i;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>c;
        if(arry[a]==arry[b]&&arry[b]==arry[c])
           {
               arry[a]=1;arry[b]=2;arry[c]=3;continue;
           }
        else
        {
            if(arry[a]==1)
            {arry[b]=2;arry[c]=3;continue;}
            if(arry[a]==2)
            {arry[b]=1;arry[c]=3;continue;}
            if(arry[a]==3)
            {arry[b]=1;arry[c]=2;continue;}

            if(arry[b]==1)
            {arry[a]=2;arry[c]=3;continue;}
            if(arry[b]==2)
            {arry[a]=1;arry[c]=3;continue;}
            if(arry[b]==3)
            {arry[a]=1;arry[c]=2;continue;}

            if(arry[c]==1)
            {arry[b]=2;arry[a]=3;continue;}
            if(arry[c]==2)
            {arry[b]=1;arry[a]=3;continue;}
            if(arry[c]==3)
            {arry[b]=1;arry[a]=2;continue;}



        }
    }
    for(i=1;i<=n;i++)
        cout<<" "<<arry[i];



}


 Conforces_Solutions: 357 Flag Day

 #include<bits/stdc++.h>
 using namespace std;
 long arry[100400];


 int main()
{
    long n,m,a,b,c,i,aa,bb,cc;
    cin>>n>>m;
    while(m--)
    {
        cin>>aa>>bb>>cc;
        a=aa;
        b=bb;
        c=cc;


          int a2=a;
          int b2=b;
          int c2=c;



            if(arry[a2]==1)
            {
                arry[b2]=2;
                arry[c2]=3;
                continue;
                }
            else if(arry[b]==1)
            {
                arry[a]=2;
                arry[c]=3;
                continue;
                }
            else if(arry[c]==1)
            {
                arry[b]=2;
                arry[a]=3;
                continue;
                }




            if(arry[a]==2)
            {arry[b]=1;arry[c]=3;continue;}
            else  if(arry[b]==2)
            {arry[a]=1;arry[c]=3;continue;}
            else   if(arry[c]==2)
            {arry[b]=1;arry[a]=3;continue;}


            if(arry[a]==3)
            {arry[b]=1;arry[c]=2;continue;}
            else if(arry[b]==3)
            {arry[a]=1;arry[c]=2;continue;}
            else if(arry[c]==3)
            {arry[b]=1;arry[a]=2;continue;}

           if((arry[a]==0&&arry[b]==0)&&(arry[b]==0&&arry[c]==0))
           {

               arry[a]=1;
               arry[b]=2;
               arry[c]=3;
               continue;
           }
               //cout<<arry[a2]<<" "<<arry[b2]<<" "<<arry[c2]<<endl;
}

      for(i=1;i<=n;i++)
        cout<<" "<<arry[i];

        return 0;
}


 Conforces_Solutions: 357 Group of Students

#include<bits/stdc++.h>
using namespace std;
long sum[200],coun=0,c=0;
int main()
{
    long n,a[200],i,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
        cin>>x>>y;


    for(i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }

    for(i=1;i<=n;i++)
    {
        if(sum[i]>=x&&sum[i]<=y)
        {
            long k=sum[n]-sum[i];
            if(k>=x&&k<=y)
            {
                cout<<i+1<<endl;
                c=1;
                break;
            }
        }
    }

    if(c==0)
        cout<<0<<endl;




    return 0;
}


 Conforces_Solutions: 353 Domino

#include<bits/stdc++.h>
using namespace std;
long cou=0,cou1=0,A[1000],B[1000],cou2=0;
int main()
{
    long tt;
    cin>>tt;

    for(long i=1;i<=tt;i++)
    {
        cin>>A[i]>>B[i];
        if(A[i]%2==1&&B[i]%2==0)
            cou++;
        if(A[i]%2==0&&B[i]%2==1)
            cou1++;
        if(A[i]%2==1&&B[i]%2==1)
            cou2++;

    }
    if((cou%2==1&&cou1%2==0)||(cou%2==0&&cou1%2==1))
    {
        cout<<-1<<endl;
        return 0;
    }
    if(cou==0&&cou1==0)
    {
        if(cou2%2)
        {
        cout<<-1<<endl;
        return 0;
    }

    }
    if(cou%2==0&&cou1%2==0)
    {
        if(cou2%2==0)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            cout<<1<<endl;
            return 0;
        }
    }
    if(cou%2==1&&cou1%2==1)
    {
        if(cou2%2)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
             cout<<1<<endl;
            return 0;

        }
    }

    return 0;
}


 Conforces_Solutions: 218 Airport

#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;
long arry[10000],j,arry1[10000];

int main()
{
    long i=1,people,plane;
    cin>>people>>plane;
    long n=plane;


    while(plane--)
   {
       cin>>arry[i];
       arry1[i]=arry[i];
       i++;
  }

    long sum=0;
   for(i=1;i<=people;i++)
   {
    sort(arry+1,arry+n+1);
    sum+=arry[n];
    arry[n]--;
   }

    long sum1=0;
   for(i=1;i<=people;i++)
   {
    sort(arry1+1,arry1+n+1);
    j=1;
    while(arry1[j]==0)
        j++;
    sum1+=arry1[j];
    arry1[j]--;
   }
   cout<<sum<<" "<<sum1<<endl;





    return 0;
}


 Conforces_Solutions: 349 Cinema Line

#include <iostream>

using namespace std;
int main()
{
    long n,A[100050],a1=0,a2=0;
    cin>>n;
    long nn=n;
    long i=1;
    while(n--)
        cin>>A[i++];
    for(i=1;i<=nn;i++)
    {
        if(A[i]==25)
            a1++;
        else if(A[i]==50)
        {
            a2++;
            if(a1>=1)

                a1--;
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else
        {
            if(a2>=1&&a1>=1)
                {
                    a2--;
                    a1--;}
            else if(a1>=3)
               a1-=3 ;
            else
             {
                cout<<"NO"<<endl;
                return 0;
            }

        }
    }
    cout<<"YES"<<endl;
}




 Conforces_Solutions: 344 Magnets

#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    char ch='9',cc;
    long st;
    cin>>st;
    long count=1;
    scanf("%c",&cc);

    while(st--)
    {
        char str[10]={};
         scanf("%s",str);
         scanf("%c",&cc);
         if(ch==str[0])
         {
             count++;
         }
         ch=str[1];
    }
    cout<<count<<endl;
    return 0;
}


 Conforces_Solutions: 339 Xenia and Ringroad

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    long long cc=1,a,b,count=0,st;
    cin>>a>>b;
    for(long long i=1;i<=b;i++)
    {
        cin>>st;
        if(st>cc)
           {count+=st-cc;
             cc=st;}
            else  if(st<cc)
            {
                count+=a-cc+st;
                cc=st;
            }

    }
    cout<<count<<endl;




return 0;
}


 Conforces_Solutions: 339 Helpful Maths

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    char str[200],str1[200];
    cin>>str;
    int j=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='+')
        str1[j++]=str[i];
    }
    sort(str1,str1+j);
    for(int i=0;i<j;i++)
    {
        cout<<str1[i];
        if(i!=j-1)
            cout<<"+";
    }
    cout<<endl;


return 0;
}


 Conforces_Solutions: 158 Taxi

#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
#include<list>
#include<stack>
#include<map>
using namespace std;
long n,a[100100],t,count=0;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>t;
        a[t]++;
    }
    count+=a[4];
    if(a[1]<a[3])
    {
        count+=a[1];

        a[3]=a[3]-a[1];
         a[1]=0;
    }
    else
    {
         count+=a[3];

        a[1]=a[1]-a[3];
         a[3]=0;

    }
    if(a[1]==0)
    {
        count+=a[2]/2;
        count+=a[2]%2;
        count+=a[3];
    }
    else
        {

        if(a[2]==0)
        {
            count+=a[1]/4;
           if(a[1]%4)
           count++;
        }
    else
    {
        count+=a[2]/2;
         a[2]=a[2]%2;
         if(a[2]!=0)
         {

        count+=a[1]/4;
        long l=(a[1]%4);
        if(l==3)
            count+=2;
        else count++;
         }
         else
         {
              count+=a[1]/4;
           if(a[1]%4)
           count++;

         }
    }
    }
    cout<<count<<endl;


    return 0;
}


 Conforces_Solutions: 118 String Task

















#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include<functional>
//using namespace std;

int main()
{
	std::string str ;
	std::cin>>str;

	std::transform(str.begin(), str.end(), str.begin(), std::ptr_fun(tolower));
    for(int i=0;i<str.size();i++)
   if(str[i]!='a'&&str[i]!='e'&&str[i]!='o'&&str[i]!='i'&&str[i]!='u'&&str[i]!='y')
         std::cout<<"."<<str[i]; 
       std::cout<<std::endl;
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
      int lower, upper;

      lower = getchar();
      upper = toupper(lower);
      printf("%d\n",upper);
      putchar(upper);

      return 0;
}*/


 Conforces_Solutions: 158 Next Round

#include <iostream>
using namespace std;
int a[200];
int main()
{
    int i=1,n,m,nn,mm;
    cin>>n>>m;
    nn=n;mm=m;

    while(nn--)
     cin>>a[i++];

        int count=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>=a[m]&&a[i]!=0)
                count++;
        }
        cout<<count<<endl;
       
        return 0;
        }


   




 Conforces_Solutions: 158 Next Round

#include <iostream>
using namespace std;
int a[200];
int main()
{
    int i=1,n,m,nn,mm;
    cin>>n>>m;
    nn=n;mm=m;

    while(nn--)
     cin>>a[i++];

        int count=0;
        if(a[m])
        {
            for(i=m+1;i<=n;i++)
            if(a[m]==a[i])
            count++;
            cout<<count+m<<endl;
        }
        else
        {
            for(i=1;i<=m;i++)
                if(a[i]==0)
                mm--;
            cout<<mm<<endl;

        }


    return 0;
}



 Conforces_Solutions: 4 Watermelon

#include<iostream>
#include<cstdio>
#include<cmath>
#include<set>
#include<list>
#include<stack>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2||n==2)
        cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;


}


 Conforces_Solutions: 1 Theatre Square

#include<iostream>
using namespace std;
int main()
{
    long long  a,b,c,t,t1;
    cin>>a>>b>>c;
    t=a/c;
    t1=b/c;
    if(a%c)
    t++;
    if(b%c)
        t1++;
    cout<<t*t1<<endl;
    return 0;
}



 Conforces_Solutions: 266 Stones on the Table

#include<iostream>
#include<cstdio>
using namespace std;
char ct,ch;
int main()
{
    int t,count=0;
    cin>>t;
    scanf("%c",&ch);
    for(int i=0;i<t;i++)
    {
        scanf("%c",&ch);
        if(ct==ch)
        count++;
         ct=ch;
    }
    cout<<count<<endl;
    return 0;

}

 Conforces_Solutions: 159 Matchmaker

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long n,m,st2[1005],st4[1005],st1[1005][1005],st3[1004][1005],i,j,a,b,x;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        st1[a][b]++;
        st2[b]++;
    }
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        st3[a][b]++;
        st4[b]++;
    }
    long result=0;
    for(i=1;i<=1000;i++)
    {
        for(j=1;j<=1000;j++)
        {
           long x=(st1[i][j]<st3[i][j])?st1[i][j]:st3[i][j];
           result+=x;
        }
    }
    long result1=0;
    for(i=1;i<=1000;i++)
    {
         x=(st2[i]<st4[i])?st2[i]:st4[i];
           result1+=x;

    }
    cout<<result1<<" "<<result<<endl;
}


 Conforces_Solutions: 136 Replacement

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long n,arry[100001];
int main()
{
    cin>>n;
    long i=0;
    while(n--)
    {
        cin>>arry[i++];
    }
    sort(arry,arry+i);
    if(arry[i-1]!=1)
        arry[i-1]=1;
    else
        arry[i-1]=2;
         sort(arry,arry+i);
         for(i=0;arry[i];i++)
            cout<<" "<<arry[i];
         cout<<"\n";

}


 Conforces_Solutions: 18 Stripe

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long a[100001],n;

int main()
{
    long result=0,i=1;
    cin>>n;
    while(n--)
    {
        cin>>a[i];
        result+=a[i];
        a[i]=result;
        i++;
    }
    long k=a[i-1],count=0;
    for(long j=1;j<i-1;j++)
    {
        if(k==2*a[j])
            count++;

    }
    cout<<count<<endl;
}


 Conforces_Solutions: 220 Little Elephant and Array

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long n,m,x,y,arry[100001],h[100001],l[450],d[450][100001],i,j;
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    cin>>arry[i];

    for(i=1;i<=n;i++)
    if(arry[i]<=n)
        h[arry[i]]++;

        long c=0;
        for(i=1;i<=n;i++)
        {
            if(h[i]>=i)
            l[c++]=i;
        }

        for(i=0;i<c;i++)
        {
            long k=l[i];
            for(j=1;j<=n;j++)
            {
                d[i][j]=d[i][j-1];
                if(k==arry[j])
                    d[i][j]++;
            }
        }

        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            long k=0;
            for(j=0;j<c;j++)
            {
                if((d[j][y]-d[j][x-1])==l[j])
                    k++;
            }
            cout<<k<<endl;

        }


}


 Conforces_Solutions: 276 Little Girl and Maximum Sum

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long arry[200005],add[200005];
int main()
{
    long n,m,nn,l,r;
  cin>>n>>m;
  nn=n;
  long int i=0;
  while(n--)
  {
      cin>>arry[i++];
  }
  sort(arry,arry+i);
  memset(add,0,sizeof(add));
  while(m--)
  {
      cin>>l>>r;
      add[l-1]++;add[r]--;
  }
  vector<long>v;
long  sum=0;
  for(i=0;i<nn;i++)
  {
      sum+=add[i];
      v.push_back(sum);

  }
  sort(v.begin(),v.end());
long long  result=0;

  for(i=0;i<nn;i++)
    result+=(long long)v[i]*arry[i];
  cout<<result<<endl;
  return 0;

}


 Conforces_Solutions: 315 Sereja and Array

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
int  arry[100100];
int main()
{
    long n,m,i=1,t,a,b,sum=0;
    cin>>n>>m;
    while(n--)
    cin>>arry[i++];
    while(m--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>a>>b;
            arry[a]=(b-sum);
        }
        else if(t==2)

            {cin>>a;
            sum+=a;
            }

        else
        {
            cin>>a;
            cout<<arry[a]+sum<<endl;
        }
    }


    return 0;
}


 Conforces_Solutions: 334 Candy Bags

#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
using namespace std;
int a[140][140];

int main()
{
    int count=0,n,i,j;
    cin>>n;
  // int nn=n;
  int nn=1;
    long  m=n*n;
     i=1,j=1;
    while(1)
    {
         if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;


        //printf("%d %d\n",i,j);
        if(a[i][j]==0)
        {
            //printf("%d %d %d \n",i,j ,nn);
           a[i][j]=nn++;
           i--;j++;

        if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        }
        else
        {
            j--;
            i++;

        if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        j--;
         if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        //printf("%d %d %d \n",i,j ,nn);
        a[i][j]=nn++;
         i--;j++;

        if(i==0) i=n;
        if(j==0) j=n;
        if(j>n) j=1;
        if(i>n) i=1;
        }
        count++;
        if(count==m)
            break;


    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}



 Conforces_Solutions: 81 Plug-in

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;


int main()
{
    char str[200050];
    vector<char>v;
    cin>>str;
    v.push_back(str[0]);
    for(long i=1;str[i];i++)
    {
        if(str[i]==v.back())
            v.pop_back();
        else
            v.push_back(str[i]);
    }
    for(long i=0;i<v.size();i++)
    cout<<v[i];
    cout<<endl;


}


 Conforces_Solutions: 330 Cakeminator

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main()
	{
	    int r,c,i,j;
	    cin>>r>>c;
	    char ch[100][100],ct;
	    int count3=0,count2=0;
             scanf("%c",&ct);
	    for(i=1;i<=r;i++)
        {
            int count1=0;
            for(j=1;j<=c;j++)
            {
                scanf("%c",&ch[i][j]);
                if(ch[i][j]=='S')
                count1++;
            }

            if(count1==0)
            count3++;
            scanf("%c",&ct);
        }


        	    //int result1=0;
	    for(j=1;j<=c;j++)
        {
             int count1=0;
            for(i=1;i<=r;i++)
            {
                //scanf("%c",&ch[i][j]);
                if(ch[i][j]=='S')
                count1++;


            }
            //scanf("%c",&ct);
            if(count1==0)
                //result1=result1+c;
                count2++;
        }
       long ans=count3*c+count2*(r-count3);
        cout<<ans<<endl;

    return 0;
    }

 Conforces_Solutions: 331 The Great Julya Calendar


#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
#define sp(a) sprintf(str,"%I64d",a)
using namespace std;
int main()
{
    long long count=0,st;
    char str[100];
    cin>>str;
    st=(long long)atol(str);
    while(st)
    {
      sp(st);
       long l=strlen(str);
      sort(str,str+l);
      st=st-str[l-1]+48;
      count++;

    }
    cout<<count<<endl;
    return 0;




}


 Conforces_Solutions: 325 Square and Rectangles

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    long long n,i,c,d,ans,a,b,result,mina=31401,minb=31401,maxc=-1,maxd=-1;
    cin>>n;
    result=0;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
       ans= fabs((a-c)*(b-d));
       result=result+ans;
      mina= min(mina,a);
      maxc=max(maxc,c);
      minb=min(minb,b);
      maxd=max(maxd,d);


    }


    if((maxc-mina)==(maxd-minb)&&((maxc-mina)*(maxd-minb)==result))
    cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;
}



 Conforces_Solutions: 327 Flipping Game

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n,count=0,i,j,k,arr[200],count1,max=-1000;
    cin>>n;
    for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)
        count++;
   }
   //cout<<count<<endl;


    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
         count1=count;
         int cc=1;

     for(k=i;k<=j;k++)
     {
         cc=0;
         if(arr[k]==1)
            count1--;
         else count1++;
     }
     if(cc==0&&max<count1)
        max=count1;
    }
    // cout<<count1<<endl;

       // cout<<max<<endl;
    }
    cout<<max<<endl;

    return 0;
}


 Conforces_Solutions: 327 Flipping Game

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n,count=0,i,j,k,arr[200],count1,max=-100;
    cin>>n;
    for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)
        count++;
   }
   //cout<<count<<endl;


    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
         count1=count;
         int cc=1;

     for(k=i;k<=j;k++)
     {
         cc=0;
         if(arr[k]==1)
            count1--;
         else count1++;
     }
     //cout<<count1<<endl;
     if(cc==0&&max<count1)
        max=count1;
    }
    cout<<max<<endl;

    return 0;
}


 Conforces_Solutions: 327 Flipping Game

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n,count=0,i,j,k,arr[200],count1,max=-1000;
    cin>>n;
    for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)
        count++;
   }
   //cout<<count<<endl;


    for(i=1;i<=n;i++)
    {
    for(j=i;j<=n;j++)
    {
         count1=count;

     for(k=i;k<=j;k++)
     {
         if(arr[k]==1)
            count1--;
         else count1++;
         
    }
        if(max<count1)
        max=count1;
    }


     //cout<<max<<endl;

    }
    cout<<max<<endl;

    return 0;
}


 Conforces_Solutions: 327 Flipping Game

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n,count=0,i,j,k,arr[200],count1,max=-1000;
    cin>>n;
    for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)
        count++;
   }
   //cout<<count<<endl;


    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
         count1=count;

     for(k=i;k<=j;k++)
     {
         if(arr[k]==1)
            count1--;
         else count1++;

      if(max<count1)
        max=count1;
        }
    }


     //cout<<max<<endl;

    }
    cout<<max<<endl;

    return 0;
}


 Conforces_Solutions: 30 Accounting

#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
    int a,b,i,x;
    scanf("%d%d%d",&a,&b,&x);
    for(i=-1000;i<=1000;i++)

        if(fabs(a*pow(i,x)-b)<0.1)
        {
            printf("%d\n",i);
            return 0;
        }
        printf("No solution");
        return 0;

}


 Conforces_Solutions: 30 Accounting

#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
    int a,b,i,x;
    scanf("%d%d%d",&a,&b,&x);
    for(i=-1000;i<=1000;i++)

        if(fabs(a*pow(i,x)-b)<0.01)
        {
            printf("%d\n",i);
            return 0;
        }
        printf("No solution");
        return 0;

}


 Conforces_Solutions: 30 Accounting

#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
    int a,b,i,x;
    scanf("%d%d%d",&a,&b,&x);
    for(i=-1000;i<=1000;i++)

        if(fabs(a*pow(i,x)-b)<0.00001)
        {
            printf("%d\n",i);
            return 0;
        }
        printf("No solution");
        return 0;

}


 Conforces_Solutions: 327 Hungry Sequence

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long int N = 12500000;
long int status[12500000];
// status[i] = 0, if i is prime
// status[i] = 1, if i is not a prime
int main() {
long int i, j;
// initially we think that all are primes
for( i = 2; i <= N; i++ )
status[i] = 0;
for( i = 3; i <= N; i += 2 )
{
if( status[i] == 0 )
{
// so, i is a prime, so, discard all the multiples
// 3 * i is odd, since i is odd. And j += 2 * i, so, the next odd
// number which is multiple of i will be found
for( j = 3 * i; j <= N; j += 2 * i )
status[j] = 1; // status of the multiple is 1
}
}
// print the primes
//printf("2 ");
long nnn;
cin>>nnn;
int count=0;
for( i = 3; i <= N; i += 2 )
{
if( status[i] == 0 )
{
    count++;
    //cout<<count<<endl;
// so, i is prime
printf("%ld ", i);
if(count==nnn)
break;

}
}
//cout<<count<<" "<<endl;

return 0;
}


 Conforces_Solutions: 327 Hungry Sequence

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
long int N = 10500000;
long int status[10500000];
// status[i] = 0, if i is prime
// status[i] = 1, if i is not a prime
int main()
{
long int i, j;
// initially we think that all are primes
for( i = 2; i <= N; i++ )
status[i] = 0;
for( i = 3; i <= N; i += 2 )
{
if( status[i] == 0 )
{
// so, i is a prime, so, discard all the multiples
// 3 * i is odd, since i is odd. And j += 2 * i, so, the next odd
// number which is multiple of i will be found
for( j = 3 * i; j <= N; j += 2 * i )
status[j] = 1; // status of the multiple is 1
}
}
// print the primes
//printf("2 ");
long nnn;
cin>>nnn;
int count=0;
for( i = 3; i <= N; i += 2 )
{
if( status[i] == 0 )
{
    count++;
// so, i is prime
printf("%ld ", i);
if(count==nnn)
break;

}
}
//cout<<count<<" "<<endl;

return 0;
}


 Conforces_Solutions: 322 Ciel and Flowers

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    long r,g,b,mina,ans,r1,g1,b1;
    cin>>r>>g>>b;
        mina=r;
        if(b<mina) mina=b;
       if(g<mina) mina=g;
        ans=mina;
        r1=r-mina; g1=g-mina; b1=b-mina;
        ans=ans+r1/3+g1/3+b1/3;
        if(r!=0&&g!=0&&b!=0)
        if((r1%3==2&&g1%3==2)||(r1%3==2&&b1%3==2)||(g1%3==2&&b1%3==2))
        ans++;
        cout<<ans<<endl;
return 0;
}


 Conforces_Solutions: 322 Ciel and Dancing

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int a,b,i,j;
    cin>>a>>b;
    cout<<b+a-1<<endl;
    i=1;
    for(j=1;j<=b;j++)
    cout<<i<<" "<<j<<endl;
    for(j=a;j>=2;j--)
    {
        cout<<j<<" "<<b<<endl;
    }
    return 0;



}


 Conforces_Solutions: 322 Ciel and Dancing

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int a,b,i,j;
    cin>>a>>b;
    cout<<b+a-1<<endl;
    i=1;
    for(j=1;j<=b;j++)
    cout<<i<<" "<<j<<endl;
    for(j=2;j<=a;j++)
    {
        cout<<j<<" "<<b<<endl;
    }
    return 0;



}


 Conforces_Solutions: 320 Magic Numbers

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    char str[20];
    int i;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {


         if((str[i]=='1'&&str[i+1]=='4')&&(str[i+1]=='4'&&str[i+2]=='4'))
          {
               i=i+2;
               continue;
          }
            if(str[i]=='1'&&str[i+1]=='4')
        { i++;continue;};
        if(str[i]=='1')
            ;


            else
           {
        cout<<"NO"<<endl;
        break;}


    }
    if(i==strlen(str))
        cout<<"YES"<<endl;

    return 0;
}


 Conforces_Solutions: 318 Strings of Power

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
char str[1000005];
int main()
{
    long long i,j,count=0;

    cin>>str;
   long long l=strlen(str);

   for(i=0;i<l;i++)
   {
       if(str[i]=='h'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='v'&&str[i+4]=='y')
       {
           long long h=1;
           for(j=i+5;j<l;j++)
           {
               if(str[j]=='h'&&str[j+1]=='e'&&str[j+2]=='a'&&str[j+3]=='v'&&str[j+4]=='y')
                h++;
               if(str[j]=='m'&&str[j+1]=='e'&&str[j+2]=='t'&&str[j+3]=='a'&&str[j+4]=='l')
               {
                   j=j+4;
                 count=count+h;

               }
           }
           break;
       }
   }
   cout<<count<<endl;
   return 0;
}


 Conforces_Solutions: 318 Even Odds

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    long long n,k,b,b1;
cin>>n>>k;
if(n%2==0)
{
    b=n/2;
    if(k<=b)
    cout<<k*2-1<<endl;
    else
       {b1=k-b;
       cout<<b1*2<<endl;
       }

}
else
{
    b=n/2;
    if(k<=b+1)
    cout<<k*2-1<<endl;
    else
       {b1=k-b-1;
       cout<<b1*2<<endl;
       }

}

    return 0;
}


 Conforces_Solutions: 315 Sereja and Bottles

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    int n,a[105],b[105];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
        int count=0;

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(i!=j&&a[i]==b[j])
        {
            count++;
            break;
        }
    }
    cout<<n-count<<endl;



}


 Conforces_Solutions: 244 Dividing Orange

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    int n,k,t,t1[40],st[1000];
    cin>>n>>k;
    int r=k;
    t=n*k;
    for(int i=1;i<=1000;i++)
        st[i]=1;

    for(int i=1;i<=r;i++)
    {
        cin>>t1[i];

        st[  t1[i]]=0;
    }

    for( int i=1;i<=r;i++)

    {
        cout<<t1[i];
          int count=0;
        for(int j=1;j<=t;j++)
        {

            if(st[j]==1)
            {
                if(count==(n-1))
                break;
                count++;

                cout<<" "<<j;
                st[j]=0;


            }

        }
        cout<<endl;
        }

return 0;

}


 Conforces_Solutions: 230 T-primes

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
bool isPrime( long long i )
{
 long  long sqrtI =  long( sqrt( (double) i) );
for( long long j = 2; j <= sqrtI; j++ )
{
if( i % j == 0 )
return false;
}
return true;
}

int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        long long t,t1;
        cin>>t;
        if(t==0||t==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        t1=sqrt(t);
        if(t1*t1!=t)
            cout<<"NO"<<endl;
        else
        {
            if( isPrime(t1) == true )
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;


        }
    }
    return 0;

}


 Conforces_Solutions: 230 Dragons

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
typedef pair<int,int>pI;
int main()
{
    vector<pI>v;
    int s,t,m,n;

    cin>>s>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>m>>n;
        v.push_back(make_pair(m,n));

    }
    sort(v.begin(),v.end());
    int count=0;

        for(int i=0;i<t;i++)
    {
        if(s>v[i].first)
        {
            s=s+v[i].second;
            count++;
        }
        else
        break;

    }
    if(count==t)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}


 Conforces_Solutions: 285 Find Marble


#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<iostream>
#include<string>
#include<list>
#include<set>
#include<stack>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,s,t;
    vector<int>v;
    cin>>n>>s>>t;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
       v.push_back(k);
    }
    int count=0;
    while(s)
    {
        if(s==t)
        break;
        int m=v[s-1];
        v[s-1]=0;
        s=m;
        count++;
        }
        if(s)
        cout<<count;
        else
        cout<<-1<<endl;
        return 0;


}


 Conforces_Solutions: 285 Slightly Decreasing Permutations

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    long n,k,i,t;
    cin>>n>>k;
    t=n-k-1;
    for(i=1;i<=t;i++)
        cout<<i<<" ";
    for(i=n;i>=t+1;i--)
        cout<<i<<" ";
    return 0;



}


 Conforces_Solutions: 208 Prizes, Prizes, more Prizes

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n,a[55],p[5],q[5]={ },sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        for(int j=4;j>-1;j--)
            if(p[j]<=sum)
        {
            q[j]+=sum/p[j];
            sum%=p[j];
        }
    }
    cout<<q[0];
    for(int i=1;i<5;i++)
        cout<<' '<<q[i];
    cout<<endl<<sum<<endl;
}


 Conforces_Solutions: 208 Dubstep

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()

{
    char str[500];
    int i;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
            i=i+2;
            cout<<" ";
            continue;
        }
        cout<<str[i];
        }
        return 0;

}


 Conforces_Solutions: 225 Dice Tower

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    int a[105],b[105],n,n1,i,c=1;
    cin>>n>>n1;
    for(i=1;i<=n;i++)
    cin>>a[i]>>b[i];
     for(i=1;i<=n;i++)
     {
          if(a[i]==n1||b[i]==n1)
          {cout<<"NO";c=0;break;}
           if(a[i]==7-n1||b[i]==7-n1)
          {cout<<"NO";c=0;break;}

     }
     if(c==1)
        cout<<"YES";
     return 0;
}


 Conforces_Solutions: 208 Dubstep

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[240];
    int l,i,c;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='W' && str[i+1]=='U'&&str[i+2]=='B')
        {
            c=0;
            i=i+2;
            continue;
        }
        if(c==0)
        {
             printf(" %c",str[i]);
             c=1;
        }

       else printf("%c",str[i]);
    }
    return 0;
}


 Conforces_Solutions: 202 LLPS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    char str[23],ch;
    cin>>str;
    int c[130];
    for(int i=97;i<=122;i++)
    c[i]=0;

    for(int i=0;i<strlen(str);i++)
    c[str[i]]++;
    for(int i=122;i>=97;i--)
    {
        if(c[i]!=0)
        {
            ch=i;
            break;
        }}
        for(int i=0;i< c[ch];i++)
        cout<<ch;
        return 0;
}


 Conforces_Solutions: 302 Eugeny and Play List

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

int main ()
{
    long sum=0,j=0,i,st,arr[100099],count1=0,n,m,a,b;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        st=a*b;
        sum=sum+st;
        arr[j++]=sum;

    }
       j=0;
    for(i=0;i<m;i++)
    {
        cin>>st;

        while(arr[j]<st)
        {
            count1++;
            j++;
        }
        cout<<count1+1<<endl;
        }
    return 0;
}


 Conforces_Solutions: 302 Eugeny and Array

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    long n,m,i,st,count1=0,count2=0,coco,li,ri;
cin>>n>>m;
for(i=0;i<n;i++)
{
    cin>>st;
    if(st==1)
        count1++;
    else
        count2++;
}
if(count2<count1)
coco=count2*2;
else
    coco=count1*2;

for(i=0;i<m;i++)
{
    cin>>li>>ri;
    if(count1==0||count2==0)
    {
        cout<<0<<endl;
        continue;
    }
    if(ri-li+1==1)
        cout<<0<<endl;
    else
    {
    if((ri-li+1)<=coco && (ri-li+1) %2==0)
    cout<<1<<endl;
    else
        cout<<0<<endl;
    }
}
return 0;
}


 Conforces_Solutions: 262 Roma and Lucky Numbers

#include<stdio.h>
#include<string.h>
int main()
{
    long n,k;
    char st[20];
    scanf("%ld %ld",&n,&k);
    long m=n;
    for(long i=0;i<n;i++)
    {
        scanf("%s",st);
        long count=0;
        for(long j=0;j<strlen(st);j++)
        {
            if(st[j]=='4'||st[j]=='7')
                count++;

        }
        if(count>k)
            m--;
    }
    printf("%ld\n",m);
    return 0;
}


 Conforces_Solutions: 300 Array

#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;
int main()
{
    int n,j=1,k=1,l=1,p[1010],q[1010],r[1010],a;
    bool test=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>a;
       if(a<0)
            p[j++]=a;
       else if(a>0)
        q[k++]=a;
       else
         r[l++]=a;
    }
    j=j-1;k=k-1;
    if(k==0)
    {
      test=true;
      q[0]=p[j--];
      q[1]=p[j--];
    }
if((j)%2)
{
    cout<<j;
    for(int i=1;i<=j;i++)
        cout<<" "<<p[i];
}
if((j)%2==0)
{
    cout<<j-1;
    for(int i=1;i<j;i++)
        cout<<" "<<p[i];
        r[l++]=p[j];
}
cout<<endl;
if(test)
{
    cout<<"2"<<" "<<q[0]<<" "<<q[1]<<endl;
}
else
{
    cout<<k;
    for(int i=1;i<=k;i++)
        cout<<" "<<q[i];
    cout<<endl;
}
cout<<l-1;
for(int i=1;i<l;i++)
    cout<<" "<<r[i];
cout<<endl;
    return 0;
}


 Conforces_Solutions: 265 Roadside Trees (Simplified Edition)

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    long test,n,h,i,count;
    scanf("%ld",&test);
    scanf("%ld",&n);
    count=n+1;h=n;
    for(i=2;i<=test;i++)
    {
       scanf("%ld",&n);
       count+=abs(h-n)+2;
       h=n;
    }
    printf("%ld\n",count);

    return 0;
}


 Conforces_Solutions: 265 Colorful Stones (Simplified Edition)

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define eps 1e-9
#define open freopen("input.txt","r",stdin)
#define close freopen ("output.txt","w",stdout)
#define rep(i,n)  for(i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=0; i<=(n); i++)
#define rep2(i,n) for(__typeof(n) i=1; i<=(n); i++)
#define rep3(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define pi 3.14159265358979323846264338327950
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
    char str[100]={0},str1[100]={0};
    scanf("%s",str);
    scanf("%s",str1);
   int j=0;
    int l=strlen(str1),count=0;
    for(int i=0;i<l;i++)
    {
        if(str[j]==str1[i])
        {
            count++;
            j++;
        }

    }
    printf("%d\n",count+1);
return 0;
}


 Conforces_Solutions: 296 Yaroslav and Permutations

#include<stdio.h>
int s1[1004]={0};
int main()
{
    int t,i,s[105];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&s[i]);
    s1[s[i]]++;
    }
    for(i=1;i<=t;i++)
    if(s1[s[i]]>(t+1)/2)
        {
            printf("NO\n");
            return 0;
        }
        printf("YES\n");

}


 Conforces_Solutions: 294 Shaass and Oskols

#include<stdio.h>
#include<math.h>
int main()
{
    int i,k,t,t1,a1,b1,A[1000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    scanf("%d",&A[i]);
    scanf("%d",&t1);
    for(k=1;k<=t1;k++)
    {
        scanf("%d%d",&a1,&b1);

        if(a1+1<=t)
        A[a1+1]=A[a1]-b1+A[a1+1];
        if(a1-1>0)
        A[a1-1]=A[a1-1]+b1-1;
        A[a1]=0;
    }
    for(i=1;i<=t;i++)
    printf("%d\n",A[i]);
    return 0;

}


 Conforces_Solutions: 282 Bit++

#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<queue>
#define inf 1600005
#define M 40
#define N 505
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
    char a[10];
    int n,i,count=0;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        if(a[1]=='+')
        count++;
        else
        count--;
    }
    printf("%d\n",count);
    return 0;
}



 Conforces_Solutions: 281 Word Capitalization

#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<queue>
#define inf 1600005
#define M 40
#define N 505
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
    char  s[1050];
    int i;
    scanf("%s",s);
    if(s[0]>=97&&s[0]<=122)
    s[0]=s[0]-32;
    printf("%s\n",s);
    return 0;
}




 Conforces_Solutions: 222 Shooshuns and Sequence 

#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,st[100005],i,j,c,count,k;
    scanf("%ld %ld",&a,&b);

    for(i=1;i<=a;i++)
    scanf("%ld",&st[i]);


        c=0;
        for(j=b+1;j<=a;j++)
        {
            if(st[b]!=st[j])
            {
                c=1;
                printf("-1\n");
                break;
            }
        }
        if(c==0)
        {
            count=0;
            for(k=b-1;k>=1;k--)
            {
                if(st[b]==st[k])
                count++;

                else
                break;

            }
            if(count==(b-1))
            printf("0\n");
            else
           printf("%ld\n",b-1-count);
        }



    return 0;
}


 Conforces_Solutions: 71 Progress Bar

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,k,t,i,k1,j,i2;
    float a,a1,a2;
    scanf("%d %d %d",&n,&k,&t);
    if(n==1&&k==1&&t==0)
    printf("0");

    else
    {

    a=(float)t/100.0;
    //printf("%lf",a);
    for(i=1;i<=n;i++)
    {
    a1=(float)(k*i)/(n*k);
    if(a1>=a)
    {
        if(a==a1)
        i2=i;
        else
        i2=i-1;
        break;

    }

    }


   // printf(" %d",i2);
    for(j=1;j<=k;j++)
    {
       a2=(float) ((k*i2)+j)/(n*k);
       //printf("%f %f\n",a2,a);
       if(a2>=a)
       {
           if(a==a2)
           j=j;
           else
           j=j-1;
           break;
       }

    }

    for(k1=0;k1<i2;k1++)
    printf("%d ",k);
    if(j>0)
    {
    printf("%d ",j);
    i2++;
    }
   for( j=i2+1;j<=n;j++)
   {
       if(j==n)
       printf("0");
       else
       printf("0 ");
   }
    }
return 0;

}


 Conforces_Solutions: 71 Way Too Long Words

#include<string.h>
#include<stdio.h>
#include<math.h>
int main()

{
    char str[104]={};
    int l,s,i;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {


    scanf("%s",str);
    l=strlen(str);
    if(l>10)
    {
      printf("%c%d%c\n",str[0],l-2,str[l-1]);
    }
    else
    printf("%s\n",str);
    }
    return 0;

}


 Conforces_Solutions: 205 Little Elephant and Interval

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long a,b;
    char buff[100],buff1[100];
    long long a3,a4,a1,a2,b1,b2,count,count1=0,count2=0;
    scanf("%I64d %I64d",&a,&b);
    sprintf(buff,"%I64d",a);
    sprintf(buff1,"%I64d",b);
    a3=buff[0]-48;
    a4=buff1[0]-48;
    if(a<10)
    count1=a;
    else
    {
        a1=a/10;
        a2=a%10;
        if(a<100)
        count1=9+a1-1;
        else
        count1=8+a1;
        if(a2>=a3)
        count1++;
    }


     if(b<10)
    count2=b;
    else
    {
        b1=b/10;
        b2=b%10;

        if(b<100)
        count2=9+b1-1;
        else
        count2=8+b1;
        if(b2>=a4)
        count2++;
    }
    count=count2-count1;
    if(a2==a3||a<10)
    count++;
    printf("%I64d\n",count);
    return 0;

    }





 Conforces_Solutions: 205 Little Elephant and Interval

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long a,b;
    char buff[100],buff1[100];
    long long a3,a4,a1,a2,b1,b2,count,count1=0,count2=0;
    scanf("%I64d %I64d",&a,&b);
    sprintf(buff,"%I64d",a);
    sprintf(buff1,"%I64d",b);
    a3=buff[0]-48;
    a4=buff1[0]-48;
    //printf("%ld %ld",a3,a4);
    if(a<10)
    count1=a;
    else
    {
        a1=a/10;
        a2=a%10;
        if(a<100)
        {
        count1=9+a1-1;

        }
        else
        {
            count1=8+a1;

        }
        if(a2>=a3)
        count1++;
    }


     if(b<10)
    count2=b;
    else
    {
        b1=b/10;
        b2=b%10;

        if(b<100)
        {
        count2=9+b1-1;

        }
        else
        {
            count2=8+b1;

        }

        if(b2>=a4)
        count2++;
    }
    //printf("%ld %ld",count1,count2);
    count=count2-count1;
    if(a2==a3||a<10)
    count++;
    printf("%I64d\n",count);
    return 0;

    }






 Conforces_Solutions: 116 Little Pigs and Wolves

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int count=0,i,j,t1,t2;
    char str[20][20]={},c1;
    scanf("%d %d",&t1,&t2);
    for(i=0;i<t1+2;i++)
    {
        for(j=0;j<t2+2;j++)
        {
            str[i][j]=0;
        }
    }
    scanf("%c",&c1);
    for(i=1;i<=t1;i++)
    {
        for(j=1;j<=t2;j++)
        {
        scanf("%c",&str[i][j]);
        }
        scanf("%c",&c1);
    }
    for(i=1;i<=t1;i++)
    {
        for(j=1;j<=t2;j++)
        {
            if(str[i][j]=='W')
            {
              if(str[i][j+1]=='P')
              {
                  str[i][j+1]=0;
                 count++;
              }

              else if(str[i][j-1]=='P')
              {
                  str[i][j-1]=0;
                  count++;
              }

              else if(str[i+1][j]=='P')
              {
                  str[i+1][j]=0;
                 count++;
              }

              else if(str[i-1][j]=='P')
              {
                  str[i-1][j]=0;
                count++;
              }

            }
        }
    }
    printf("%d\n",count);
    return 0;
}


 Conforces_Solutions: 116 Tram

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
#define MAX 3500
using namespace std;
int main()
{
    int t,t1,i,max,a[1000],b[1000],c[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d %d",&a[i],&b[i]);
    c[0]=b[0];
    max=c[0];
    if(t==2)
    printf("%d\n",b[0]);
    else

    {
        for(i=0;i<t-2;i++)
     {
       t1=c[i]-a[i+1];
       c[i+1]=t1+b[i+1];
       if(max<c[i+1])
       max=c[i+1];
    }
    printf("%d\n",max);
    }


  return 0;
}


 Conforces_Solutions: 205 Little Elephant and Rozdil

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
#define MAX 3500
using namespace std;
int main()
{

   long  i,t,c=0,st[100005],min,j,count=0;
   scanf("%ld",&t);
    for(i=0;i<t;i++)
    scanf("%ld",&st[i]);
    min=1000000008;
    for(i=0;i<t;i++)
    {
        if(min>st[i])
        min=st[i];
    }
    for(i=0;i<t;i++)
    {
        if(st[i]==min)
        {
         j=i;
        count++;
        }
    }
    if(count==1)
    printf("%ld\n",j+1);
    else
    printf("Still Rozdil\n");

    return 0;
}


 Conforces_Solutions: 137 Permutation

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int sb[5001]={0},a1[5001],a,i,count=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&a1[i]);
        sb[a1[i]]++;
    }
    for(i=1;i<=a;i++)
    {
        if(sb[i]==0)
            count++;

    }
    printf("%d\n",count);
    return 0;
}


 Conforces_Solutions: 137 Postcards and photos

#include<stdio.h>
#include<string.h>
int main()
{
char str[110]={};
int i,j,count,v;
    scanf("%s",str);
    count=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='C')
        {
            v=0;
            while(str[i]=='C')
            {
                v++;
                i++;
            }
            if(v<=5)
            count=count+1;
             if((v%5==0)&&v>5)
            {
                j=v/5;
                count= j+count;
            }

             if((v%5!=0)&&(v>5))
            {
                j=v/5;
                count=count+j+1;
            }
        }
        if(str[i]=='P')
        {
            v=0;
            while(str[i]=='P')
           {
              v++;
               i++;
           }

            if(v<=5)
            count=count+1;
             if((v%5==0)&&v>5)
            {
                j=v/5;
                count= j+count;
            }

             if((v%5!=0)&&(v>5))
            {
                j=v/5;
                count=count+j+1;
            }


        }
        i=i-1;


        }
    printf("%d\n",count);
    return 0;
}


 Conforces_Solutions: 219 k-String

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
#define MAX 3500
using namespace std;
int main()
{
    int t,i,l,a[150],c,t1,j,k;
    char str[1050],str1[1050]={},sb[30]={};
   scanf("%d",&t);
   c=0;
    scanf("%s",str);
    for(i=90;i<130;i++)
    a[i]=0;
    l=strlen(str);
    for(i=0;i<l;i++)
        a[str[i]]++;

        k=0;
        for(i=90;i<125;i++)
        if(a[i]!=0)
        {
        sb[k]=i;
        k++;
        }
        sb[k]=0;

        for(i=0;sb[i]!=0;i++)
        {
            if((a[sb[i]]%t)!=0)
            {

            printf("-1\n");
            c=1;
            break;
            }
            }
            k=0;
            if(c==0)
            for(i=0;sb[i]!=0;i++)
            {
                t1=a[sb[i]]/t;
                for(j=0;j<t1;j++)
                {
                    str1[k]=sb[i];
                    c=2;k++;
                    printf("%c",sb[i]);
                }
                }

        str1[k]=0;
        if(c==2)
        {
            for(i=0;i<t-1;i++)
            printf("%s",str1);
        }
        printf("\n");

        return 0;
}


 Conforces_Solutions: 166 Rank List

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,k,i,j,c=0,a[55],b[55],t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
              t=a[i];
              a[i]=a[j];
              a[j]=t;

              t=b[i];
              b[i]=b[j];
              b[j]=t;
            }
            if(a[j]==a[i]&&b[i]>b[j])
            {
                t=a[i];
               a[i]=a[j];
               a[j]=t;

              t=b[i];
              b[i]=b[j];
              b[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[k-1]==a[i]&&b[i]==b[k-1])
        c++;
    }
    printf("%d\n",c);

}


 Conforces_Solutions: 141 Amusing Joke

#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
    char str[200],str1[200],str2[200];
    int i,j,l,l1,l2,a[200],b[200],c=1;
    scanf("%s %s %s",str,str1,str2);
    l=strlen(str);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=50;i<200;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(i=0;i<l;i++)
    {
      a[str[i]]++;
    }
    for(i=0;i<l1;i++)
    {
      a[str1[i]]++;
    }
    for(i=0;i<l2;i++)
    {
      b[str2[i]]++;
    }
    for(i=50;i<200;i++)
    {
       if(a[i]!=b[i])
       {
           c=0;
       printf("NO\n");
       break;

       }
    }
    if(c==1)
    printf("YES\n");

}


 Conforces_Solutions: 260 Adding Digits

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long int n,m,d,a[100001],c,g,h,j,i,k;
    double b;
    scanf("%ld %ld %ld",&n,&m,&d);
    j=1;g=0;h=0;
    k=n%m;
    a[0]=n;
    while(1)
    {
        for(i=0;i<10;i++)
        {
        n=k*10+i;
        if(n%m==0)
        {
        a[j++]=i;
        n/=m;
        k=0;
        g=0;
        break;
        }
        else
        g=1;
        }
        h++;
        if(g==1)
        {
            printf("-1\n");
            break;
        }
        else if(d==h)
        break;
    }
    if(g==0)
    for(i=0;i<j;i++)
    printf("%ld",a[i]);
    printf("\n");
    return 0;
}


 Conforces_Solutions: 259 Little Elephant and Bits

#include<stdio.h>
#include<string.h>
int main()
{
char a[100001]={0}, b[100001]={0};
scanf("%s",a);
long l,v=0,i,s=0;
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='0')
{
if(v==1)
b[s++]=a[i];
v=1;
}
else
b[s++]=a[i];
}
if(!v)
for(i=0;i<s-1;i++)
printf("%c",b[i]);
else
for(i=0;i<s;i++)
printf("%c",b[i]);

return 0;
}


 Conforces_Solutions: 259 Little Elephant and Bits

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100001];
    int i,f=0;
    scanf("%s",str);
    for(i=0;str[i+1]!=0;i++)
    {
      if(str[i]=='0'&&!f)
      {
          f=1;
          continue;
      }
      printf("%c",str[i]);
    }
    if(f)
    printf("%c",str[i]);
    return 0;

}


 Conforces_Solutions: 259 Little Elephant and Bits

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100001];
    int i,t=0;

    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    if(str[i]=='0')
        {
            t=1;
            str[i]=3;
            break;
        }
        if(t==0)
        str[0]=2;
        for(i=0;str[i]!=0;i++)
        if(str[i]=='0'||str[i]=='1')
        printf("%c",str[i]);
return 0;
}


 Conforces_Solutions: 259 Little Elephant and Bits

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[100001];
    int i,t=0;

    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    if(str[i]=='0')
        {
            t=1;
            str[i]=-1;
            break;
        }
        if(t==0)
        str[0]=-1;
        for(i=0;str[i]!=0;i++)
        if(str[i]=='0'||str[i]=='1')
        printf("%c",str[i]);
        printf("\n");
return 0;
}


 Conforces_Solutions: 259 Little Elephant and Chess

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char tt[10][10];
    int i,c=0,j;

    for(i=0;i<8;i++)
    {
        scanf("%s",tt[i]);
    }
    for(j=0;j<8;j++)
    {
        for(i=0;i<8;i++)
        {
           if(((tt[j][i]=='B'&&tt[j][i+1]=='B')||tt[j][i]=='W'&&tt[j][i+1]=='W'))
           {
               c=1;
               printf("NO\n");
               break;
           }

        }
       if(c==1)
        break;
        }
        if(c==0)
        printf("YES\n");
        return 0;

}


 Conforces_Solutions: 255 Code Parsing

#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000010];
    long count,count1,l,i,j;
   while(scanf("%s",str)!=EOF)
   {

    l=strlen(str);
    count=count1=0;
    for(i=0;i<l;i++)
    {
        if(str[i]==120)
        count++;
        else
        count1++;
    }
    if(count==0||count1==0)
    printf("%s\n",str);
    else if(count>count1)
    {
        for(j=0;j<count-count1;j++)
        printf("x");
    }

    else
    {
        for(j=0;j<count1-count;j++)
        printf("y");
    }
    printf("\n");

    }
    return 0;
    }


 Conforces_Solutions: 255 Greg's Workout

#include<stdio.h>
#include<math.h>
int main()
{
    long a,test,i,t,ans1,ans2,ans3;
   while(scanf("%ld",&test)!=EOF)
   {
    ans1=ans2=ans3=0;
    for(i=1;i<=test;i++)
    {
       if(i==1||i==4||i==7||i==10||i==13||i==16||i==19)
       {
           scanf("%ld",&t);
           ans1=ans1+t;
       }
       if(i==2||i==5||i==8||i==11||i==14||i==17||i==20)
       {
           scanf("%ld",&t);
           ans2=ans2+t;
       }
       if(i==3||i==6||i==9||i==12||i==15||i==18)
       {
           scanf("%ld",&t);
           ans3=ans3+t;
       }
    }
    if(ans1>ans2)
    {
        if(ans1>ans3)
        printf("chest\n");
        else
        printf("back\n");
    }
    else
    {
        if(ans3>ans2)
        printf("back\n");
        else
        printf("biceps\n");
    }
   }

}


 Conforces_Solutions: 248 Cupboards

#include<stdio.h>
#include<math.h>
int main()
{
    long i,a,b,T,count,count1,count2,count3,s;

    scanf("%ld",&T);
    count=count1=count2=count3=0;
    for(i=0;i<T;i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a==0)
        count++;
        if(a==1)
        count1++;
        if(b==0)
        count2++;
        if(b==1)
        count3++;
    }
    if(count<count1)
    a=count;
    else
    a=count1;
    if(count2<count3)
    s=count2;
    else
    s=count3;

    printf("%ld",a+s);
    return 0;
}


 Conforces_Solutions: 245 System Administrator

#include<stdio.h>
#include<math.h>
int main()
{
    long test,ans,ans1,a,b,c,b1,b2,i;
    scanf("%ld",&test);
    ans=ans1=b1=b2=0;
    for(i=0;i<test;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a==1)
        {

        ans=ans+b+c;
        b1=b1+b;
        }
        else
        {

        ans1=ans1+b+c;
        b2=b2+b;
        }
    }
    if(b1>=(ans/2))
    printf("LIVE\n");
    else
    printf("DEAD\n");
    if(b2>=(ans1/2))
    printf("LIVE\n");
    else
    printf("DEAD\n");
    return 0;
}


 Conforces_Solutions: 231 Team

#include<stdio.h>
int main()
{
    long n,i,count,a,b,c,d;
    scanf("%ld",&n);
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        d=a+b+c;
        if(d>=2)
        count++;
    }
    printf("%ld\n",count);
    return 0;
}
