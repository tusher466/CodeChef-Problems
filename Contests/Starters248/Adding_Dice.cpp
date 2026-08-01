#include <bits/stdc++.h>
using namespace std;

int main() {

    int X;
    if (cin >> X) {

        int required = 9 - X;
        if (required >= 1 && required <= 6) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
