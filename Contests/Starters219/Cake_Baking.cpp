#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    
    int remaining_cakes = m - n;
    int happy_customers = min(n, remaining_cakes);
    
    cout << happy_customers << endl;
    
    return 0;
}
