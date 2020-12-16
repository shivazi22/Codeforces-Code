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
