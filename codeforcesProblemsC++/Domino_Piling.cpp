#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int mul = m * n, div = mul / 2;
    if (mul < 2)
    {
        cout << "0\n";
    }
    else
    {
        cout << div << "\n";
    }
}