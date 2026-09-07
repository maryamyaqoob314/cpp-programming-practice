#include <iostream>
using namespace std;

bool withdraw(int balance, int amount){
    if(amount <= 0){
        cout << "Invalid amount." << endl;
        return false;
    }
    if(amount > balance){
        cout << "Insufficient balance." << endl;
        return false;
    }
    if(amount <= balance){
        int remainingBalance = balance - amount;
        cout << "Withdrawal successful." << endl;
        cout << "Remaining balance: Rs." << remainingBalance << endl;
        return true;
    }
    else{
        cout << "Withdrawal limit exceeded." << endl;
        return false;
    }
}
int main(){
    int balance = 50000;
    int amount = 15000;
    cout << "Balance: Rs." << balance << endl;
    cout << "Withdrawal: Rs." << amount << endl;
    withdraw(balance, amount);
    
    return 0;
}