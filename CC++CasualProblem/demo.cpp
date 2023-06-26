#include<bits/stdc++.h>
using namespace std;
const int N = 201;
const int M = 1e5+5;

int val[N];
int dp[N][M];

int solution(int n,int target)
{
    if(n == 0 && target == 0){
        return 1;
    }
    if(dp[n][target] != -1)
        return dp[n][target];
    
    int ans1 = solve(n-1,target);

    if(target<val[n])
    {
        dp[n][target] = ans1;
        return ans1;
    }
    int ans2 = solve(n-1, target - val[n]);
    int ans = ans1 or ans2;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>val[i];
        sum+=val[i];
    }
    memset(dp,-1,sizeof(dp));
    if(sum%2 != 0)
    {
        cout<<0<<endl;
        return 0;
    }
    else
        cout<<solution(n,sum/2)<<endl;

    return 0;
}