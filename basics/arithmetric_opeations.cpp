#include <iostream>
using namespace std;
int main()
{
    int item1, item2;
    cout << "Enter the price of the first item: ";
    cin >> item1;
    cout << "Enter the price of the second item: ";
    cin >> item2;

    int totalBill = item1 + item2;
    int discountPrice = totalBill - 500;
    int identiticalItem1 = item1 * 3;
    int installmentPrice = discountPrice / 4;
    int remainingAmount = discountPrice % 1000;
    cout << "-------Online Shopping Bill-------" << endl;
    cout << "Total Bill:        " << totalBill << endl;
    cout << "Discounted Price:  " << discountPrice << endl;
    cout << "Identical Item 1:  " << identiticalItem1 << endl;
    cout << "Installment Price: " << installmentPrice << endl;
    cout << "Remaining Amount:  " << remainingAmount << endl;

    return 0;
}
