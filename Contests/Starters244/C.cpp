#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long left_sum = 0;
        for (int i = 0; i < l - 1; i++) {
            left_sum += a[i];
        }
        
        long long right_sum = 0;
        for (int i = r; i < n; i++) {
            right_sum += a[i];
        }
        
        long long ans = max(left_sum, right_sum);
        cout << ans << endl;
    }
    
    return 0;
}
