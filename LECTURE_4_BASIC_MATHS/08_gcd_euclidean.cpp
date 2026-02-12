#include <iostream>
using  namespace std;

int main(){
    int n1, n2, a, b, gcd;
    cout << "Enter the two numbers whose GCD you want to find: "<< endl;
    cin >> n1 >> n2;
    a = n1; b = n2;

    while(a > 0 and b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        gcd = b;
    }
    else{
        gcd = a;
    }
    cout << "The GCD of the two number "<< n1 << " " << n2 << " is:" << endl;
    cout << gcd;
    return 0;
}