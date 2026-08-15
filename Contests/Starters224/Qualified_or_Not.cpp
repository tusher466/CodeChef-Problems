#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n, x, y;
    cin >> n >> x >> y;
    
    long long required = 2 * max(x, y);
    
    if (n >= required) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
