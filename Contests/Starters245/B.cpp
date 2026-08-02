#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int ans = 0;
        int current = x;
        
        while (current > y) {
            int seconds = (current + 9) / 10;
            ans += seconds;
            current--;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
