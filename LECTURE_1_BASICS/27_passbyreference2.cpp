#include <iostream>
using namespace std;

//pass by value
int change(string st){
    st[0] = 'd';
    cout << st << endl;
    st[4] = 'u';
    cout << st << endl;
}

//pass by refernece
int changes(string &str){
    str[0] = 'd';
    cout << str << endl;
    str[4] = 'u';
    cout << str << endl;
}
int main(){
    string s;
    cin >> s;
    cout << s << endl;
    change(s);
    cout << s << endl << endl;
    changes(s);
    cout << s << endl;
    return 0;
}