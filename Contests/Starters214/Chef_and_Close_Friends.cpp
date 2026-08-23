#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        long long max_distance = min(y, z);
        cout << 2 * max_distance << endl;
    }

    return 0;
}
