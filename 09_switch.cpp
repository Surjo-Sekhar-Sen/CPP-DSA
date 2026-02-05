#include <iostream>
using namespace std;

// (Q).Find the Day by using Day number in switch statements..(Also use default)! 

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch(day)
    {
        case 1:
        {
            cout << "Monday";
            break;                  //Break statements are essential for coming out of the loop or switch or if-else statements, otherwise the next statements will also get printed or executed once there is a true statement 
        }
        case 2:
        {
            cout << "Tuesday";
            break;
        }
        case 3:
        {
            cout << "Wednesday";
            break;
        }
        case 4:
        {
            cout << "Thursday";
            break;
        }
        case 5:
        {
            cout << "Friday";
            break;
        }
        case 6:
        {
            cout << "Saturday";
            break;
        }
        case 7:
        {
            cout << "Sunday";
            break;
        }
        default:
            cout << "Invalid";
            break;
    }
    return 0;
}