#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector < long long > a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater < long long > ());

        long long current_sum = 0;
        int max_size = 0;

        for (int i = 0; i < n; ++i)
        {

            if (current_sum + a[i] >= 0)
            {
                current_sum += a[i];
                max_size++;
            } else
            {
                break;
            }
        }
        cout << max_size << endl;
    }

    return 0;
}