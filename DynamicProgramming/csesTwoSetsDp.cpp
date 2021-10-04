#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
         freopen("outpu.txt", "w", stdout);
    #endif
       int n;
       cin>>n;
        int sum= (n*(n+1))/2 ;
       if(sum%2==1)
         {
            cout<<0;
             return 0;
         }
        
         int dp[n+1][(sum/2)+1];
         memset(dp,0,sizeof(dp));
          dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=(sum/2);j++)
            {
                 dp[i][j]= j<i? 0:dp[i-1][j-i]%mod;
                 dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
                //cout<<dp[i][j]<<" ";
            }
            //cout<<"\n";
        }
        int x=(sum/2);
        cout<<dp[n-1][x];

     }