#include <bits/stdc++.h>

using namespace std;

int main() {

    int X, Y, Z;
    cin >> X >> Y >> Z;

    int australia_total = X + Z;
    if (Y > australia_total) {
        cout << 0 << endl;
    } else {
        cout << (australia_total - Y) + 1 << endl;
    }

    return 0;
}
