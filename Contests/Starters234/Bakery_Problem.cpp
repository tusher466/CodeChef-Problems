#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long cost_no_bribe = 100 * n;
    long long cost_with_bribe = (long long)k + 60 * n;

    long long min_cost = min(cost_no_bribe, cost_with_bribe);

    cout << min_cost << endl;

    return 0;

}
