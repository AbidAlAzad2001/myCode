#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int cnt=1,ans=1;
    for(long long int i=2;;i=i*2)
    {
        if(n*i>m)
            break;
        ans+=cnt;
    }
    cout<<ans<<endl;

    return 0;
}