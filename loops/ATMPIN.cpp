#include <iostream>
using namespace std;
int main()
{
    int pin;
    int correctPin = 1234;

    int attempts = 1;
    while (attempts <= 3)
    {
        cout << "Enter your PIN: ";
        cin >> pin;

        if (pin == correctPin){
            cout << "Access Granted" << endl;
            break;
        }
        else{
            cout << "Incorrect PIN. Try again." << endl;
        }
    attempts++;
    }
    return 0;
}