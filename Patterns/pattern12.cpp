#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows : " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // for numbers
        {
            cout << j;
        }

        for (int k = 1; k <= 2 * (n - i); k++) // for space
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) // for numbers
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}