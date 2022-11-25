#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        string n;
        cin >> d;
        cin >> n;
        int a = n.find("5");
        int b = n.find("0");
        if (a == -1 && b == -1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}