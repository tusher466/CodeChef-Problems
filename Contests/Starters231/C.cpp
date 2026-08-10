#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<pair<long long, long long>> items(n);
        for (int i = 0; i < n; i++) {
            cin >> items[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> items[i].second;
        }
        
        sort(items.begin(), items.end());
        
        vector<long long> pref_max(n);
        pref_max[0] = items[0].second;
        for (int i = 1; i < n; i++) {
            pref_max[i] = max(pref_max[i - 1], items[i].second);
        }
        
        long long max_tastiness = -1;
        
        vector<long long> costs(n);
        for (int i = 0; i < n; i++) {
            costs[i] = items[i].first;
        }
        
        for (int j = 1; j < n; j++) {
            long long cost_j = items[j].first;
            long long taste_j = items[j].second;
            
            long long discount = min(cost_j / 2, 100LL);
            long long max_allowed_ai = k - cost_j + discount;
            
            auto it = upper_bound(costs.begin(), costs.end(), max_allowed_ai);
            int idx = distance(costs.begin(), it) - 1;
            
            idx = min(idx, j - 1);
            
            if (idx >= 0) {
                max_tastiness = max(max_tastiness, taste_j + pref_max[idx]);
            }
        }
        
        cout << max_tastiness << "\n";
    }
    
    return 0;
}
