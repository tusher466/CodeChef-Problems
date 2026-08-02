#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int current_player = 1;

        while (current_player + k <= n) {
            current_player += k;
        }

        cout << current_player << endl;
    }

    return 0;
}
