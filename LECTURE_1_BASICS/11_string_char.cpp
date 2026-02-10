#include <iostream>
using namespace std;

int main()
{
    string s = "Surjo";
    cout << s[3];
    cout << s[4];

    int len = s.size();
    cout << len;
    cout << s[len - 1];
    s[len - 1] = 'z';

    cout << s[len - 1];
    cout << s[len - 2];
}