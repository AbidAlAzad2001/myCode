#include<bits/stdc++.h>
using namespace std;
long long dp[100001],a[100001];
int main()
{
    int n;
    cin>>n;;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }
    dp[0] = 0;
    dp[1] = a[1];
    for(int i=2;i<100001;i++)
    {
        dp[i] = max(dp[i-1],dp[i-2]+i*a[i]);
    }
    cout<<dp[100001]<<endl;


    return 0;
}
