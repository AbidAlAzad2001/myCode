#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;

ll solve(int n,int m, vector<vector<char>>& grid, vector<vector<ll>>& dp)
{
    if(n == 0 && m == 0)
        return 1;
    if(dp[n][m] != -1)
        return dp[n][m]; 
    ll ans=0;
    if(grid[n][m] != '#' && n>0) ans += solve(n-1,m,grid,dp) % MOD;
    if(grid[n][m] != '#' && m>0) ans += solve(n,m-1,grid,dp) % MOD;

    dp[n][m] = ans % MOD;
    return dp[n][m];
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>grid(n,vector<char>(m,'a'));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<ll>>dp(n+5, vector<ll>(m+5, -1));

    cout<<solve(n-1,m-1,grid,dp)<<endl;

    return 0;
}