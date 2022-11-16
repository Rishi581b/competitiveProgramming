#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long finger, glove;
        cin >> n;
        vector<int> arr;
        vector<int> arr2;
        vector<int> arr3;
        for (int i = 0; i < n; i++)
        {
            cin >> finger;
            arr.push_back(finger);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> glove;
            arr2.push_back(glove);
        }
        int flag = 1;
        int flagrev = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= arr2[i])
            {
                flag = 2;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        reverse(arr2.begin(), arr2.end());
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= arr2[i])
            {
                flagrev = 2;
                continue;
            }
            else
            {
                flagrev = 1;
                break;
            }
        }
        if (flag == 1 && flagrev == 1)
        {
            cout << "none" << endl;
        }
        if (flag == 2 && flagrev == 2)
        {
            cout << "both" << endl;
        }
        if (flag == 2 && flagrev == 1)
        {
            cout << "front" << endl;
        }
        if (flag == 1 && flagrev == 2)
        {
            cout << "back" << endl;
        }
    }
}