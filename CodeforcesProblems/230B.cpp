#include<bits/stdc++.h>
using namespace std;

int divisor(long long int n){
    vector<long long int>a;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i == 0)
            a.push_back(i);
        if(i != n/i)
            a.push_back(n/i);
    }
    return a.size();
}

int  main()
{
    int  n;
    cin>>n;
    vector<long long int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(divisor(a[i]) == 3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        // cout<<divisor(a[i])<<endl;
    }

    return 0;
}