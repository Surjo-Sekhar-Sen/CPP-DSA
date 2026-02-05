#include <iostream>
using namespace std;

/*
(Q).
Take the age from the user and then decide accordingly
1. If age < 18, print-> not eligible for job
2. If age >= 18, print-> "eligble for job"
3. If age >= 55 and age <= 57, print-> "eligible for job, but retirement soon."
4. If age > 57 print-> "retirement time"

*/
int main()
{
    int age;
    cout << "Enter your age(In integer): ";
    cin >> age;

    if(age < 18)
    {
        cout << "You are not eligible for job.";
    }

    else if(age < 58)
    {
        cout << "You are eligible ";
        if(age >= 55)
        {
            cout << "but retirement soon.";
        }
    }

    else
    {
        cout << "Retirement time.";
    }

    return 0;
}