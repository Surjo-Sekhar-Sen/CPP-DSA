#include <iostream>
using namespace std;

int main(){
    int  n, t;
    cout << "Enter the number from where you want the squares: " << endl;
    cin >> n;

    cout << "Enter the nuber till which you want the squares: "<< endl;
    cin >> t;

    int i = n;
    while (i <= t){
        cout << i * i << "\n";
        i += 1;
    }
    return 0;
}