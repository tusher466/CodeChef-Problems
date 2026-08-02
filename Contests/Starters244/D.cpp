#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<long long, int> reach_count;
        map<long long, long long> total_ops;

        for (int i = 0; i < n; i++) {
            long long current_num = a[i];
            int steps = 0;

            while (true) {
                reach_count[current_num]++;
                total_ops[current_num] += steps;

                if (current_num == 0) {
                    break;
                }

                current_num /= 2;
                steps++;
            }
        }

        long long final_answer = -1;

        for (auto pair : reach_count) {
            long long target_value = pair.first;
            int times_reached = pair.second;

            if (times_reached == n) {
                long long cost = total_ops[target_value];
                if (final_answer == -1 || cost < final_answer) {
                    final_answer = cost;
                }
            }
        }

        cout << final_answer << endl;
    }

    return 0;
}
