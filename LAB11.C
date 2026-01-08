#include <iostream>
using namespace std;

int divide(int a, int b)
{
    if (b == 0)
        throw b;
    return a / b;
}

int main()
{
    int x, y, r;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    try
    {
        r = divide(x, y);
        cout << "Result = " << r << endl;
    }
    catch (int)
    {
        cout << "Exception occurred: Divide by zero" << endl;
    }

    cout << "Finish" << endl;
    return 0;
}
