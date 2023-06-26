//Undirected Unweighted Graph
//#include<bits/stdc++.h>
//using namespace std;
//const int maxN = 100;
//int main()
//{
//    int n,e;
//    cin>>n>>e;
//    vector<int>adjList[maxN+123];
//    for(int i=1; i<=e; i++)
//    {
//        int u,v;
//        cin>>u>>v;
//        adjList[u].push_back(v);
//        adjList[v].push_back(u);
//    }
//    for(int i=1; i<=n; i++)
//    {
//        cout<<i<<" -> ";
//        for(auto j:adjList[i])
//            cout<<j<<" ";
//        cout<<"\n";
//    }
//    return 0;
//}


//Undirected Weighted Graph
#include<bits/stdc++.h>
using namespace std;
const int maxN = 100;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>adjList[maxN];
    for(int i=1; i<=e; i++)
    {
        int u,v,w;
        cin>>u>>v,w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }
    for(int i=0; i<=n; i++)
    {
        cout<<i<<" -> ";
        for(auto j:adjList[i])
            cout<<"{"<<j.first<<","<<j.second<<"} ";
        cout<<"\n";
    }
    return 0;
}
/*
5 7
1 3 3
1 2 2
1 4 6
2 0 6
2 3 7
*/
