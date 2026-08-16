#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, x, k;
        cin >> n >> x >> k;

        vector<int> multiples;
        for (int i = 0; i <= n; i += k) {
            multiples.push_back(i);
        }

        int min_changes = abs(multiples[0] - x);
        for (int i = 1; i < multiples.size(); i++) {
            int current_changes = abs(multiples[i] - x);
            if (current_changes < min_changes) {
                min_changes = current_changes;
            }
        }

        cout << min_changes << endl;
    }

    return 0;
}
