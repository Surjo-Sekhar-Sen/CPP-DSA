#include <iostream>
using namespace std;

// Any number's table 

int main()
{
    int n, t;

    cout << "Enter the number whose multiplication table you want: ";
    cin >> n;

    cout << "Enter the number till which you want it's table to go: ";
    cin >> t;

    for(int i = 1; i <= t; i++)
    {
        cout << n << " x " << i << " = " << n * i << "\n"; 
    }
}