#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int d = 0;
        while (true) {
            int m1 = n - d;
            if (m1 >= 1) {
                if ((m1 % 2 == 0 && m1 % 5 != 0) || (m1 % 2 != 0 && m1 % 5 == 0)) {
                    cout << d << "\n";
                    break;
                }
            }
            
            int m2 = n + d;
            if ((m2 % 2 == 0 && m2 % 5 != 0) || (m2 % 2 != 0 && m2 % 5 == 0)) {
                cout << d << "\n";
                break;
            }
            
            d++;
        }
    }
    
    return 0;
}
