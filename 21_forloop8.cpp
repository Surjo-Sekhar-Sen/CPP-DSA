#include <iostream>
using namespace std;

// Prime number or not

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n < 2)
    {
        cout << n << " is not a prime number!!";
    }
    else
    {  
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                cout << n << " is not a prime number!!";
                return 0; //INSTEAD OF USING BREAK, use RETURN 0 coz it returns value directly to function main, whereas BREAK will just break the for loop and come out of it, which means the statement outside for loop will also be executed(which we dont want!)
            } 
        }
        cout << n << " is a prime number!!";
        return 0;
    }
}