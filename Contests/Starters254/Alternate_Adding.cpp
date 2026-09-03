#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            long long ans = 0;
            ans += abs(a[0]);
            
            for (int i = 1; i < n; i++) {
                ans += abs(a[i] + a[i - 1]);
            }
            
            ans += abs(a[n - 1]);
            
            cout << ans / 2 << endl;
        }
    }

    return 0;
}
