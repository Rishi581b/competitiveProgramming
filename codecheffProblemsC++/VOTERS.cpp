#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
#include <climits>
#define ll long long int
using namespace std;
int main()
{
    int a, b, c;
    int max = INT_MIN;
    cin >> a >> b >> c;
    int n = a + b + c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    unordered_set<int> s;
    unordered_set<int>::iterator it;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            s.insert(arr[i]);
        }
    }
    vector<int> v;
    for (auto x : s)
    {
        count++;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << count << "\n";
    for (auto i : v)
    {
        cout << i << "\n";
    }
}
