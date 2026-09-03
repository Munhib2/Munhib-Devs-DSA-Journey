#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c;

    for (int i = 1; i <= 10; i++)
    {
        
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}