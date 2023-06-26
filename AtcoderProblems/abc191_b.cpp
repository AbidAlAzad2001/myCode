#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x;
    cin>>a>>x;
    list<int>l;
    for(int i=0;i<a;i++)
    {
        int y;
        cin>>y;
        l.push_back(y);
    }
    // for(auto it=l.begin();it!=l.end();it++)
    //     cout<<*it<<" ";
    l.remove(x);
    for(auto it=l.begin();it!=l.end();it++)
        cout<<*it<<" ";

    return 0;
}