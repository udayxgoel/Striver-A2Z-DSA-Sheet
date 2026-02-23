// stack works on FIFO Principal
// There is no indexing only 3 functions push pop and top
// Everything happens in constant time O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> st;
    st.push(1); // {1}
    st.push(2); // {1,2}
    st.push(3); // {1,2,3}

    st.back() += 5; // 8

    cout << st.front() << endl; // 1

    st.pop(); // 2,8

    return 0;
}