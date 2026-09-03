#include <iostream>
using namespace std;
int main()
{
    int number, i, counter = 0;

    cout << "Enter a number: ";
    cin >> number;

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            counter++;
        }
    } 
    if (counter == 0 && number != 1)
    {
        cout << number << " is a prime number." << endl;
    }
    else
    {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}