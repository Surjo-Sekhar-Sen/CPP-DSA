#include <iostream>
using namespace std;

void print(int n){
    for(char i = 'A'; i < 'A'+ n; i++){
        for(char j = 'A'; j <= i; j++){
            cout << i << " ";
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