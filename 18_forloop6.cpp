#include <iostream>
using namespace std;

// Power of a number 

int main()
{
    int n, p;
    int prod = 1;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Enter the power or exponent: ";
    cin >> p;

    for(int i = 1; i <= p; i++)
    {
        prod = prod * n;
    }

    cout << n << " to the power of " << p << " is " << prod;
}