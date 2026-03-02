#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter the number" << endl;
    cin >> n;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }

    if (count == 2)
    {
        cout << "Number is prime";
    }
    else
    {
        cout << "Number is not prime";
    }

    return 0;
}