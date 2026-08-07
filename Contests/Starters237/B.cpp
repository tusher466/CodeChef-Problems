#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    
    while (T--) {
        long long X, Y, Z;
        cin >> X >> Y >> Z;

        long long sides[3] = {X, Y, Z};
        sort(sides, sides + 3);

        long long S = sides[0] + sides[1];
        long long M = sides[2];

        if (S > M) {
            cout << 0 << endl;
        } else {
            cout << (M + 1) - S << endl;
        }
    }
    return 0;
}
