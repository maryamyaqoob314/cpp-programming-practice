#include <iostream>
using namespace std;
int main()
{
    int transcations[7] = {500, -200, 1000, -300, 700, -150, 400};
    int totalDeposits = 0;
    int totalWithdrawals = 0;
    int finalBalance = 0;
    int highestDeposit = transcations[0];
    int countWithdrawals = 0;

    for (int i = 0; i < 7; i++)
    {
        cout << transcations[i] << " ";
        if (transcations[i] > 0)
        {
            totalDeposits += transcations[i];
            if (transcations[i] > highestDeposit)
            {
                highestDeposit = transcations[i];
            }
        }
        else
        {
            totalWithdrawals += transcations[i];
            countWithdrawals++;
        }
    }
    finalBalance = totalDeposits + totalWithdrawals;

    cout << "\nTotal deposits: Rs." << totalDeposits << endl;
    cout << "Total withdrawals: Rs." << totalWithdrawals << endl;
    cout << "Final balance: Rs." << finalBalance << endl;
    cout << "Total number of withdrawals: " << countWithdrawals << endl;
    cout << "Highest deposit: Rs." << highestDeposit << endl;

    return 0;
}