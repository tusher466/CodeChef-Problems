#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int need = (n / 2) + 1;
    if(need > k)
    {
        cout << need - k << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    
    return 0;
}
