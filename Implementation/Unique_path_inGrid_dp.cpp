//#include<bits/stdc++.h>
//using namespace std;
///*
//- state: f(n,m) -> number of unique paths from (0,0) to (n,m)
//- recurrence : f(n,m) -> f(n-1,m)+f(n,m-1)
//- base case: f(0,0) = 1;
//*/
//
//const int N = 101;
//int dp[N][N];
//
//int unique_path(int n,int m)
//{
//    //1. base case
//    if(n==0 && m==0)
//        return 1;
//    //2. if result is already calculated return it
//    if(dp[n][m] != -1)
//        return dp[n][m];
//
//    //3. calculate result from smaller sub_problems
//    int ans = 0;
//    if(n > 0) ans += unique_path(n-1,m);
//    if(m > 0) ans += unique_path(n,m-1);
//
//    dp[n][m] = ans;
//    return ans;
//}
//
//int main()
//{
//    int row, col;
//    cin>>row>>col;
//
//    for(int i=0;i<row;i++)
//    {
//        for(int j=0;j<col;j++)
//        {
//            dp[i][j] = -1;
//        }
//    }
//
//    cout<<unique_path(row-1,col-1);
//
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N][N];

int main()
{
    int row, col;
    cin>>row>>col;

    dp[0][0] = 1;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(row==0 && col==0)
                continue;

            int ans = 0;
            if(i>0) ans += dp[i-1][j];
            if(j>0) ans += dp[i][j-1];
            dp[i][j] = ans;
        }
    }

    cout<<dp[row-1][col-1]<<endl;

    return 0;
}

/*
Time complexity -> O(N*M)
Space Complexit -> O(N*M)
*/
