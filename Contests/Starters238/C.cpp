#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        
        map<int, int> score_counts;
        for (int i = 0; i < N; ++i) {
            int score;
            cin >> score;
            score_counts[score]++;
        }
        
        vector<int> cluster_sizes;
        for (auto it = score_counts.rbegin(); it != score_counts.rend(); ++it) {
            cluster_sizes.push_back(it->second);
        }
        
        int eligible_candidates = 0;
        int limit = min(K, (int)cluster_sizes.size());
        for (int i = 0; i < limit; ++i) {
            eligible_candidates += cluster_sizes[i];
        }
        
        int max_selected = min(eligible_candidates, X);
        cout << max_selected << "\n";
    }
    
    return 0;
}
