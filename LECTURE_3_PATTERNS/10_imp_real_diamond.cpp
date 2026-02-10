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
    for(int m = 0; m < n-1; m++){
        for(int p = 0; p < m+1; p++){
            cout << " ";
        }
        for(int q = m; q < n-1; q++){
            cout << "*";
        }
        for(int r = m; r < n-2; r++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){
    int num;
    cout << "Enter the number of rows: " << endl;
    cin >> num;
    print(num);
    return 0;
}