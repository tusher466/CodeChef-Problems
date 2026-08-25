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

            long long d = a[1] - a[0];
            for (int i = 2; i < n; i++) {
                d = std::gcd(d, a[i] - a[i - 1]);
            }

            long long operations = (a[n - 1] - a[0]) / d + 1 - n;
            cout << operations << "\n";
        }
    }
    
    return 0;
}
