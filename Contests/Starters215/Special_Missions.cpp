#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--) 
    {
        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        long long sum_non_special = 0;
        long long sum_special = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                sum_non_special += a[i];
            } else {
                sum_special += a[i];
            }
        }

        if (sum_non_special < c) {
            cout << sum_non_special << endl;
        } else {
            long long ans = max(sum_non_special, sum_non_special - c + sum_special);
            cout << ans << endl;
        }
    }

    return 0;
}
