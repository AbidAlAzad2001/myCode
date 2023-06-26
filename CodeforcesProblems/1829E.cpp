#include<bits/stdc++.h>
using namespace std;
const int N = 1001;

int maze[N][N];
int visited[N][N];
int n,m;


int dfs(int i,int j)
{
    int sum=0;
    visited[i][j] = 1;
    for(int node: maze[i][j])
    {
        if(visited[node]==0)
            sum+=dfs(i,j);
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int maxi = 0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>maze[i][j];
            }
        }
        maxi = max(maxi,dfs(i,j));
        
        cout<<maxi<<endl;
    }

    return 0;
}