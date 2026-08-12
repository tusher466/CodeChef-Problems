#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            long long total_sum = 0;
            int odd_count = 0;
            
            for (int i = 0; i < n; ++i) {
                long long a;
                cin >> a;
                total_sum += a;
                if (a % 2 != 0) {
                    odd_count++;
                }
            }
            
            if (total_sum % 2 == 0) {
                cout << total_sum - odd_count / 2 << "\n";
            } else {
                cout << odd_count / 2 << "\n";
            }
        }
    }
    
    return 0;
}
