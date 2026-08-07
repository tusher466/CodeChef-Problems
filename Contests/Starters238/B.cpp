#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

        while (t--) {
            int x;
            cin >> x;
            if (x <= 20) {
                cout << x * 10 << endl;
            } else {
                cout << 200 + ((x - 20) / 2) * 5 << endl;
            }
        }

    return 0;
}
