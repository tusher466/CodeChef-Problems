#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        long long current_sum = 0;
        long long max_sum = 0;
        long long min_sum = 0;
        
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            current_sum += a;
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
        
        long long red_needed = -min_sum;
        long long blue_needed = max_sum;
        
        if (red_needed + blue_needed <= k) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
