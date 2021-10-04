#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
         freopen("outpu.txt", "w", stdout);
    #endif
       int n;
       cin>>n;
       int a[n];
       int sum=0;
       for(int i=0;i<n;i++)
           {
            cin>>a[i];
            sum+=a[i];
          }
      int dp[n+1][sum+1];
      memset(dp,0,sizeof(dp));
       dp[0][0]=1;
      for(int i=1;i<=n;i++)
      {
        for(int j=0;j<=sum;j++)
        {
             //cout<<a[i-1]<<" ";
             dp[i][j]=dp[i-1][j];
             if(j>=a[i-1])
             {
                if(a[i-1]==(j))
                  dp[i][j]=1;
                else if(dp[i-1][j-a[i-1]])
                dp[i][j]=1;
                //cout<<1<<" ";
             }
            //cout<<j<<" "<<i<<" "<<dp[i][j]<<"\n";        
           }
      }
      int c=0;
      for(int i=1;i<=sum;i++ )
      {
          if(dp[n][i]==1)
           {
              c++;
              //cout<<i<<" ";
           }
      }
      cout<<c<<"\n";
      for(int i=1;i<=sum;i++ )
      {
          if(dp[n][i]==1)
           {
              cout<<i<<" ";
           }
      }


    }