#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        bool possible = true;
        for (int i = 1; i <= n; i++) {
            if (b[i] == 1) {
                for (int j = i + 1; j <= i + k && j <= n; j++) {
                    if (b[j] == 1) {
                        possible = false;
                    }
                }
            } else {
                bool covered = false;
                int start = max(1, i - k);
                int end = min(n, i + k);
                for (int j = start; j <= end; j++) {
                    if (b[j] == 1) {
                        covered = true;
                    }
                }
                if (!covered) {
                    possible = false;
                }
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
