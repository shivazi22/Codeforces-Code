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
