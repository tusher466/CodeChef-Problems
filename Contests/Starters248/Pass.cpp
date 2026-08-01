#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<int> scores(5);
        int count_60 = 0;
        int count_30 = 0;

        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
            if (scores[i] >= 60) {
                count_60++;
            }
            if (scores[i] >= 30) {
                count_30++;
            }
        }

        if (count_60 >= 2 && count_30 >= 4) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }

    return 0;
}
