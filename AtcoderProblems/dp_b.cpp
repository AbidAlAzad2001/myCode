//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5+5;
//const int INF = 2e9;
//
//int h[N],dp[N];
//int n,k;
//
//int stone(int n)
//{
//    // 1.base case
//    if(n == 1)
//    {
//        return 0;
//    }
//
//    // 2. if answer is already calculated return it
//
//    if(dp[n] != -1)
//    {
//        return dp[n];
//    }
//
//    // 3. calculate answer from smaller sub-problem
//    int ans = INF;
//    for(int i=1;i<=k;i++)
//    {
//        // handle corner case
//        if(n-i <= 0)
//        {
//            break;
//        }
//        int candidate_ans = stone(n-i)+ abs(h[n] - h[n-i]);
//        ans = min(ans, candidate_ans);
//    }
//    dp[n] = ans;
//    return ans;
//}
//
//int main()
//{
//    cin>>n>>k;
//    for(int i=1;i<=n;i++)
//    {
//        cin>>h[i];
//    }
//    for(int i=1;i<=n;i++)
//    {
//        dp[i] = -1;
//    }
//    cout<<stone(n)<<"\n";
//
//    return 0;
//}

// Iterative

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const int INF = 2e9;

int h[N],dp[N];


int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++)
        cin>>h[i];
    // 1.base case
    dp[1] = 0;

    //2. loop over the states

    for(int i=2;i<=n;i++)
    {
        dp[i] = INF;

        //2.1. calculate answer from smaller sub-problems
        for(int j=1;j<=k;j++)
        {
            if(i-j <= 0)
                break;
            int candidate_ans = dp[i-j] + abs(h[i]-h[i-j]);
            dp[i] = min(dp[i],candidate_ans);
        }
    }
    cout<<dp[n]<<endl;

    return 0;
}
