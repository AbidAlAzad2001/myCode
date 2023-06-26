#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>odd;
    // vector<int>even;
    long long int e = 0;
    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2 == 1)
            odd.push_back(a[i]);
        else
            e+=a[i];
        sum+=a[i];
    }
    if(sum%2 == 0)
        cout<<sum<<endl;
    else
    {
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        if(odd.size()%2 == 1)
        {
            for(int i=0;i<odd.size()-1;i++)
                e+=odd[i];
        }
        else
        {
            for(int i=0;i<odd.size();i++)
                e+=odd[i];
        }
        cout<<e<<endl;
    }

    return 0;
}