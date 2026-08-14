#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
            
        long long initial_total = a + b;
        long long trades = a / x;
        long long profit_per_trade = y - x;
            
        long long final_total = initial_total + (trades * profit_per_trade);
            
        cout << final_total << endl;
    }
    
    return 0;
}
