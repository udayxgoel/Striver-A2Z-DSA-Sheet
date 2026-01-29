#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';

        for (int j = 0; j < n - i - 1; j++)
        { // for space
            cout << " ";
        }

        for (int k = 0; k < i * 2 + 1; k++) // for char
        {
            cout << ch << " ";
        }

        for (int j = 0; j < n - i - 1; j++)
        { // for space
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}