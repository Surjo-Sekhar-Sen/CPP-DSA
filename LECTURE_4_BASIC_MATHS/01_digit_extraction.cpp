#include <bits/stdc++.h>
using namespace std;

int main(){
    int rem, num;
    cout << "Enter the number: "<< endl;
    cin >> num;

    cout << "The digits in the number you gave: "<< endl;
    while(num != 0){
        rem = num % 10;
        cout << rem << " ";
        num = num / 10;
    }
}