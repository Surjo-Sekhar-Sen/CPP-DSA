#include <iostream>
using namespace std;

// Any number's table till 10(different approach)

int main()
{
    int n;
    cout << "Enter the number whose multiplication table you want: ";
    cin >> n;

    for(int i = n; i <= n*10; i += n)
    {
        cout << i << " ";
    }
}