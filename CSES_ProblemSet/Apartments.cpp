#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,k;
    cin>>n>>m>>k;
    set<int>s;
    for(int i=0;i<n;i++){
        int num;
        s.insert(num);
    }
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-k<num && s[i]+k > num)
                cnt++;
        }
    }
    cout<<cnt;

    return 0;
}
