#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    int hi = 0;
    int ans = 0;
    for (int i = 2; i <= mx; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] % i == 0) {
                cnt++;
            }
        }
        if (cnt > hi) {
            hi = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}