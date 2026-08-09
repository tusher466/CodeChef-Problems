#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int m = n - k;
        int p = (m + 1) / 2;
        
        set<int> unique_medians;
        for (int i = p - 1; i <= k + p - 1; i++) {
            unique_medians.insert(a[i]);
        }
        
        for (auto it = unique_medians.begin(); it != unique_medians.end(); ++it) {
            cout << *it << (next(it) == unique_medians.end() ? "" : " ");
        }
        cout << "\n";
    }
    
    return 0;
}
