// stack works on LIFO Principal
// There is no indexing only 3 functions push pop and top
// Everything happens in constant time O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.push(5); // {5,4,3,2,1}

    cout << st.top() << endl; // prints 5

    st.pop(); // {4,3,2,1}

    cout << st.top() << endl; // prints 4

    cout << st.size() << endl; // prints 4

    cout << st.empty(); // returns false

    return 0;
}