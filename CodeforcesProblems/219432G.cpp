#include<bits/stdc++.h>
using namespace std;

long long int fac(int n)
{
    if(n == 0)
        return 1;
    return n * fac(n-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<fac(x)<<endl;
    }

    return 0;
}