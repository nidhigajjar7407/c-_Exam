#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;
    string ownerName;

public:
    void setDetails(int accNo, float blnc, string name)
    {
        accountNumber = accNo;
        balance = blnc;
        ownerName = name;
    }

    void credit(float amount)
    {
        balance = balance + amount;
    }

    void debit(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Low Balance!" << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;

    b1.setDetails(101, 5000, "Nidhi");

    cout << "Initial Account Details:" << endl;
    b1.display();

    b1.credit(2000);

    cout << "\nAfter Credit:" << endl;
    b1.display();

    b1.debit(1000);

    cout << "\nAfter Debit:" << endl;
    b1.display();

    return 0;
}