#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int a[3] = {10, 20, 30};
    int n;

    cout << "Enter array index";
    cin >> n;

    try
    {
        if (n > 2)
            throw n;

        cout << a[n];
    }
    catch (int)
    {
        cout << "Array index out of bound error exception";
    }

    cout << "Finish";
    return 0;
}
