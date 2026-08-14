#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        
        int melted = y * n;
        int remaining = x - melted;
        
        int ans = max(0, remaining);
        
        cout << ans << endl;
    }
    
    return 0;
}
