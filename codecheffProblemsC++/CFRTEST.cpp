#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int arr[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            s.insert(arr[i]);
        }
        set<int>::iterator it;
        for (it = s.begin(); it != s.end(); it++)
        {
            count++;
        }
        cout << count << endl;
    }
}