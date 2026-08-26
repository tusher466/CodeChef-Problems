#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int days_left = 10 - (N % 10);
    
    cout << days_left << endl;

    return 0;
}
