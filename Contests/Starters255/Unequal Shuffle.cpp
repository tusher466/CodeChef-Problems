#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string a, b;
            cin >> a >> b;
            
            int total_a = count(a.begin(), a.end(), 'a') + count(b.begin(), b.end(), 'a');
            
            if (total_a == n) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}
