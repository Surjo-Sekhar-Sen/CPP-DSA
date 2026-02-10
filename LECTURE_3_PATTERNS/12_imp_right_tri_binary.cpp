#include <iostream>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            for(int j = 1; j <= i; j++){
                cout << j % 2  << " ";
            }
            cout << endl;
        }
        else if(i % 2 == 0){
            for(int k = 0; k < i; k++){
                cout << k % 2 << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    int num;
    cout << "Enter the number of rows: " << endl;
    cin >> num;
    print(num);
    return 0;
}