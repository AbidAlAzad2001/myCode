#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cnt=0, ans=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            cnt++;
            if(ans<=cnt)
                ans = cnt;
            continue;
        }
        else
        {
            cnt++;
            if(ans<=cnt)
            ans = cnt;
            cnt=0;
        }
    }
    cout<<ans;

    return 0;
}
