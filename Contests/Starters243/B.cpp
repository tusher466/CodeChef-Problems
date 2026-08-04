#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;

    while (t--) {
        long long m, n;
        cin >> m >> n;

        if (n <= m) {
            cout << m - n << endl;
        } else {
            cout << (n - m) % 2 << endl;
        }
    }

    return 0;
}
