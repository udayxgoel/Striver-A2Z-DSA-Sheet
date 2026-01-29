#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (char j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}