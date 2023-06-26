#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(is_prime(n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    // cout<<is_prime;

    return 0;
}

