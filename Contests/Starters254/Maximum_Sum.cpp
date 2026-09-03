#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int window_size = n - k;
        long long current_sum = 0;
        
        for (int i = 0; i < window_size; i++) {
            current_sum += a[i];
        }
        
        long long max_sum = current_sum;
        
        for (int i = window_size; i < n; i++) {
            current_sum += a[i] - a[i - window_size];
            max_sum = max(max_sum, current_sum);
        }
        
        cout << max_sum << endl;
    }

    return 0;
}
