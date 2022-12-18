#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    long long sum = 0;
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        sum = sum + temp;
        v.push_back(temp);
    }
    long long nsum = n * (n + 1) / 2;
    if (sum == nsum)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}