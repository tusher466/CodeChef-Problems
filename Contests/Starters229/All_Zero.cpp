#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long y = b - 2 * a;
        
        if (y >= 0 && c == 3 * y) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}
