#include<iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << "*";
        }
        for(int k = 0; k < 2*i; k++){
            cout << " ";
        }
        for(int l = i; l < n; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int t = 0; t < n; t++){
        for(int m = 0; m <= t; m++){
            cout << "*";
        }
        for(int o = 0; o < 2*((n-1)-t); o++){
            cout << " ";
        }
        for(int p = 0; p <= t; p++){
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