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
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
            }
            
            vector<int> b(n);
            for (int i = 0; i < n; ++i) {
                cin >> b[i];
            }
            
            bool possible = true;
            for (int i = 0; i < n - 1; ++i) {
                bool a_less = a[i] < a[i+1];
                bool b_less = b[i] < b[i+1];
                
                if (a_less != b_less) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
