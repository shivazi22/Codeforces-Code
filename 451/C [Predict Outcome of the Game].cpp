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


