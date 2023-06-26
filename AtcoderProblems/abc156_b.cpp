#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int k;
    cin>>k;
    int ans = 0; 
    while(n>0)
    {
        n/=k;
        ans++;
    }
    cout<<ans<<endl;

    return 0;
}