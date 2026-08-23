#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        bool has_less = false;
        bool has_greater = false;
        bool has_equal = false;
        
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            
            if (a < x) {
                has_less = true;
            } else if (a > x) {
                has_greater = true;
            } else {
                has_equal = true;
            }
        }
        
        if (!has_less || !has_greater || has_equal) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
