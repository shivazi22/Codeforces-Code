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

