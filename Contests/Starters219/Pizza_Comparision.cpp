#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long small_pizza = 100 * b;
        long long large_pizza = 225 * a;
        
        if (small_pizza > large_pizza) {
            cout << "Small" << endl;
        } else if (large_pizza > small_pizza) {
            cout << "Large" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }
    
    return 0;
}
