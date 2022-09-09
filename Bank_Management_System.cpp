#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class bank
{
    char name[100], mother[100], addr[30], type[20];
    float balance;

public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account()
{
    cout << "\nEnter your name: " << endl;
    cin.ignore();
    cin.getline(name, 100);
    cout << "\nEnter your Mother's name: " << endl;
    cin.ignore();
    cin.getline(mother, 100);
    cout << "\nEnter your address: " << endl;
    cin.ignore();
    cin.getline(addr, 30);
    cout << "\nWhich type of Account Savings or Current? " << endl;
    cin.ignore();
    cin.getline(type, 20);
    cout << "\nEnter your 1st Deposit Amount: " << endl;
    cin >> balance;

    cout << "\nYour Account has been created successfully!!";
}
void bank::deposit_money()
{
    int d;
    cout << "\nEnter the amount you want to deposit : " << endl;
    cin >> d;
    balance = balance + d;
    cout << "\nYour current balance is: " << balance << endl;
}
void bank::withdraw_money()
{
    float w;
    cout << "\nEnter the amount you want to withdraw : " << endl;
    cin >> w;
    balance = balance - w;
    cout << "\nYour current balance is : " << balance << endl;
}

void bank::display_account()
{
    cout << "\nYour name is : "<<name<< endl;
    cout << "\nYour mother's name is : "<<mother<< endl;
    cout << "\nYour address is : "<<addr<< endl;
    cout << "\nYour account type is : "<<type<< endl;
    cout << "\nYour current balance is : "<<balance<< endl;
}

int main()
{
    bank obj;
    int ch;
    char option;
    do
    {
        cout << "\n<<------------------------------------------------------------------------------------->>" << endl;
        cout << "\n<<--------------------------- Central Bank welcomes you ------------------------------->>" << endl;
        cout << "\n<<------------------------------------------------------------------------------------->>" << endl;

        cout << "\n1.) Open Account-----" << endl;
        cout << "\n2.) Deposit Money-----" << endl;
        cout << "\n3.) Withdraw Money-----" << endl;
        cout << "\n4.) Display Account-----" << endl;
        cout << "\n5.) Exit-----" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\n1.) Open Account-----" << endl;
            obj.open_account();
            break;

        case 2:
            cout << "\n2.) Deposit Money-----" << endl;
            obj.deposit_money();
            break;

        case 3:
            cout << "\n3.) Withdraw Money-----" << endl;
            obj.withdraw_money();
            break;

        case 4:
            cout <<"\n4.) Display Account-----" << endl;
            obj.display_account();
            break;

        case 5:
            if (ch == 5)
            {
                exit(1);
            }

        default:
            cout << "\nPlease try again and choose the correct option!!" << endl;
            break;
        }

        cout << "\nDo you want to continue the banking system without exit ?? Y/N !" << endl;
        option = getch();
        if ((option == 'n') || (option == 'N'))
        {
            exit(0);
        }
    } while ((option == 'y') || (option == 'Y'));

    return 0;
}