#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long target = a[0] + a[n - 1];
        bool possible = true;
        
        for (int i = 0; i < n / 2; i++) {
            if (a[i] + a[n - 1 - i] != target) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}
