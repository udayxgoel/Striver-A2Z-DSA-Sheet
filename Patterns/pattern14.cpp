#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows : " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}