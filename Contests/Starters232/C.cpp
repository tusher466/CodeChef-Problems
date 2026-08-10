#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = a[i] - i; 
        }
        
        sort(a.begin(), a.end());
        
        long long total_pairs = 0;
        long long current_streak = 1;
        
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                current_streak++;
            } else {
                total_pairs += (current_streak * (current_streak - 1)) / 2;
                current_streak = 1; 
            }
        }
        total_pairs += (current_streak * (current_streak - 1)) / 2;
        
        cout << total_pairs << "\n";
    }
    
    return 0;
}