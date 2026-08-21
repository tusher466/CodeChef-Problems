#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, M, B;
    cin >> N >> A >> M >> B;

    int invest = N * A;
    int sell = M * B;

    if (sell > invest)
    {
        cout << (sell - invest) << endl;
    }
    else
    {
        cout << - (invest - sell) << endl;
    }
    
    return 0;
}
