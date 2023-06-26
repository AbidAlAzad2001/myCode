#include<bits/stdc++.h>
using namespace std;
/*
- state: fun(n,target) -> returns true if it is possible to create
         1 to n and form sum "target"

- recurrence: fun(0, target) -> fun(n-1, target) OR
                                fun(n-1,target - nums[n]) if target >= nums[n]

- base case: fun(0, target) -> 1 if target == 0
                               else 0
*/

/*
6 1
3 34 4 12 5 2
*/

const int N = 101;
const int M = 1e5+5;
int nums[N];
int dp[N][M];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>nums[i];
    }

    // 1. base case
    dp[0][0] = 1;
    for(int i=0;i<=m;i++)
    {
        dp[0][i] = 0;
    }

    //2. loop over the states
    for(int i=1;i<=n;i++)
    {
        for(int target=1;target<=m;target++)
        {
            //2.1. calculate answer from smaller subproblem
            /*
            fun(n,target) -> fun(n-1, target) OR
                             fun(n-1,target - nums[n]) if target >= nums[n]
            */
            int ans1 = dp[i-1][target];
            if(target < nums[i])
            {
                dp[i][target] = ans1;
            }
            else{
                int ans2 = dp[i-1][target - nums[i]];
                dp[i][target] = ans1 or ans2;
            }
        }
    }

    cout<<dp[n][m];

    return 0;
}
