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
        
        int count_a = count(s.begin(), s.end(), 'a');
        int count_b = count(s.begin(), s.end(), 'b');
        
        cout << count_a << " " << count_b << endl;
    }
    
    return 0;
}
