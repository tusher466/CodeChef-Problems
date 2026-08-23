#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, r;
    cin >> n >> k >> r;
    
    int remaining_pizzas = n - k;
    int total_revenue = remaining_pizzas * r;
    
    cout << total_revenue << endl;
    
    return 0;
}
