#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_val = *max_element(a.begin(), a.end());
        int ans = count(a.begin(), a.end(), max_val);

        cout << ans << endl;
    }

    return 0;
}
