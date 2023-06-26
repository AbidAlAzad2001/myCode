#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num = n/5;
    int ans1 = (num+1)*5 - n;
    int ans2 = n - (num)*5;
    int ans = min(ans1,ans2);
    if(ans == ans1)
        cout<<(num+1)*5<<endl;
    else
        cout<<(num)*5<<endl;

    return 0;
}