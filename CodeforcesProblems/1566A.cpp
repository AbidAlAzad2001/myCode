#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T --> 0) {
        long long n, s;
        cin >> n >> s;
        long long L = 0, R = s + 1;
        while (R - L > 1) {
            long long M = (L + R) / 2;
            long long m = n / 2 + 1;
            if (m * M <= s) {
                L = M;
            } else {
                R = M;
            }
        }
        cout << L << '\n';
    }
    return 0;
}
