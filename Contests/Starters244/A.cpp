#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int D, T;
    cin >> D >> T;
    
    int remaining_distance = max(0, D - T);
    
    cout << remaining_distance << endl;
    
    return 0;
}
