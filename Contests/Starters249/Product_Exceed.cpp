#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            int x, y, p;
            cin >> x >> y >> p;

            if (x * y >= p) {
                cout << 0 << endl;
                continue;
            }

            int ans = 2e9;
            for (int nx = x; nx <= p + 50; ++nx) {
                int ny = (p + nx - 1) / nx;
                if (ny < y) {
                    ny = y;
                }
                int moves = (nx - x) + (ny - y);
                ans = min(ans, moves);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
