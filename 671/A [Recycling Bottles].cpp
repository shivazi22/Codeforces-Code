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


