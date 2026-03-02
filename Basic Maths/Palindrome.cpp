#include <iostream>
using namespace std;

int main()
{

    int n, original_n, last_digit, reverseNumber = 0;
    cout << "Enter the number : " << endl;
    cin >> n;

    original_n = n;

    while (n > 0)
    {
        last_digit = n % 10;
        reverseNumber = (reverseNumber * 10) + last_digit;
        n = n / 10;
    }

    if (original_n == reverseNumber)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }

    cout << "Reverse of number is : " << reverseNumber;
    return 0;
}