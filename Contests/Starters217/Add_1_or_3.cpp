#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        if (m >= n && m <= 3 * n && (m % 2 == n % 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
