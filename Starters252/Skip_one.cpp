#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long k;
            cin >> n >> k;
            
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            long long sum = 0;
            long long max_cost = 0;
            int max_items = 0;
            
            for (int i = 0; i < n; i++) {
                sum += a[i];
                max_cost = max(max_cost, a[i]);
                
                if (sum - max_cost <= k) {
                    max_items++;
                } else {
                    break;
                }
            }
            
            cout << max_items << endl;
        }
    }

    return 0;
}
