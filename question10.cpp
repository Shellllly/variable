#include <iostream>
using namespace std;

int main() {
    // User's account balance and daily limits
    double account_bal = 60000.00;
    double daily_limit = 3000.00;

    // Get withdrawal amount from the user
    double withdrawal_amt;
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawal_amt;

    // Verify if withdrawal amount is within transaction limits
    if (withdrawal_amt > daily_limit) {
        cout << "Sorry, you have surpassed the daily withdrawal limit." << endl;
    } else if (withdrawal_amt > account_bal) {
        cout << "Sorry, you have insufficient funds in your account." << endl;
    } else {
        // Process the withdrawal
        account_bal -= withdrawal_amt;
        cout << "Withdrawal successful. Remaining balance: " << account_bal << endl;
    }

    return 0;
}