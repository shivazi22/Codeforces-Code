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
