#include<bits/stdc++.h>
using namespace std;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<4;i++)
        {
            int new_x1 = x1 + dx[i];
            int new_y1 = y1 + dy[i];
            int new_x2 = x2 + dx[i];
            int new_y2 = y2 + dy[i];
            if(new_x1>0 && new_x1<=n && new_y1>0 && new_y1<=m)
                cnt1++;
            if(new_x2>0 && new_x2<=n && new_y2>0 && new_y2<=m)
                cnt2++;
        }
        cout<<min(cnt1,cnt2)<<"\n";
    }

    return 0;
}
