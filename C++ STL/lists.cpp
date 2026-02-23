// same as vectors all the same as vectors

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(3); //{2,3}

    ls.push_front(4);    // {4,2,3}
    ls.emplace_front(3); // {3,4,2,3}
    return 0;
}