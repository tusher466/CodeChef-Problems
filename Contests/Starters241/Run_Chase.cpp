#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    int runs_needed = n + 1;
    
    int r = runs_needed / 20;
    if (runs_needed % 20 != 0) {
        r++;
    }
    
    cout << r << endl;
    
    return 0;
}
