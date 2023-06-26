#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = (n*(n+1))/2;
    if(sum%2!=0){
        cout<<"NO\n";
        return 0;
    }
    else{
        cout<<"YES\n";
    }


    return 0;
}
