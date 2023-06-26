#include <bits/stdc++.h>
using namespace std;

bool Abid(int n, int x, vector<int>& stack1, vector<int>& stack2, vector<int>& stack3) {
    vector<int> Shakib01(n), Shakib02(n), Shakib03(n);
    if(x == 0)
    return true;

    Shakib01[0] = stack1[0];
    Shakib02[0] = stack2[0];
    Shakib03[0] = stack3[0];

    for (int i = 1; i < n; i++) {
        Shakib01[i] = Shakib01[i-1] | stack1[i];
        Shakib02[i] = Shakib02[i-1] | stack2[i];
        Shakib03[i] = Shakib03[i-1] | stack3[i];
    }

    for (int i = 0; i < n; i++) {
        int Azad = x - (Shakib01[i] | Shakib02[i] | Shakib03[i]);

        if (Azad >= 0 && Azad <= x && Azad <= Shakib01[n-1] && Azad <= Shakib02[n-1] && Azad <= Shakib03[n-1])
            return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> stack1(n), stack2(n), stack3(n);
        for (int i = 0; i < n; i++) {
            cin >> stack1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> stack2[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> stack3[i];
        }

        if (Abid(n, x, stack1, stack2, stack3))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
