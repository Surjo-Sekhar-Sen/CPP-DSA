#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, last, initial, revNum;
    cout << "Enter the number: "<< endl;
    cin >> num;
    initial = num;
    revNum = 0;

    while(num != 0){
        last = num % 10;
        num = num / 10;
        revNum = (revNum*10) + last;
    }
    cout << "The reverse of the number " << initial << " is: "<< endl;
    cout << revNum;
}