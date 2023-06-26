#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int>a(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    // int a[n];
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];
    // int r = 0, l = n - 1;
    // while (r <= l)
    // {
    //     if (n % 2 != 0)
    //     {
    //         if(r == l)
    //             cout<<a[r]<<" ";
    //         else{
    //             cout<<a[r]<<" ";
    //             cout<<a[l]<<" ";
    //         }
    //     }
    //     else
    //     {
    //         cout << a[r] << " ";
    //         cout << a[l] << " ";
    //     }
    //     r++;
    //     l--;
    // }

    // while(!a.empty())
    // {
    //     cout<<a.front()<<" ";
    //     a.pop_front();
    //     cout<<a.back()<<" ";
    //     a.pop_back();
    // }
    // while(!a.empty())
    // {
    //     cout<<a.back()<<" ";
    //     a.pop_back();
    // }
    cout<<a.size()<<endl;

    return 0;
}