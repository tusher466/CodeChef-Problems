#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y, a, b;
    cin >> x >> y >> a >> b;

    pair<int, int> alice = {x, y};
    pair<int, int> bob = {a, b};

    if (alice >= bob) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }

    return 0;
}
