#include <iostream>
using namespace std;

int main()
{

    int n, last_digit, reverseNumber = 0;
    cout << "Enter the number : " << endl;
    cin >> n;

    while (n > 0)
    {
        last_digit = n % 10;
        reverseNumber = (reverseNumber * 10) + last_digit;
        n = n / 10;
    }

    cout << "Reverse of number is : " << reverseNumber;
    return 0;
}