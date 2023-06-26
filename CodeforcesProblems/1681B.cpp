#include<bits/stdc++.h>
using namespace std;

void problem()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
        cin>>v[i];
    int sum = 0;
    int m;
    cin>>m;
    int b;
    for(int i=0;i<m;i++)
    {
        cin>>b;
        sum+=b;
    }
    int mod = sum % n;
    cout<<v[mod]<<"\n";
}

int main()
{
   int t;
   cin>>t;
   while(t--){
    problem();
   }

    return 0;
}
