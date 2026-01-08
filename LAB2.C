#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[50], n, i;

    cout << "Enter no of elements";
    cin >> n;

    cout << "Enter elements";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << "Enter in Ascending order";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    sort(arr, arr + n, greater<int>());
    cout << "Enter in descending order";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
