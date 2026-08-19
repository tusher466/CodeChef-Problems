#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int odd_count = 0;
        int even_count = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        if (odd_count == even_count) {
            cout << odd_count + even_count << endl;
        } else {
            cout << 2 * min(odd_count, even_count) + 1 << endl;
        }
    }

    return 0;
}
