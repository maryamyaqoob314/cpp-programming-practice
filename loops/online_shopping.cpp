#include <iostream>
using namespace std;
int main() {
    double itemPrice;
    double finalBill;
    double totalBill = 0;

    cout << "Enter Item Price: ";
    cin >> itemPrice;

    while (itemPrice != 0){
        totalBill += itemPrice;

        cout<<"Enter Item Price: ";
        cin >> itemPrice;

        if (totalBill > 1000){
            finalBill = totalBill * 0.9; // 10% discount
        }
        else{
            finalBill = totalBill;
        }
    }
    cout << "Total Bill: " << totalBill << endl;
    cout << "Final Bill: " << finalBill << endl;
    return 0;
    
}