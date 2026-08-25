#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum >= 0) {
            cout << 0 << "\n";
        } else {
            long long missing = -sum;
            long long x = (missing + n - 1) / n;
            cout << x << "\n";
        }
    }
    
    return 0;
}
