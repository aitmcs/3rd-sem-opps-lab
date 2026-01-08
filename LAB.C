#include <iostream>
using namespace std;

class employee
{
    char name[20];
    int acc_no;
    float balance, deposit, withdraw;

public:
    void read()
    {
        cout << "Enter employee name";
        cin >> name;

        cout << "Enter account number";
        cin >> acc_no;

        cout << "Enter balance";
        cin >> balance;
    }

    void print()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Account No: " << acc_no << endl;

        if (balance < 500)
        {
            cout << "Invalid balance" << endl;
        }
        else
        {
            cout << "Balance: " << balance << endl;

            cout << "Enter the amount to be deposited";
            cin >> deposit;
            balance = balance + deposit;
            cout << "Balance after deposit: " << balance << endl;

            cout << "Enter the amount to be withdrawn";
            cin >> withdraw;
            balance = balance - withdraw;
            cout << "Balance after withdraw: " << balance << endl;
        }
    }
};

int main()
{
    employee e;
    e.read();
    e.print();
    return 0;
}
