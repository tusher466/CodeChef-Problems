#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        int total_count = 0;
        for (int i = 0; i < N; i++) {
            int L = 0;
            for (int j = 0; j < i; j++) {
                if (P[j] < P[i]) {
                    L++;
                }
            }

            int R = 0;
            for (int j = i + 1; j < N; j++) {
                if (P[j] > P[i]) {
                    R++;
                }
            }

            if (L == R) {
                total_count++;
            }
        }
        cout << total_count << endl;
    }

    return 0;
}
