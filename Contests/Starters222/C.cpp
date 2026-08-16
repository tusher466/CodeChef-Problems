#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        vector<int> B(M);
        for (int i = 0; i < M; i++) {
            cin >> B[i];
        }

        sort(B.begin(), B.end());

        long long total = 0;
        for (int i = 0; i < N; i++) {
            auto it = lower_bound(B.begin(), B.end(), A[i]);
            total += (it - B.begin());
        }

        cout << total << endl;
    }

    return 0;
}
