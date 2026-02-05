#include <iostream>
using namespace std;

//Square of numbers (give two inputs and the numbers from start input to end input) 

int main()
{
    int n, t;
    cout << "From which number do you want square: ";
    cin >> n;

    cout << "Till which number you want squares to go: ";
    cin >> t;

    for(int i = n; i <= t; i++)
    {
        cout << i*i << " ";
    }
}