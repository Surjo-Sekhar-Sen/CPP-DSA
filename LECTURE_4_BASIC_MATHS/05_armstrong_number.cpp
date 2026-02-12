#include <iostream>
#include <cmath>
using namespace std;

int counts(int n){
    int r, count;
    count = 0;
    while(n != 0){
        r = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}
int main(){
    int num, rem, initial, sumVal, power;
    cout << "Enter the number: "<< endl;
    cin >> num;

    initial = num;
    sumVal = 0;
    power = counts(initial);
    while(num != 0){
        rem = num % 10;
        num = num / 10;
        sumVal = sumVal + round(pow(rem, power));
    }

    if(initial == sumVal){
        cout << initial << " is an Armstrong number!!"<< endl;
    }
    else{
        cout << initial << " is not an Armstrong number!!";
    }
}