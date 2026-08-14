#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        vector<int> v;
        v.reserve(mp.size());
        for (const auto& p : mp) {
            v.push_back(p.second);
        }

        sort(v.begin(), v.end());

        int removed = 0;
        for (int count : v) {
            if (k >= count) {
                k -= count;
                removed++;
            } else {
                break;
            }
        }

        cout << (mp.size() - removed) << endl;
    }

    return 0;
}
