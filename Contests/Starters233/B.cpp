#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        long long N, M, A, B, C;
        cin >> N >> M >> A >> B >> C;
        
        long long combos = min(N, M);
        long long cost = combos * C;
        
        if (N > M) {
            cost += (N - M) * A;
        } else {
            cost += (M - N) * B;
        }
        
        cout << cost << "\n";
    }
    
    return 0;
}
