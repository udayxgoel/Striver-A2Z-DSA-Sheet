// Functional and Parameterized way
#include <iostream>
using namespace std;

// Parameterized
void sum(int i, int answer)
{
    if (i < 1)
    {
        cout << answer << endl;
        return;
    }
    sum(i - 1, answer + i);
}

// Functional way
int sum(int n)
{
    if (n == 0)
    {
        return n;
    }

    return n + sum(n - 1);
}

int main()
{
    int n, summission;
    cout << "Enter the number : " << endl;
    cin >> n;

    // sum(n, 0);
    summission = sum(n);
    cout << summission << endl;
    return 0;
}