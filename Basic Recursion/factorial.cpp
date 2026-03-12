// Functional and Parameterized way
#include <iostream>
using namespace std;

// Parameterized way
void factorial(int n, int answer)
{
    if (n < 1)
    {
        cout << answer << endl;
        return;
    }
    factorial(n - 1, answer * n);
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    factorial(n, 1);
    return 0;
}