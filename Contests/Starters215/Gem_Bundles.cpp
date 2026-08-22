#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--) 
    {
        int r, b, g;
        cin >> r >> b >> g;
        
        int bundles = min({r, b, g});
        
        int remaining_gems = (r - bundles) + (b - bundles) + (g - bundles);
        
        int total_coins = (bundles * 10) + (remaining_gems * 3);
        
        cout << total_coins << endl;
    }

    return 0;
}
