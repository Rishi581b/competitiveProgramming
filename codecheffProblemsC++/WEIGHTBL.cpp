#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        float a = w2 - w1;
        if (a <= M * x2 && a >= M * x1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}
