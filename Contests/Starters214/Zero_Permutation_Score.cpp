#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            int score = 0;
            int z = n - 3;
            
            while (z > 0) {
                score += z;
                z -= 2;
            }
            
            cout << score << endl;
        }
    }

    return 0;
}
