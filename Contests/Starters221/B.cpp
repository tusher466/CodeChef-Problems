#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }
        
        int ans = 0;
        bool jacket = false;
        
        for (int i = 0; i < n; i++) {
            if (temp[i] < a) {
                if (!jacket) {
                    ans++;
                    jacket = true;
                }
            } else if (temp[i] > b) {
                jacket = false;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
