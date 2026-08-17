#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        map<char, int> counts;
        bool check = true;
        
        for (int i = 0; i < n; i++) {
            counts[s[i]]++;
            if (counts[s[i]] > 2) {
                check = false;
            }
        }
        
        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
