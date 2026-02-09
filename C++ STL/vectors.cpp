// Vectors are dynamic in nature we can increase array sizse any time not like static arrays.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v; // []

    vector<pair<int, int>> vec;

    v.push_back(1);    // [1]
    v.emplace_back(2); // [2] faster than push back

    vector<int> v(5, 100);

    vector<int> v(5); // [0,0,0,0,0]

    vector<int> v1(2, 10); // [10,10]
    vector<int>(v1);       // contrains v1 element

    // Iterators
    vector<int>::iterator it = v.begin(); // it points to the memory adress not the element

    cout << *(it) << "";

    vector<int>::iterator it = v.end(); // not points to the end but after the end element

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it : v)
    {
        cout << it << endl;
    }

    v.erase(v.begin() + 1); //{10,20,20,40}

    // {10,20,30,40,50}
    v.erase(v.begin() + 1, v.begin() + 4); // {10,20,50}

    // insert functions
    vector<int> v(2, 100);            // {100,100}
    v.insert(v.begin(), 300);         // {300,100,100}
    v.insert(v.begin() + 1, (2, 50)); // {300,50,50,100,100}

    cout << v.size(); // 5

    v.pop_back(); // {300,50,50,100}

    v.clear(); // clears the entire vector;

    cout << v.empty(); // returns true or false

    return 0;
}