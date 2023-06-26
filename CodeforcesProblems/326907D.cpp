#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int L,R;
        cin>>L>>R;
        long long int n = abs(L-R)+1;
        long long int sum = (n*(L+R))/2;
        cout<<sum<<endl;
    }

    return 0;
}