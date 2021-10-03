#include<bits/stdc++.h>
using namespace std;
#define INF 1e18
int dp[502][502];
int RectangleCut(int n,int m)
{
    if(dp[n][m]!=-1)
      return dp[n][m];
    if(n==m)
      return dp[n][m]=0;       
     int ans1=INT_MAX,ans2=INT_MAX;
     for(int i=1;i<n;i++)
     {
        
        ans1=min(ans1,1+RectangleCut(n-i,m)+RectangleCut(i,m));
        
     }
     for(int j=1;j<m;j++)
     {
         ans2=min(ans2,1+RectangleCut(n,m-j)+RectangleCut(n,j));
         
     }
    return dp[n][m]=min(ans1,ans2);

}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0);
  #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
         freopen("outpu.txt", "w", stdout);
    #endif
         int n,m;
         cin>>n>>m;
         memset(dp,-1,sizeof(dp));
         /*if(n==m)
         {
            cout<<0;
            return 0;
         }*/
         int ans= RectangleCut(n,m);
         cout<<ans;
    } 