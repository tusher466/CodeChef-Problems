#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {

        int n, x, y;
        cin >> n >> x >> y;

        int first_phase = min(n, 3);
        int remaining_phase = max(0, n - 3);

        int total_cost = (first_phase * x) + (remaining_phase * y);

        cout << total_cost << endl;
    }

    return 0;
}