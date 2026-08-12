#include<bits/stdc++.h>
using namespace std;

int main()
{

    int L, R;
    if (cin >> L >> R) {
        if (L == R) {
            if (L % 2 == 0) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}
