#include<bits/stdc++.h>
using namespace std;
const int N = 101;

/*
- fib(n) -> calculates the nth fibonacci number
- fib(n) = fib(n-1) + fib(n-2)
- fib(1) = 1, fib(2) = 1
*/
int dp[N];

int main()
{
    int n;
    cin>>n;

    //base case
    dp[1] = 1;
    dp[2] = 1;

    // loop through the state
    for(int i=3;i<=n;i++)
    {
        dp[i] = dp[i-2] + dp[i-1];
    }

    cout<<dp[n]<<endl;

    return 0;
}
