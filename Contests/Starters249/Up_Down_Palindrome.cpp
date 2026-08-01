#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            int min_x = 0;
            int max_x = 0;
            bool first = true;
            bool possible = true;
            for (int i = 0; i < n / 2; i++) {
                int u = a[i];
                int v = a[n - 1 - i];
                if (u != v) {
                    if (abs(u - v) != 2) {
                        possible = false;
                        break;
                    }
                    int low = min(u, v);
                    int high = max(u, v) - 1;
                    if (first) {
                        min_x = low;
                        max_x = high;
                        first = false;
                    } else {
                        min_x = max(min_x, low);
                        max_x = min(max_x, high);
                    }
                }
            }
            if (possible && (first || min_x <= max_x)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
