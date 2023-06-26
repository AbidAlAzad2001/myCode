#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    int x = a * 1000;
    x = x/10;
    x = x/10;
    int r = x%10;
    // cout<<r<<endl;
    int ans = (int)a;
    // cout<<ans<<endl;
    if(r>=5)
        cout<<ans+1<<endl;
    else
        cout<<ans<<endl;

    return 0;
}