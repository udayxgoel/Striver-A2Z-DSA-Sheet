#include <iostream>
using namespace std;

int print(int i, int n)
{
    if (i > n)
    {
        return 0;
    }
    cout << "Ram" << endl;
    print(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the numnber" << endl;
    cin >> n;

    print(1, n);
    return 0;
}