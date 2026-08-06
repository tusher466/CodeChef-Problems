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
        
        int edits = 0;
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == s[i+1] && s[i+1] == s[i+2]) {
                edits++;
                s[i+2] = '?';
            }
        }
        cout << edits << endl;
    }
    
    return 0;
}
