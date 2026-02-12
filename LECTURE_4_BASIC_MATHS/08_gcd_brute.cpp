#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cout << "Enter the two numbers for GCD: "<< endl;
    cin >> n1 >> n2;
    int gcd;
    gcd = 1;

    for(int i = min(n1, n2); i >= 1; i--){
        if(n1 % i == 0 and n2 % i == 0){
            gcd = i;
            break;
        }
    }
    cout << "The GCD of the two numbers " << n1 << " " << n2 << " is: "<< endl;
    cout << gcd;
    return 0;
}