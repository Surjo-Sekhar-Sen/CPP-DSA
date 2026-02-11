#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        if(i == 0 or i == n-1){
            for(int j = 0; j < n-1; j++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(int k = 0; k <= 0; k++){
                cout << "*";
            }
            for(int l = 0; l < n-3; l++){
                cout << " ";
            }
            for(int m = 0; m <= 0; m++){
                cout << "*";
            }
            cout << endl << endl;
        }
    }
}

int main(){
    int num;
    cout << "Enter the number of rows: "<< endl;
    cin >> num;
    print(num);
    return 0;
}