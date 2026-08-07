#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = 0;
        int n = N - 1;
        for (int i = 0; i < N; i++) {
            if ((n & i) == i) {
                result ^= A[i];
            }
        }
        cout << result << "\n";
    }

    return 0;
}
