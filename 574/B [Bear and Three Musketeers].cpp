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
