#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long total_sum = 0;
        long long min_diff = -1;

        for (int i = 0; i < n; i++) {
            total_sum += a[i];
            long long diff = a[i] - b[i];
            
            if (min_diff == -1 || diff < min_diff) {
                min_diff = diff;
            }
        }

        long long max_coins = total_sum - min_diff;
        cout << max_coins << endl;
    }

    return 0;
}
