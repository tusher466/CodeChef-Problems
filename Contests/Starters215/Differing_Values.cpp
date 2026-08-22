#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        bool possible = true;

        for (int i = 0; i < k; i++) {
            int chain_len = 0;
            for (int j = i; j < n; j += k) {
                chain_len++;
            }

            int req1 = chain_len / 2;
            int req0 = chain_len / 2;

            if (req0 > count0 || req1 > count1) {
                possible = false;
                break;
            }

            count0 -= req0;
            count1 -= req1;
        }

        if (possible) {
            cout << endl;
        } else {
            cout << endl;
        }
    }

    return 0;
}
