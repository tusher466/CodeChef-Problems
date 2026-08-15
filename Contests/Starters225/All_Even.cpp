#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long total_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }

        if (total_sum % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
