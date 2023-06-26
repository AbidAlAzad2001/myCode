#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = n;
        sort(a.begin(),a.end());
        for(int i=n-1;i>=1;i++)
        {
            for(int j=i-1;j>=0;j++)
            {
                if(a[i] == a[j])
                {
                    a.pop_back(a[i]);
                    a.pop_back(a[j]);
                }
            }
        }
        if(!a.empty())
        {
            cout<<a.size()<<endl;
        }
        else
            cout<<
    }

    return 0;
}
