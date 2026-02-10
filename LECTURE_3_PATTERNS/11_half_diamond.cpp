#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        for(int k = i; k < n-1; k++){
            cout << " ";
        }
        cout << endl;
    }
    for(int t = 0; t < n-1; t++){
        for(int l = t; l < n-1; l++){
            cout << "*";
        }
        for(int m = 0; m < t+1; m++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int num;
    cout << "Enter th number of rows: " << endl;
    cin >> num;
    print(num);
    return 0;
}