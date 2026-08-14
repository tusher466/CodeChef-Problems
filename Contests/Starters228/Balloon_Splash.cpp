#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int X, Y;
    cin >> X >> Y;

    if (X == Y) {
        cout << "Draw" << endl;
    } else {
        int highest = max(X, Y);
        if (highest == X) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
