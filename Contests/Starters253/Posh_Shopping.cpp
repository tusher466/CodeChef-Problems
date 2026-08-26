#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> c(n);
        int max_amount = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            max_amount = max(max_amount, c[i]);
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (c[i] <= c[j]) {
                    max_amount = max(max_amount, c[i] + c[j]);
                }
            }
        }
        
        cout << max_amount << endl;
    }

    return 0;
}
