#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if ((x1 + y1) % 2 != (x2 + y2) % 2) {
            cout << -1 << "\n";
        } else if (abs(x1 - x2) == abs(y1 - y2)) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }

    return 0;
}
