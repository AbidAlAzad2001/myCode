#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkWaitingTime(const vector<int>& patterns, int guess) {
    int n = patterns.size();
    int carvers = 3;
    int idx = 0;

    for (int i = 0; i < carvers; ++i) {
        int currPattern = patterns[idx];
        int endTime = currPattern + guess;

        while (idx < n && patterns[idx] <= endTime) {
            idx++;
        }

        if (idx == n) {
            break;
        }
    }

    return (idx == n);
}

int bestMaxWaitingTime(const vector<int>& patterns) {
    int low = 0;
    int high = *max_element(patterns.begin(), patterns.end()) - *min_element(patterns.begin(), patterns.end());

    while (low < high) {
        int mid = (low + high) / 2;

        if (checkWaitingTime(patterns, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> patterns(n);
        for (int i = 0; i < n; ++i) {
            cin >> patterns[i];
        }

        int result = bestMaxWaitingTime(patterns);
        cout << result << endl;
    }

    return 0;
}
