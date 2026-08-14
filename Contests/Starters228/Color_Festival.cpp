#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        set<int> unique_colors;

        for (int i = 0; i < N; i++) {
            int color;
            cin >> color;
            unique_colors.insert(color);
        }

        cout << unique_colors.size() << endl;
    }

    return 0;
}
