#include <iostream>
using namespace std;

int print(int i, int n)
{
    if (i < 1)
    {
        return 0;
    }
    cout << i << endl;
    print(i - 1, n);
}

int main()
{
    int n;
    cout << "Enter the numnber" << endl;
    cin >> n;

    print(n, n);
    return 0;
}