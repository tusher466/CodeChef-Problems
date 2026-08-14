#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string s;
        cin >> s;
        
        vector<long long> available;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                available.push_back(a[i]);
            }
        }
        
        if (available.size() < k) {
            cout << -1 << endl;
            continue;
        }
        
        sort(available.begin(), available.end());
        
        long long total_cost = 0;
        for (int i = 0; i < k; i++) {
            total_cost += available[i];
        }
        
        cout << total_cost << endl;
    }
    
    return 0;
}
