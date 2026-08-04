#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int total_or = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_or |= a[i];
        }

        int segments = 0;
        int current_or = 0;

        for (int i = 0; i < n; i++) {
            current_or |= a[i];
            if (current_or == total_or) {
                segments++;
                current_or = 0;
            }
        }

        cout << n - segments << endl;
    }

    return 0;
}
