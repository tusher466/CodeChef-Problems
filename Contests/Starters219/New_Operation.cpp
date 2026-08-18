#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        stack<long long> st_min;
        for (int i = n - 1; i >= 0; i--) {
            long long val = a[i];
            while (!st_min.empty() && st_min.top() <= 0) {
                val += 2 * st_min.top();
                st_min.pop();
            }
            st_min.push(val);
        }
        
        long long min_ans = st_min.top();
        st_min.pop();
        while (!st_min.empty()) {
            min_ans += 2 * st_min.top();
            st_min.pop();
        }
        
        stack<long long> st_max;
        for (int i = n - 1; i >= 0; i--) {
            long long val = a[i];
            while (!st_max.empty() && st_max.top() > 0) {
                val += 2 * st_max.top();
                st_max.pop();
            }
            st_max.push(val);
        }
        
        long long max_ans = st_max.top();
        st_max.pop();
        while (!st_max.empty()) {
            max_ans += 2 * st_max.top();
            st_max.pop();
        }
        
        cout << min_ans << " " << max_ans << endl;
    }
    
    return 0;
}
