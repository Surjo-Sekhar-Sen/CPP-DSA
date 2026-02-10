#include<iostream>
using namespace std;

void print(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main(){
    int numb;
    cout << "Enter the number of rows: " << endl;
    cin >> numb;
    print(numb);
    return 0;
}