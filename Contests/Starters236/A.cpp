#include <bits/stdc++.h>

using namespace std;

int main() {
  
    int X, Y;
    if (cin >> X >> Y) {
        int total_cost = (X * 100) + ((Y - X) * 150);
        cout << total_cost << endl;
    }
  
    return 0;
}
