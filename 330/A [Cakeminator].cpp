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