#include <iostream>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
int main(){
    int num;
    cout << "Enter the number of rows: " << endl;
    cin >> num;
    print(num); 
    return 0;
}