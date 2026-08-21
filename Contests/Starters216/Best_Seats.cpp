#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_cost = a[0] + a[1];
        for (int i = 1; i < n - 1; i++) {
            min_cost = min(min_cost, a[i] + a[i + 1]);
        }

        cout << min_cost << endl;
    }

    return 0;
}
