#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int cost = (N / 2) * 30 + (N % 2) * 20;
        
        cout << cost << endl;
    }

    return 0;
}
