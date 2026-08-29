#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (cin >> t) {
        while (t--) {
            int r, y;
            cin >> r >> y;
            
            if (y <= r) {
                cout << r << endl;
            } else {
                cout << r + (y - r) / 2 << endl;
            }
        }
    }

    return 0;
}
