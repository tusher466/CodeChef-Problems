#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long y = 2e9; 
        
        for (int i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            
            if (y < a) {
                y = a;
            } else if (y > b) {
                y = b;
            }
        }
        
        cout << y << "\n";
    }
    
    return 0;
}
