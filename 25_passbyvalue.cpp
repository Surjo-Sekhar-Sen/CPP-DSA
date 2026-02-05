#include <iostream>
using namespace std;

//pass by value 
int change(int n){
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
    n += 5;
    cout << n << endl;
    return 0;
}

int main(){
    int num;
    cin >> num;
    cout << num << endl;
    change(num);
    cout << num << endl;
    return 0;
}