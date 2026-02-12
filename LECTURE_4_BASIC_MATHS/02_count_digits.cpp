#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, count;
    cout << "Enter the number: "<< endl;
    cin >> num;

    count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    cout << "The number of digits in the number: "<< endl;
    cout << count;
}