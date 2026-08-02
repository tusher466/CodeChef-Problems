#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int z = (3 * n - x) / 2;
        if (z > n) {
            z = n;
        }

        vector<int> c(n, 0);
        for (int i = z; i < n; i++) {
            c[i] = 2;
        }

        int current_sum = 2 * (n - z);
        int remaining = x - current_sum;

        for (int i = 0; i < remaining; i++) {
            c[i]++;
        }

        string a(3 * n, '0');
        for (int i = 0; i < n; i++) {
            if (c[i] >= 1) {
                a[i] = '1';
            }
            if (c[i] >= 2) {
                a[i + n] = '1';
            }
            if (c[i] == 3) {
                a[i + 2 * n] = '1';
            }
        }

        cout << a << endl;
    }

    return 0;
}
