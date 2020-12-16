#include<bits/stdc++.h>
using namespace std;


int main()
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
