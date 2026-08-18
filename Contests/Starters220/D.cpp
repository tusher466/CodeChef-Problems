#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (x % 2 != 0) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
