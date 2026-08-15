#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x;
    cin >> x;
    
    int option1 = 100 + 4 * x;
    int option2 = 300;
    
    if (option1 < option2) {
        cout << option1 << endl;
    } else {
        cout << option2 << endl;
    }
    
    return 0;
}
