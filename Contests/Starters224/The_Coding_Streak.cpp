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
        }
        
        int max_streak = 0;
        int current_streak = 0;
        
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                current_streak++;
                max_streak = max(max_streak, current_streak);
            } else {
                current_streak = 0;
            }
        }
        
        cout << max_streak << endl;
    }
    
    return 0;
}
