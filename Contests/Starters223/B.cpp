#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        long long pairs1 = min(x, z);
        long long pairs2 = y / 2;
        
        long long total_pairs = pairs1 + pairs2;
        
        cout << total_pairs << endl;
    }
    
    return 0;
}
