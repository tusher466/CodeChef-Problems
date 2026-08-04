#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int total_half_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_half_sum += a[i] / 2;
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int attendance = total_half_sum + (a[i] / 2) + (a[j] / 2);
                if (attendance > k) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
