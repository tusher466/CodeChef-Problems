#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        while (n >= a) {
            n = n - a + b;
        }
        
        cout << n << endl;
    }
    
    return 0;
}
