#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long max_profit = 0;
        for (int i = 0; i < n; i++) {
            if (i < k) {
                if (a[i] > 5) {
                    max_profit += (a[i] - 5);
                }
            } else {
                if (a[i] > 10) {
                    max_profit += (a[i] - 10);
                }
            }
        }
        cout << max_profit << "\n";
    }
    return 0;
}
