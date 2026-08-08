#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int N, K;
        cin >> N >> K;

        vector < int > filtered;
        for (int i = 0; i < N; ++i) {
            int val;
            cin >> val;
            if (val != K) {
                filtered.push_back(val);
            }
        }

        bool is_palindrome = true;
        int m = filtered.size();
        for (int i = 0; i < m / 2; ++i) {
            if (filtered[i] != filtered[m - 1 - i]) {
                is_palindrome = false;
                break;
            }
        }

        if (is_palindrome) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}