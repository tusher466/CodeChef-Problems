#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> even_numbers;
        for (long long i = 2; i <= n; i += 2) {
            even_numbers.push_back(i);
        }

        long long total_score = 0;
        for (long long val : even_numbers) {
            total_score += val;
        }

        cout << total_score << endl;
    }

    return 0;
}
