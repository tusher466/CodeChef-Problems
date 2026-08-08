#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        
        int N;
        cin >> N;
        string S;
        cin >> S;

        int max_len = 0;
        int i = 0;
        while (i < N) {
            if (S[i] == 'u' || S[i] == 'o') {
                int curr_len = 1;
                max_len = max(max_len, curr_len);

                int j = i;
                while (j + 2 < N && S[j + 1] == 'w' && (S[j + 2] == 'u' || S[j + 2] == 'o')) {
                    curr_len += 2;
                    max_len = max(max_len, curr_len);
                    j += 2;
                }
                i = j + 1;
            } else {
                i++;
            }
        }
        
        cout << max_len << "\n";
    }

    return 0;
}
