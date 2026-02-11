#include <iostream>
using namespace std;

void print(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = i; j <= n-1; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << ch;
            if(k < i){
                ch++;
            }
        }
        for(int l = i; l > 1; l--){
            ch--;
            cout << ch;
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