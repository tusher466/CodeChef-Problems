#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        
        int count = 0;
        
        if (x >= 50) {
            count = count + 1;
        }
        if (y >= 50) {
            count = count + 1;
        }
        if (z >= 50) {
            count = count + 1;
        }
        
        if (count >= 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
