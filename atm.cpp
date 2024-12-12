#include <iostream.h>
#include <conio.h>

main()
{
    float balance = 500.00;
    int choice;
    float amount;

    clrscr();
    cout << "===========================" << endl;
    cout << " Welcome to RBC Bank " << endl;
    cout << "Press any key to continue...." << endl;
    getch();

    do
    {
        clrscr();
        cout << "RBC Bank" << endl;
        cout << "=======================" << endl;
        cout << "Transaction Menu" << endl;
        cout << "1. Balance Inquiry" << endl;
        cout << "2. Deposit Transaction" << endl;
        cout << "3. Withdraw Transaction" << endl;
        cout << "4. Exit" << endl;
        cout << "Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                clrscr();
                cout << "Your current balance is " << balance << endl;
                cout << "Press any key to go back to the transaction menu" << endl;
                getch();
                break;

            case 2:
                clrscr();
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Your current balance is " << balance << endl;
                cout << "Press any key to go back to the transaction menu....." << endl;
                getch();
                break;

            case 3:
                clrscr();
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (balance < amount)
                {
                    cout << "Insufficient funds" << endl;
                }
                else
                {
                    balance -= amount;
                    cout << "Your current balance is " << balance << endl;
                }
                cout << "Press any key to go back to the transaction menu" << endl;
                getch();
                break;

            case 4:
                clrscr();
                cout << "Thank you for banking with us!" << endl;
                break;

            default:
                cout << "Invalid choice, please try again." << endl;
                getch();
        }
    } while (choice != 4);
}
