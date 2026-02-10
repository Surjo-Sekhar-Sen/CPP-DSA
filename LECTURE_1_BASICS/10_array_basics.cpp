#include <iostream>
using namespace std;

int main()
{   
    // 1D Array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "";
    }
    
    cout << "\n";

    // 2D Array
    int ar[3][5];
    ar[1][3] = 45;
    cout << ar[1][3] << "\n";
    cout << ar[3][4];

    return 0;
}