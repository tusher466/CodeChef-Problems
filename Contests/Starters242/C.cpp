#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long N, K;
        cin >> N >> K;

        vector<long long> player_scores(N + 1, 0);
        long long current_card_value = K;
        long long player = 1;
        long long direction = 1;

        for (long long i = 0; i < K; ++i) {
            player_scores[player] += current_card_value;
            current_card_value--;

            if (direction == 1) {
                if (player == N) {
                    direction = -1;
                } else {
                    player++;
                }
            } else {
                if (player == 1) {
                    direction = 1;
                } else {
                    player--;
                }
            }
        }

        long long max_strength = *max_element(player_scores.begin() + 1, player_scores.end());
        cout << max_strength << endl;
    }

    return 0;
}
