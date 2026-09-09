#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            sort(a.begin(), a.end());
            
            int max_f = 1;
            int current_f = 1;
            
            for (int i = 1; i < n; i++) {
                if (a[i] == a[i - 1]) {
                    current_f++;
                } else {
                    max_f = max(max_f, current_f);
                    current_f = 1;
                }
            }
            max_f = max(max_f, current_f);
            
            cout << (max_f + 1) / 2 << endl;
        }
    }

    return 0;
}
