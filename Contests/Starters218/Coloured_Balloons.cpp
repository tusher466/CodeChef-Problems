#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        long long total_cost = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_cost += 1LL * (i + 1) * a[i];
        }
        
        cout << total_cost << endl;
    }
    
    return 0;
}
