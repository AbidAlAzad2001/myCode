#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    cout<<(1<<l)-1+n-l<<' '<<(1<<r)-1+(n-r)*(1<<r-1);

    return 0;
}
