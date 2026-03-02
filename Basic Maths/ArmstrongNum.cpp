#include <iostream>
using namespace std;

int main()
{

    int n, duplicate_n, last_digit, armstrong_num = 0;
    cout << "Enter the number : " << endl;
    cin >> n;

    duplicate_n = n;

    while (n > 0)
    {
        last_digit = n % 10;
        armstrong_num = armstrong_num + (last_digit * last_digit * last_digit);
        n = n / 10;
    }

    if (duplicate_n == armstrong_num)
    {
        cout << "It is an armstrong number" << endl;
    }
    else
    {
        cout << "It is not an armstrong number";
    }
    return 0;
}