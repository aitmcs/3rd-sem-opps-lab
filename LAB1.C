#include <iostream>
using namespace std;

void main()
{
    int a, b, c, largest;
    cout << "Enter 3 No's";
    cin >> a >> b >> c;

    if (a > b && a > c)
        largest = a;
    else if (b > c)
        largest = b;
    else
        largest = c;

    cout << "largest No is " << largest;
}
