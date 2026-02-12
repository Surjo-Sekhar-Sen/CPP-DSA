#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n){
    int r, rev;
    rev = 0;
    while(n != 0){
        r = n % 10;
        n = n / 10;
        rev = (rev*10) + r;
    }
    return rev;
}
int main(){
    int num, revNum;
    cout << "Enter the number: "<< endl;
    cin >> num;
    revNum = reverse(num);

    if(num == revNum){
        cout << num << " is a Palindrome!!"<< endl;
    }
    else{
        cout << num << " is not a Palindrome!!";
    }
}
    