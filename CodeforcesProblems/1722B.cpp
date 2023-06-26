#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t1;
    cin >> t1;
    while (t1--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if((s[i]=='B' and t[i]=='G') or (s[i]=='G' and t[i]=='B'))
                continue;
            else if(s[i]!=t[i]){
                cout<<"NO\n";
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
    }

    return 0;
}