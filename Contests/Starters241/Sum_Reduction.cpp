#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long total_sum = 0;
        long long bitwise_or = 0;
        
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            total_sum += x;
            bitwise_or |= x;
        }
        
        if (total_sum == bitwise_or) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
