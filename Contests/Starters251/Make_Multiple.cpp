#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        queue<pair<int, int>> q;
        unordered_set<int> visited;

        q.push({n, 0});
        visited.insert(n);

        while (!q.empty()) {
            auto current = q.front();
            q.pop();

            int val = current.first;
            int ops = current.second;

            if (val % 3 == 0) {
                cout << ops << "\n";
                break;
            }

            int next_add = val + 1;
            if (visited.find(next_add) == visited.end()) {
                visited.insert(next_add);
                q.push({next_add, ops + 1});
            }

            int next_mult5 = (val / 5 + 1) * 5;
            if (visited.find(next_mult5) == visited.end()) {
                visited.insert(next_mult5);
                q.push({next_mult5, ops + 1});
            }
        }
    }

    return 0;
}
