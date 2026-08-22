#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;
    
    int prize = 1000 * (1 << (4 - X));
    
    cout << prize << endl;
    return 0;
    
}
