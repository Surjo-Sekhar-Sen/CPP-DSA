#include <iostream>
using namespace std;

void printName(string name){
    cout << "Hey "<< name;
}
int main(){
    string name;
    cout << "Enter your name: "<< endl;
    cin >> name;
    printName(name);
}