#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            long long x, y, z;
            cin >> x >> y >> z;
            
            if (z <= y) {
                cout << -1 << endl;
            } else {
                long long diff = z - y;
                long long months = (x + diff - 1) / diff;
                cout << months << endl;
            }
        }
    }
    return 0;
}
