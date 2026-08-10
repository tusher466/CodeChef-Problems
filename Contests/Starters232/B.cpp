#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
            
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
            
        int min_val = *min_element(a.begin(), a.end());
        int max_val = *max_element(a.begin(), a.end());
            
        int liked_days = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] != min_val && a[i] != max_val) 
            {
                liked_days++;
            }
        }

        cout << liked_days << "\n";
    }

    return 0;
}
