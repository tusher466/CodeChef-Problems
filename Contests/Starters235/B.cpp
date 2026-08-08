#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool unique = true;

        for (int i = 0; i < n / 2; ++i) {
            if (s[i] == '?' && s[n - 1 - i] == '?') {
                unique = false;
                break;
            }
        }

        if (unique && n % 2 != 0) {
            if (s[n / 2] == '?') {
                unique = false;
            }
        }

        if (unique) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}