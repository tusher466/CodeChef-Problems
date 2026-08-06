#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        vector<int> first_idx(n, -1);
        vector<int> last_idx(n, -1);
        map<int, int> seen_first;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (seen_first.find(a[i]) == seen_first.end()) {
                seen_first[a[i]] = i;
            }
            first_idx[i] = seen_first[a[i]];
        }
        
        map<int, int> seen_last;
        for (int i = n - 1; i >= 0; i--) {
            if (seen_last.find(a[i]) == seen_last.end()) {
                seen_last[a[i]] = i;
            }
            last_idx[i] = seen_last[a[i]];
        }
        
        if (n == 1) {
            cout << 0 << "\n";
            continue;
        }
        
        int min_moves = 2e9;
        
        for (int i = 0; i < n; i++) {
            int first = first_idx[i];
            int last = last_idx[i];
            if (first < last) {
                int moves = first + (n - 1 - last);
                if (moves < min_moves) {
                    min_moves = moves;
                }
            }
        }
        
        if (min_moves == 2e9) {
            cout << -1 << "\n";
        } else {
            cout << min_moves << "\n";
        }
    }
    
    return 0;
}
