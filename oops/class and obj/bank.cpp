#include<iostream>
#include<string>
using namespace std;

class bank_account {
private:
    double balance = 0.0;
public:
    long long acc_no;
    string acc_name;

    void deposit() {
        double amount;
        cout << "Enter Amount To Deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Your balance is: " << balance << endl;
    }

    void withdraw() {
        double debit;
        cout << "Enter Amount To Withdraw: ";
        cin >> debit;
        if (debit > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= debit;
            cout << "Your balance is: " << balance << endl;
        }
    }

    void show() {
        cout << "Your Balance Is: " << balance << endl;
    }
};

int main() {
    bank_account p1;
    p1.acc_name = "Kaushal Kumar";
    p1.acc_no = 5396087254;

    int choice;

    cout << "Welcome, " << p1.acc_name << endl;
    cout << "Account No: " << p1.acc_no << endl;

    while (true) {
        cout << "\n========= MENU =========" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Show Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                p1.deposit();
                break;
            case 2:
                p1.withdraw();
                break;
            case 3:
                p1.show();
                break;
            case 4:
                cout << " Thank you for using our banking service!" << endl;
                return 0;
            default:
                cout << " Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}
