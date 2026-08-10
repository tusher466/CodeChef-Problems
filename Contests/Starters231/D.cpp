#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
            
        vector<int> b(n);
        int max_val = 0;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > max_val) {
                max_val = b[i];
            }
        }
            
        set<int> less_than_max;
        bool possible = true;
            
        for (int i = 0; i < n; i++) {
            if (b[i] < max_val) {
                if (less_than_max.count(b[i])) {
                    possible = false;
                    break;
                }
                less_than_max.insert(b[i]);
            }
        }
            
        if (possible) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    
    return 0;
}
