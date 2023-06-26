#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, con = 0;
    string s;
    cin >> s;
    while (s.size() > 1)
    {
        con++;
        x = 0;
        for (int i = 0; i < s.size(); i++)
            x += s[i] - '0';
        s = to_string(x);
    }
    cout << con;
    return 0;
}