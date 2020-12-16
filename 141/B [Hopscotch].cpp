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
