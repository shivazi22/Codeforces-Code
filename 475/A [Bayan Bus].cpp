#include<bits/stdc++.h>
using namespace std;
char str[50][50];

int i,j,n;

int main()
{
    cin>>n;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=15;j++)
        {
            if(i==1||i==6)
            {

                if(j==1||j==15)
                str[i][j]='1';
                else
                str[i][j]='2';

                    if(j==13||j==14)
                    str[i][j]='9';

            }
            if(i>=2&&i<=5)
            {
                if(j==1||j==15)
                {
                    str[i][j]='3';

            }
                if(j==13)
                {

                    if(i==4)
                    {
                        str[i][j]='4';

                       // printf(".");
                    }
                    else
                        str[i][j]='3';
                }

            }


            if(i==2&&j==14)
            {
                str[i][j]='5';
            }
            if(i>=3&&i<=5)
            {
                if(j==14)
                {
                    str[i][j]='4';

                }
            }
        }

    }

    int cnt=0;
    for(j=2;j<=12;j++)
    {
        for(i=2;i<=5;i++)
        {

                      if(i==4)
                    {
                        if(n>=3&&j==2)
                           {
                               str[i][j]='6';
                               cnt++;
                           }
                        else
                        {
                            if(j>2)
                            str[i][j]='8';
                        }


                    }

                    if(str[i][j]=='1')
                      ;
            else if(str[i][j]=='2')
                ;
            else if(str[i][j]=='3')
                ;
                else if(str[i][j]=='4')
                ;
                else if(str[i][j]=='5')
                ;
                else if(str[i][j]=='6')
                    ;

                    else if(str[i][j]=='8')
                        ;
                    else if(str[i][j]=='9')
                        ;
                    else
                    {

                    if(cnt<n&&i>=2&&i<=5)
                    {
                        str[i][j]='6';
                        cnt++;
                    }
                    //else
                        //str[i][j]='7';

                    }

                }




    }

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=15;j++)
    {

        if(str[i][j]=='1')
                printf("+");
            else if(str[i][j]=='2')
                printf("--");
            else if(str[i][j]=='3')
                printf("|");
                else if(str[i][j]=='4')
                printf(".");
                else if(str[i][j]=='5')
                printf("D");
                else if(str[i][j]=='6')
                    printf("O.");

                    else if(str[i][j]=='8')
                        printf("..");
                    else if(str[i][j]=='9')
                        printf("-");
                    else
                    printf("#.");

                 if(i==2||i==5)
                    if(j==15)
                    printf(")");

    }
    printf("\n");
    }
    return 0;
}

