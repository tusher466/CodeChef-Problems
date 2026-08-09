#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;

        long long total_time = (long long)n * (n + 1) / 2 - (long long)m * (m + 1) / 2;
        cout << abs(total_time) << endl;
    }

    return 0;

}
