 #include<bits/stdc++.h>
 using namespace std;
 long arry[100400];


 int main()
{
    long n,m,a,b,c,i,aa,bb,cc;
    cin>>n>>m;
    while(m--)
    {
        cin>>aa>>bb>>cc;
        a=aa;
        b=bb;
        c=cc;


          int a2=a;
          int b2=b;
          int c2=c;



            if(arry[a2]==1)
            {
                arry[b2]=2;
                arry[c2]=3;
                continue;
                }
            else if(arry[b]==1)
            {
                arry[a]=2;
                arry[c]=3;
                continue;
                }
            else if(arry[c]==1)
            {
                arry[b]=2;
                arry[a]=3;
                continue;
                }




            if(arry[a]==2)
            {arry[b]=1;arry[c]=3;continue;}
            else  if(arry[b]==2)
            {arry[a]=1;arry[c]=3;continue;}
            else   if(arry[c]==2)
            {arry[b]=1;arry[a]=3;continue;}


            if(arry[a]==3)
            {arry[b]=1;arry[c]=2;continue;}
            else if(arry[b]==3)
            {arry[a]=1;arry[c]=2;continue;}
            else if(arry[c]==3)
            {arry[b]=1;arry[a]=2;continue;}

           if((arry[a]==0&&arry[b]==0)&&(arry[b]==0&&arry[c]==0))
           {

               arry[a]=1;
               arry[b]=2;
               arry[c]=3;
               continue;
           }
               //cout<<arry[a2]<<" "<<arry[b2]<<" "<<arry[c2]<<endl;
}

      for(i=1;i<=n;i++)
        cout<<" "<<arry[i];

        return 0;
}
