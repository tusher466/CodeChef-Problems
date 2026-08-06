#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        long long sum = 0;
        int odd_count = 0;
        int even_count = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        if (sum % 2 == 0) {
            if (even_count > 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            if (odd_count > 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}
