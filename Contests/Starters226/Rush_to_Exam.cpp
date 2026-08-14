#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m, a;
    if (cin >> n >> m >> a) {
        if (n * a >= m) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
