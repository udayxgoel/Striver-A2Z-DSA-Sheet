#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the number : " << endl;
    cin >> n;

    while (n > 0)
    {
        count = count + 1;
        n = n / 10;
    }

    cout << "Total digits in the number is : " << count;

    return 0;
}