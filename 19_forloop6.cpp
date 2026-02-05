#include <iostream>
using namespace std;

// Power of a number(Alernate way)

int main()
{
    int n, p;
    int value;

    cout << "Enter a number: ";
    cin >> n;
    value = n;

    cout << "Enter the power or exponent: ";
    cin >> p;

    for(int i = 1; i <= p - 1; i++)
    {
        value = value * n;
    }

    cout << n << " to the power of " << p << " is " << value;
}