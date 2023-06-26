//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5;
///*
//- state: stone(n) -> cost of reaching nth stone from 1st stone
//- recurrence: stone(n) = min(
//                             stone(n-1) + abs( h[n] - h[n-1])
//                             stone(n-2) + abs( h[n] - h[n-2])
//                             )
//- base case: stone(1) = 0
//*/
//int h[N];
//int dp[N];
//
//int stone(int n)
//{
//    // 1. base case
//    if(n == 1)
//    {
//        return 0;
//    }
//
//    // 2. check if answer already exists
//    if(dp[n] != -1)
//    {
//        return dp[n];
//    }
//
//    // corner case
//    if(n==2)
//    {
//        int ans1 = stone(n-1) + abs( h[n] - h[n-1]);
//        dp[n] = ans1;
//        return ans1;
//    }
//    int ans = min(stone(n-1) + abs( h[n] - h[n-1]),stone(n-2) + abs( h[n] - h[n-2]));
//    return ans;
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        cin>>h[i];
//    }
//    memset(dp, -1, sizeof(dp));
//    cout<<stone(n)<<endl;
//
//    return 0;
//}

#include<bits/stdc++.h>
using  namespace std;
const int N = 1e5+5;

int h[N];
int dp[N];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i];
    }
    dp[1]=0;
    for(int i=2;i<=n;i++)
    {
        int ans1 = dp[i-1] + abs( h[i] - h[i-1]);
        if(i==2)
        {
            dp[i]=ans1;
            continue;
        }
        int ans2 = dp[i-2] + abs( h[i] - h[i-2]);
        dp[i] = min(ans1, ans2);
    }
    cout<<dp[n]<<endl;
}

