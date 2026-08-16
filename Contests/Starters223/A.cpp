#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x;
    cin >> x;

    int effective_amount = max(x, x - 50);
    if (x >= 200) {
        effective_amount = x - 50;
    } else {
        effective_amount = x;
    }

    cout << effective_amount << endl;

    return 0;
}
