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
        
        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++) {
            char c = tolower(s[i]);
            freq[c - 'a']++;
        }
        
        sort(freq.rbegin(), freq.rend());
        
        int ans = freq[0] + freq[1];
        cout << ans << endl;
    }
    
    return 0;
}
