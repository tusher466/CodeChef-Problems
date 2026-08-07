#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<long long> dp(n + 1, 0);
        long long max_bal = 0;
        long long max_prev = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = a[i] - i + max_prev;
            max_bal = max(max_bal, dp[i]);
            max_prev = max(max_prev, dp[i] + i);
        }

        cout << max_bal << "\n";
    }
    
    return 0;
}