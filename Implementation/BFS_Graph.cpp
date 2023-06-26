#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

vector<int>adj_lsit[N];
int visited[N];

void bfs(int node)
{
    queue<int>q;
    visited[node] = 1;
    q.push(node);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        cout<<head<<" ";
        for(int adj_node: addj_list[head])
        {
            if(visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 1;
    bfs(src);

    return 0;
}
