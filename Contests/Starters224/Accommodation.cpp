#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        if (x + y > n) {
            cout << -1 << endl;
            continue;
        }

        long long total_people = b + g;
        long long rooms = (total_people + n - 1) / n;

        if (x > 0 && b / x < rooms) {
            cout << -1 << endl;
            continue;
        }

        if (y > 0 && g / y < rooms) {
            cout << -1 << endl;
            continue;
        }

        cout << rooms << endl;
    }

    return 0;
}
