#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        for(int k = 0; k < 2*((n-1)-i); k++){
            cout << " ";
        }
        for(int l = 0; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int t = 0; t < n-1; t++){
        for(int m = t; m < n-1; m++){
            cout << "*";
        }
        for(int o = 0; o < 2*(t+1); o++){
            cout << " ";
        }
        for(int p = t; p < n-1; p++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int num;
    cout << "Enter the number of rows: "<< endl;
    cin >> num;
    print(num);
    return 0;
}