#include <iostream>
using namespace std;

int main()
{
    int n1, n2, gcd;
    cout << "Enter the number 1" << endl;
    cin >> n1;

    cout << "Enter the number 2" << endl;
    cin >> n2;

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD IS : " << gcd;
    return 0;
}