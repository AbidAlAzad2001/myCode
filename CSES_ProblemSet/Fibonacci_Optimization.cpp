#include<bits/stdc++.h>
using namespace std;

long long ara[101];
long long fib(int n)
{
    if(n <= 2)
        return 1;
    if(ara[n] != 0)
        return ara[n];
    ara[n] = fib(n-1) + fib(n-2);
    return ara[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}
