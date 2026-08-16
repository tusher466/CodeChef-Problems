#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> counts;
        for (int i = 0; i < n; i++) {
            int color;
            cin >> color;
            counts[color]++;
        }

        int max_freq = 0;
        int ans = -1;

        for (auto const& [color, freq] : counts) {
            if (freq > max_freq) {
                max_freq = freq;
                ans = color;
            } else if (freq == max_freq) {
                if (ans == -1 || color < ans) {
                    ans = color;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
