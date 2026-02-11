#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0; i < n; i++){
        for(char j = 'A'; j <= 'A'+ i; j++){
            cout << j << " ";
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