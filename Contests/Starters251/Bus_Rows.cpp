#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;

        int row = (x + m - 1) / m;
        int front_dist = row;
        int back_dist = n - row + 1;

        cout << min(front_dist, back_dist) << endl;
    }

    return 0;
}
