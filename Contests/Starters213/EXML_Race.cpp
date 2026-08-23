#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int max_speed = 0;
        int best_car = 1;
        
        for (int i = 1; i <= n; i++) {
            int d, time;
            cin >> d >> time;
            
            int speed = d / time;
            
            if (speed > max_speed) {
                max_speed = speed;
                best_car = i;
            }
        }
        
        cout << best_car << endl;
    }

    return 0;
}
