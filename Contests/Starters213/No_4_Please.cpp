#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            int c1 = 0;
            int c2 = 0;
            int c3 = 0;
            
            for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                if (a == 1) c1++;
                else if (a == 2) c2++;
                else if (a == 3) c3++;
            }
            
            int deletions = min(c1, c3);
            
            if (c2 > 1) {
                deletions += (c2 - 1);
            }
            
            cout << deletions << endl;
        }
    }

    return 0;
}
