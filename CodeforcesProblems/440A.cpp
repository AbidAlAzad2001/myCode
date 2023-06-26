#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int sum=0;
    for(int i=1;i<=n-1;i++)
    {
        long long int x;
        cin>>x;
        sum+=x;
    }
    long long int ans = (n*(n+1))/2 ;
    cout<<ans - sum<<endl;

    return 0;
}