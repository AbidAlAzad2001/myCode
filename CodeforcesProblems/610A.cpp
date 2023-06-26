#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int mid;
        mid = n /2;
        int l=1,r=mid-l;
        int cnt=0;
        while(l!=r && l<r)
        {
            cnt++;
            l++;
            r--;
        }
        cout<<cnt<<"\n";
        return 0;
    }
    else
    {
        cout<<"0"<<"\n";
        return 0;
    }

    return 0;
}
