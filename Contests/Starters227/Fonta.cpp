#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    if (s.length() >= 3 && s.substr(s.length() - 3) == "nta") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
