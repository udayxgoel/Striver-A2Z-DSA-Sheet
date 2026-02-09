#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second << endl; // 1 3

    // if you want to store more than 2 variabes we used nested properties
    pair<int, pair<int, int>> p2 = {1, {2, 3}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second; // 1 2 3

    // store arrays in pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second; // 4
    return 0;
}