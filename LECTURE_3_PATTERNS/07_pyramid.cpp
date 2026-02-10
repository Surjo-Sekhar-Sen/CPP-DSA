#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n-1; j++){
            cout << " ";
        }
        for(int k = 0; k < i+1; k++){
            cout << "*";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
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