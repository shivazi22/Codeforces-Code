#include<bits/stdc++.h>
using namespace std;
int a[200],b[200],i,j,k,n,cc,l;
long sum;
set<int> myset;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        myset.insert(a[i]);
        b[i]=a[i];
    }
sort(b+1,b+n+1);

for(i=2;i<=n;i++)
sum+=b[i]-b[i-1];

if(k<sum)
{
    cout<<"NO"<<endl;
}

else
{
    cout<<"YES"<<endl;

    for(j=1;j<=n;j++)
    {
        int t=1;

    for(i=1;i<=a[j];i++)
    {

        if(i<=b[1]+1)
            cout<<t<<" ";
            else
            {
                t++;
                cout<<t<<" ";
            }

    }
    cout<<endl;
    }

}


}





/*int main()
{
    long long n,ans,m,i,ans2,m2;
    cin>>n;

         ans=ans2=1;


    if(n>2)
    m=n+(n-2);
    else m=n;
    m2=m;

    for(i=1;i<=(m2/2);i++)
    {
        ans=ans*m;
        m--;
        }

    for(i=1;i<=(m2/2);i++)
        ans2=ans2*i;

    cout<<(ans/ans2)<<endl;

    return 0;


}


   /* while(cin>>s)
    {


    if(s>=80)
    printf("u get A+\nmy name is shivazi\n");

    else if(s>=70)
        printf("u get A");
    else if(s>=60)
     printf("u get A-\n");

       else if(s>=50)
     printf("u get B\n");
    else if(s>=40)
        printf("U get C");
    else
        printf("You are failed\n");
    }

    //printf("%d\n",c);
    return 0;
}




  /*while(cin>>n)
  {
    for(i=1;i<=n;i++)
    {
        cout<<(105>>i)<<" ";
    }
  }

}

int ans[777];
*/
/*
int main()
 {
  int n;
  long long m;
  cin >> n >> m;
  int l = 0, r = n - 1;
  for (int j = n - 1; j > 0; j--)
{
    if (m <= (1LL << (j - 1)))
      ans[l++] = n - j;

    else
    {
      ans[r--] = n - j;
      m -= (1LL << (j - 1));
    }
  }
  ans[l] = n;

  for (int i = 0; i < n; i++)
    cout << ans[i] << " ";
  cout << endl;
  return 0;
}
*/
