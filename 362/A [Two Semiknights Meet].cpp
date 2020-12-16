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
