#include <iostream>
using namespace std;

// Factorial of a number

int main()
{
    int n;
    int prod = 1;
    cout << "Enter a number whose factorial you want: ";
    cin >> n;

    if(n == 0)
    {
        cout << "Factorial of " << n << " is: " << 1;
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            prod = prod * i;
        }
        
        cout << "Factorial of " << n << " is: " << prod;
    }
}