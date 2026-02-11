#include <iostream>
using namespace std;
//IT'S INCOMPLETE!!
void print(int n){
    for(int i = 0; i < n+(n-1); i++){
        if(i == 0 or i == n){
            for(int j = 0; j < n+(n-1); j++){
            cout << n << " ";
            }
            cout << endl;
        }
        else{
            for(int k = 0; k <= 0; k++){
                cout << n << " ";
                n--;
            }
            for(int l = 0; k < n+(n-1); k++){
                cout << n << " ";
            }
            cout << endl;
        }
    }
}