#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<long long> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            long long max_time_so_far = 0;
            long long total_wait_time = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] > max_time_so_far) {
                    max_time_so_far = a[i];
                } else {
                    total_wait_time += (max_time_so_far - a[i]);
                }
            }

            cout << total_wait_time << endl;
        }
    }

    return 0;
}
