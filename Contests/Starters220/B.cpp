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
        bool possible = false;
        
        for (char c : s) {
            counts[c]++;
            if (counts[c] >= 2) {
                possible = true;
            }
        }
        
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
