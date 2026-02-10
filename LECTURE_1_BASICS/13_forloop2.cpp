#include <iostream>
using namespace std;

// Print all even numbers till n

int main()
{
    int n;
    cout << "Enter the number till which you want even numbers: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
        }
        else
        {
            cout << " ";
        }
    }
}