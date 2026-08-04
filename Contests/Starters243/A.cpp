#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x, y;
    cin >> x >> y;
    
    int diff = abs(x - y);
    
    if (diff <= 2) {
        cout << "Interesting" << endl;
    } else {
        cout << "Boring" << endl;
    }
    
    return 0;
}
